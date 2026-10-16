# AGENTS.md

This file provides guidance to agents when working with code in this repository.

## Workspace Type

**Application platform: IBM Z**
**Detected Languages:** IBM Enterprise COBOL for z/OS, PL/I, HLASM (IMS PSBs/DBDs), JCL, Java (IMS bridge)

## Architecture

Bank of Z is a hybrid banking app routing transactions through **CICS** (customer IDs starting with `C`) or **IMS TM** (customer IDs starting with `I`). z/OS Connect acts as the REST API gateway between the browser UI and z/OS backends.

## Source Layout

```
src/base/cics/cobol/   CICS COBOL programs
src/base/cics/copy/    Copybooks for CICS path
src/base/cics/bms/     BMS map definitions
src/base/ims/cobol/    IMS COBOL programs
src/base/ims/copy/     Copybooks for IMS path
src/base/ims/pli/      IMS PL/I programs
src/base/ims/PSB/      IMS PSB definitions (HLASM)
src/base/ims/DBD/      IMS DBD definitions (HLASM)
src/base/ims/java/     IMS Java bridge (Gradle project)
src/base/batch/jcl/    Batch JCL
src/base/batch/pli/    Batch PL/I programs
src/api/               z/OS Connect API (Gradle project, OpenAPI)
src/frontend/          Vanilla JS/HTML browser UI
```

## Build System

Builds run on z/OS USS via DBB (Dependency Based Build). The build descriptor is [`dbb-app.yaml`](dbb-app.yaml).

- **Full build + deploy** (initial setup): `.setup/setup-local.sh` (runs from local machine via Zowe CLI)
- **Incremental build** (day-to-day dev): `.setup/pipeline-local.sh` (requires existing deployed environment)
- **User build** (IDE-triggered): configured in `zapp.yaml` under the `zBuilder-userbuild` profile using `$DBB_HOME/bin/dbb build`

Application HLQ: `BANKZ`, short name: `BOZ`.

## Testing

Integration tests are shell scripts (require a running z/OS environment):

```bash
# Run all tests
BASE_URL=http://<host>:<port>/api FRONTEND_URL=http://<host>:<port> bash tests/run-all.sh

# Run a single test
bash tests/test_get_customer_cics.sh

# Skip IMS tests
IMS_DISABLED=true bash tests/run-all.sh
```

Tests source `.setup/config/setenv.sh` automatically if it exists. `ZOSCONNECT_HTTP_PORT` and `FRONTEND_HTTP_PORT` must be set if `BASE_URL`/`FRONTEND_URL` are not provided directly.

## Static Analysis (ZCodeScan)

ZCodeScan rules for both COBOL and PL/I are defined in [`zcodescan/zcodescan-rules.yaml`](zcodescan/zcodescan-rules.yaml). This file is referenced by the `zcodescan` profile in [`zapp.yaml`](zapp.yaml).

Key enforced rules include:
- SQL: always check `SQLCODE` after `EXEC SQL`, avoid `SELECT *`, require `WHERE` clauses on SELECT/DELETE/UPDATE
- CICS: use `RESP`/`RESP2` (not `HANDLE CONDITION`), check COMMAREA length
- COBOL structure: `END-IF`/`END-EVALUATE`/`END-READ`/`END-CALL` required; inline PERFORM limited to 30 lines; paragraphs to 100 lines; max IF nesting depth 6
- Security: flag unprotected credentials, `ACCEPT FROM CONSOLE`, XML parsing

## Secret Scanning

Pre-commit hook uses IBM `detect-secrets` (configured in [`.pre-commit-config.yaml`](.pre-commit-config.yaml)). Fails on unaudited secrets. Baseline is `.secrets.baseline`.

## Git Commits — MANDATORY

**All commits must include a DCO sign-off:**
```bash
git commit -s -m "message"   # -s is mandatory, not optional
```
PR checks will reject unsigned commits. See [`.bob/git-commit-guidelines.md`](.bob/git-commit-guidelines.md) for remediation.

## Data Dictionary

**DATA_DICTIONARY:** `bobz/DD.json`

A scanned program database is available at the path stored in `.bobz/local-settings.json` (`databaseLocation`). Use the `execute_sql_query` tool for cross-program analysis before reading individual source files.

## COBOL Coding Patterns

- All CICS COBOL programs start with `CBL CICS(...)` and/or `CBL SQL` compiler directives on the first lines (before `IDENTIFICATION DIVISION`).
- DB2 host variable structures use prefix `HV-` (COBOL) or `HV_` (PL/I).
- `IBTRAN.cbl` is special: compiled with `PGMNAME(LONGMIXED),DLL,RENT,LP(32),JAVAIOP(JAVA64)` and linked with `igzxjni2.x` + `libjvm31.x` for the 31-bit→64-bit IMS/Java bridge.
- All IMS batch COBOL programs require `ENTRY DLITCBL` in their link-edit stream.
- DBD/PSB files in `src/base/ims/DBD/` and `src/base/ims/PSB/` are HLASM sources — they are assembled and deployed to `DBDLOAD`/`PSBLOAD` libraries, not standard `LOAD`.

## PL/I Conventions

- Every CICS program must have `COMM_AREA_PTR` on the parameter list of the main procedure (`PROCEDURE(COMM_AREA_PTR) OPTIONS(MAIN REENTRANT);`). `COMM_AREA_PTR` must be declared as a `POINTER`, and `DFHCOMMAREA` must be based on this pointer (`DCL 1 DFHCOMMAREA BASED(COMM_AREA_PTR)...`).
- IMS PL/I programs use `*PROCESS SYSTEM(IMS);` at line 1
- DCL IMS call codes as `CHAR(4)` with trailing spaces: `DCL GU CHAR(4) INIT('GU  ');`
- PL/I dependency search uses `**/*.inc` pattern (not `*.cpy`)
- Comment syntax: every block comment opener `/*` must have a matching closer `*/` on the **same line**; the closing `*/` must end at or before column 72
- DB2 `VARCHAR` columns must be declared as `CHAR(n) VAR` in PL/I host variable structures
- *process statement must begin in column 1

## Technical Documentation

Full documentation: <https://ibm.github.io/Bank-of-Z/>

| Area | Documentation |
|------|--------------|
| Architecture overview | `docs/docs/about-bank-of-z/architecture-overview.md` |
| Application components | `docs/docs/architecture/application-components.md` |
| Request flow & routing logic | `docs/docs/architecture/application-flow.md` |
| Build & deployment pipeline | `docs/docs/architecture/build-and-deployment.md` |
| Repository structure | `docs/docs/reference/repository-structure.md` |
| Commands reference | `docs/docs/reference/commands-reference.md` |
| Environment config | `.setup/config/config.yaml` |

**Auto-update rule:** When modifying COBOL/PL/I programs or build configuration, check whether the corresponding documentation file is affected and prompt for synchronization.

## Zowe Profile

The default Zowe profile is `bank-of-z` (z/OSMF port 9444, RSE port 8195, SSH port 22). See [`zowe.config.json`](zowe.config.json). Credentials are stored in the Zowe secure credential store (not in the file).

## Coding Standards

Coding standards for COBOL and PL/I are enforced via the workspace's coding standard skill. Do not reference standards files directly — apply standards through the skill.
