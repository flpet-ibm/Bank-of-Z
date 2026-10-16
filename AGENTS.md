# AGENTS.md

This file provides guidance to agents when working with code in this repository.

## What This Is

**Bank of Z** is a hybrid IBM Z banking demo that routes transactions to either CICS or IMS depending on customer ID, with z/OS Connect as the API gateway. There is no local test runner — all builds and tests execute **on z/OS** via Zowe CLI.

## Repository Structure

```
src/base/cics/cobol/    CICS COBOL programs (*.cbl)
src/base/cics/copy/     CICS copybooks (*.cpy)
src/base/cics/pli/      CICS PL/I programs (*.pli)
src/base/cics/plinc/    CICS includes (*.inc)
src/base/cics/bms/      BMS maps (*.bms)
src/base/ims/cobol/     IMS COBOL programs
src/base/ims/pli/       IMS PL/I programs
src/base/ims/DBD/       IMS database descriptors (*.asm)
src/base/ims/PSB/       IMS program spec blocks (*.asm)
src/base/batch/         Batch JCL and PL/I
src/api/                z/OS Connect API (Gradle, OpenAPI 3.0)
src/frontend/           Vanilla JS frontend (no npm/webpack)
.setup/                 Setup and pipeline automation scripts
.setup/config/config.yaml  All environment configuration (Jinja2 templates)
.setup/build/           DBB zBuilder build definitions
zcodescan/              ZCodeScan static analysis rules
zapp.yaml               IBM Z Open Editor property groups and build profile
```

## Build System: IBM DBB (zBuilder)

Builds run **remotely on z/OS** — there is no local compile step.

| Lifecycle | Command | Purpose |
|-----------|---------|---------|
| Full build | `dbb build full --hlq <HLQ>.DBB --config dbb-app.yaml` | Build all programs |
| Impact build | `dbb build pipeline --hlq <HLQ>.DBB --config dbb-app.yaml` | Build changed programs only |
| Single file | `dbb build file --hlq <HLQ>.DBB --config dbb-app.yaml` | Build one program |
| User build (IDE) | Triggered via `zapp.yaml` `zBuilder-userbuild` profile | Single-file build with TAZ unit test |

**VSCode Tasks** (wraps Zowe CLI):
- `Setup Bank of Z Environment` → runs `.setup/setup-local.sh` (first-time z/OS setup)
- `Run Pipeline Simulation` → runs `.setup/pipeline-local.sh` (build + deploy cycle)

## Static Analysis (ZCodeScan)

Runs on z/OS after DBB preview pass. Rules defined in [`zcodescan/zcodescan-rules.yaml`](zcodescan/zcodescan-rules.yaml). Max RC = 4 (warnings allowed). Accepts `--errPrefix` for IDE error feedback.

## Unit Testing (TAZ)

TAZ tests run as part of the `user` build lifecycle (see [`dbb-build.yaml`](.setup/build/dbb-build.yaml)). Profile `taz-test` in `zapp.yaml` points to `BANKZ.V0R1M0.LOAD`. No local test runner exists.

## z/OS Connect API (src/api/)

- Built with Gradle using `com.ibm.zosconnect.gradle` plugin v1.6.2
- OpenAPI spec: [`src/api/src/main/api/openapi.yaml`](src/api/src/main/api/openapi.yaml)
- Each operation lives in a URL-encoded path directory under `src/api/src/main/operations/`
- zOS asset types: `cicsCommarea-1.0` (CICS) and IMS variants defined in `zosAsset.yaml` files
- Build: run `gradle build` from `src/api/` — generates the z/OS Connect API WAR

## Frontend (src/frontend/)

- Pure vanilla JS — no npm, no bundler, no node_modules
- API URL is dynamically constructed in [`src/frontend/config.js`](src/frontend/config.js): port 3001 → proxy `/api`; otherwise `<protocol>://<host>:<9444 or 9080>/api`
- Default sort code: `987654`
- Frontend Liberty server: `FE<APP_SHORT_NAME>` on port 9445 (HTTPS) / 9081 (HTTP)
- z/OS Connect server: `BAQ<APP_SHORT_NAME>` on port 9444 (HTTPS) / 9080 (HTTP)

## COBOL Conventions

- CICS programs start with `CBL CICS('SP,EDF')` and `CBL SQL` directives at line 1-2
- Some programs use `PROCESS CICS,NODYNAM,NSYMBOL(NATIONAL),TRUNC(STD)` instead (mixed — both patterns exist)
- IMS COBOL programs (prefix `IB`) use `CBL LIST,MAP,XREF,FLAG(I)` — no CICS/SQL directives
- Copybooks: DB2 table DDL via `EXEC SQL INCLUDE <name> END-EXEC` (not COPY)
- Dependency search path for copybooks: `${WORKSPACE}/?path=${APP_DIR_NAME}/copybook/*.cpy`
- DBB detects CICS/SQL/IMS from source scan; deploy type auto-selects (CICSLOAD / IMSLOAD / LOAD)
- COBOL source files matched by DBB: `**/cobol/*.cbl`
- ZCodeScan rule: inline PERFORM limit = 30 lines, procedure limit = 100 lines, nested IF limit = 6

## PL/I Conventions

- IMS PL/I programs use `*PROCESS SYSTEM(IMS);` at line 1
- DCL IMS call codes as `CHAR(4)` with trailing spaces: `DCL GU CHAR(4) INIT('GU  ');`
- PL/I dependency search uses `**/*.inc` pattern (not `*.cpy`)
- Comment syntax: every block comment opener `/*` must have a matching closer `*/` on the **same line**; the closing `*/` must end at or before column 72
- DB2 `VARCHAR` columns must be declared as `CHAR(n) VAR` in PL/I host variable structures

## Data Dictionary

The local scan database is stored at:
`C:\Users\FlemmingPetersen\AppData\Roaming\IBM Bob\User\workspaceStorage\fe6a2c6c687f7adbefe97221d5add983\IBM.bob-z-extension\.tmi\WCA4ZTMIOutput\ScannerOutput.db`

Path is recorded in [`.bobz/local-settings.json`](.bobz/local-settings.json).

## Configuration

All z/OS environment values live in [`.setup/config/config.yaml`](.setup/config/config.yaml) (Jinja2).  
Key defaults: `APP_HLQ=BANKZ`, `APP_SHORT_NAME=BOZ`, CICS region `CICSBOZ`, CICS TX entry `OMEN`.  
Rendered by `.setup/lib/render_template.py` before DBB runs (produces `datasets.yaml` from `datasets.yaml.j2`).

## Zowe CLI Profile

Default Zowe profile name: `bankz` (RSE). See `.setup/config/config.yaml` under `zowe.rse_profile`.
