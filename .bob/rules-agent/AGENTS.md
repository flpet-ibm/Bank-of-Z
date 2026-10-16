# Agent Coding Rules (Non-Obvious Only)

## No Local Compile — z/OS Only

There is **no local build**. All COBOL, PL/I, Assembler, BMS, and REXX compilation happens on z/OS via DBB (zBuilder). Changes to `src/base/` only take effect after a DBB build + Wazi Deploy cycle run via `.setup/pipeline-local.sh`.

## COBOL File Placement and Compiler Directive Rules

DBB source patterns are path-sensitive:
- `**/cobol/*.cbl` → COBOL programs
- `**/copy/*.cpy` → copybooks
- `**/bms/*.bms` → BMS maps
- `**.pli` → PL/I (matches all directories, unlike COBOL)

**Never** put a `.cbl` file in a `copy/` directory or it will be treated as a copybook.

CICS COBOL programs use **either** `PROCESS CICS,...` at line 1 **or** `CBL CICS('SP,EDF')` at line 1-2 — the codebase mixes both. IMS COBOL programs (prefix `IB`) use `CBL LIST,MAP,XREF,FLAG(I)` with no CICS/SQL directives.

## CICS vs IMS Routing Is Customer-ID Based

The application routes to CICS or IMS based on customer ID at runtime — **not** at compile time. CICS programs are in `src/base/cics/`, IMS programs in `src/base/ims/`. Do not cross-reference them at the source level.

## DB2 Copybook Pattern

DB2 table DDL is included via `EXEC SQL INCLUDE <name> END-EXEC` — not via `COPY`. The copybook name maps to a member in `${HLQ}.COPY` on z/OS. Example: `EXEC SQL INCLUDE CUSTDB2 END-EXEC`.

## z/OS Connect Operation Structure

Each REST endpoint is a URL-encoded directory under `src/api/src/main/operations/`. Adding a new endpoint requires:
1. Creating the directory (e.g., `%2Fpath%2F%7BparamId%7D/get/`)
2. Adding `operation.yaml`, `request.yaml`, `response_<code>.yaml`, and `response_mapping.yaml`
3. Registering a `zosAsset.yaml` under `src/api/src/main/zosAssets/<PROGRAM>/`

## datasets.yaml Is Generated — Never Edit Directly

[`.setup/build/datasets.yaml`](.setup/build/datasets.yaml) is **rendered at build time** from `datasets.yaml.j2` + `config.yaml`. Edits are overwritten. Modify the `.j2` template and `config.yaml` instead.

## Gradle Build for API (src/api/)

Must run from the `src/api/` subdirectory — not the repo root. The Gradle plugin `com.ibm.zosconnect.gradle` v1.6.2 auto-generates code from `openapi.yaml`. The `processResources` task depends on `openApiGenerate` (explicit dependency added for Gradle 9.x compatibility).

## Frontend Has No Build Step

`src/frontend/` is static HTML/JS/CSS — copy directly to Liberty `apps/` or WAR it. The `VanillaFrontend` Groovy task in the DBB build handles this packaging.
