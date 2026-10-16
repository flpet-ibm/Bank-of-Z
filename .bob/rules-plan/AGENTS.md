# Architecture / Plan Rules (Non-Obvious Only)

## Dual-Backend Architecture

The system has **two parallel backend stacks** for the same business operations:
- **CICS + DB2**: Customer IDs not matching IMS range. Programs prefix: `BNK1`, `CREA`, `DBCR`, `INQ`, `UPD`, `DEL`, `XFR`
- **IMS + DB2 (history)**: Customer IDs routed to IMS. Programs prefix: `IB`

Both backends share the same DB2 tables for account/customer data but use different IMS segment structures for IMS-native data.

## z/OS Connect Is a Pure Pass-Through

z/OS Connect does **no business logic**. Each `zosAsset.yaml` maps an API operation directly to a CICS COMMAREA call or IMS operation. Response mapping is defined per-operation in `response_mapping.yaml` files.

## Deployment Pipeline Has Four Stages

1. **DBB build** (`task-dbb-build.sh`) — compiles, packages TAR
2. **Static scan** (`task-zcodescan-static-scan.sh`) — runs ZCodeScan; max RC 4
3. **Wazi Deploy** (`task-wazi-deploy.sh`) — deploys TAR to z/OS using deployment method YAML
4. **Verification** (`task-install-verification.sh`) — smoke test

Pipeline is orchestrated by `pipeline-remote.sh` (runs on z/OS); `pipeline-local.sh` uploads and triggers it via Zowe CLI.

## Build Artifacts and Dataset Naming

All z/OS datasets use HLQ `BANKZ` (configurable). Pattern: `BANKZ.DBB.COBOL`, `BANKZ.DBB.LOAD`, `BANKZ.V0R1M0.LOAD` (deployed load library). DBB intermediate artifacts go to `BANKZ.DBB.*`; deployed artifacts go to `BANKZ.V0R1M0.*`.

## IMS Java (JMP) Is a Separate Build

`src/base/ims/java/` is a standalone Gradle project built by the `ImsJavaBuilder` Groovy task in the `full`/`impact`/`pipeline` DBB lifecycles. It produces a JAR (`IMS-JAR` deploy type) for the IMS JMP region that handles transaction history writes to DB2.

## Two API Paths, Same OpenAPI Spec

The `openapi.yaml` contains both `/ims/*` and non-IMS paths in a **single spec file**. There is no separate spec for IMS. The `operationId` prefix differentiates them (e.g., `getIMSCustomer` vs `getCustomer`).

## Frontend API URL Is Hardcoded to Port Logic

The frontend URL construction in `config.js` is not configurable at runtime — it's compiled into the static JS. If ports change from 9444/9080, `config.js` must be updated and the frontend WAR rebuilt.

## Certificate Re-Sign Pattern (RACF + Bouncy Castle)

The TLS setup uses a **re-sign approach**: RACF generates the keypair (private key never leaves RACF), the public cert is exported and re-signed with EKU + SANs using Bouncy Castle, then re-imported. Liberty accesses it via `safkeyring://`. This is why standard `keytool` or `openssl` approaches won't work here.

## TAZ Unit Test Condition

The `UnitTest` task in the `user` lifecycle runs only when `${STATUS} == 2 || ${STATUS} == 0` — it is **skipped on build error or PREVIEW** mode. TAZ tests do not run in `full`/`impact`/`pipeline` lifecycles; they are IDE-only via the `user` lifecycle.

## ZCodeScan Max RC Is 4

Static scan accepts warnings (RC=4). A ZCodeScan failure only blocks the pipeline if RC > 4. The `zcodescan` profile in `zapp.yaml` points to the local `zcodescan/zcodescan-rules.yaml`, which includes custom PL/I rules in addition to COBOL rules.
