# Ask / Documentation Rules (Non-Obvious Only)

## Where Things Actually Live

- `src/base/` is the **mainframe source** (COBOL, PL/I, BMS, Assembler, JCL) — not Java or web code
- `src/api/` is a **Gradle/Java project** that builds the z/OS Connect API WAR — it is NOT the banking backend
- `src/frontend/` contains the browser UI — vanilla JS, no npm
- `src/base/ims/java/` is an **IMS Java Message Processing (JMP)** application (Gradle) that handles transaction history inserts into DB2 from IMS
- DBD (`*.asm`) files in `src/base/ims/DBD/` are **IMS database descriptors** written in HLASM — not executable programs
- PSB (`*.asm`) files in `src/base/ims/PSB/` are **IMS program specification blocks** — also HLASM
- IMS COBOL programs are in `src/base/ims/cobol/` (prefix `IB`); IMS PL/I is a single `IBLOGIN.pli` in `src/base/ims/pli/`
- IMS copybooks (`src/base/ims/copy/`) use `JNI.cpy` for the IMS JMP Java bridge

## Routing Logic Is Runtime, Not Compile-Time

There is no single "routing program". The API layer (z/OS Connect) calls different CICS transactions vs IMS operations based on the URL path:  
- Paths starting with `/ims/` → IMS (see `openapi.yaml`)
- All other paths → CICS

## CICS Transaction Entry Point

The primary CICS menu transaction is `OMEN`. The BMS application entry screen is in [`BNK1MAI.bms`](src/base/cics/bms/BNK1MAI.bms). Customer 1, Account 1234 is the standard test fixture.

## Two Liberty Servers — Different Ports

`BAQ<APP_SHORT_NAME>` (z/OS Connect, port 9080/9444) serves the API only.  
`FE<APP_SHORT_NAME>` (Frontend Liberty, port 9081/9445) serves the frontend WAR.  
They are separate server directories on z/OS. CORS is configured on the z/OS Connect server.

## Config.yaml Is the Source of Truth

All HLQs, ports, paths, userids, and middleware versions are in [`.setup/config/config.yaml`](.setup/config/config.yaml). Other YAML files (`.j2` templates) reference it via Jinja2 `{{ }}` syntax.

## ZCodeScan Rules Are Local, Not Default

Custom ZCodeScan rules are in [`zcodescan/zcodescan-rules.yaml`](zcodescan/zcodescan-rules.yaml). These override the default ruleset. The `zapp.yaml` points to this file via the `zcodescan` profile.
