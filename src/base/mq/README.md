# MQ triggering of a CICS transaction (sample)

When a message arrives on `BANKZ.REQUEST.QUEUE`, the queue manager puts a
trigger message on `BANKZ.INITQ`. The CICS trigger monitor `CKTI` reads it and
starts transaction `OMQT`, which runs program `MQTRIG`.

| Artifact | Purpose |
|----------|---------|
| [`mqsc/BANKZ.mqsc`](mqsc/BANKZ.mqsc) | Queue manager objects: initiation queue, process definition, backout queue, application queue |
| [`../cics/pli/MQTRIG.pli`](../cics/pli/MQTRIG.pli) | PL/I program: retrieves the MQTM, opens the queue, drains it under syncpoint |
| `.setup/zconfig/bank-of-z-definitions.yaml` | CICS `PROGRAM` MQTRIG and `TRANSACTION` OMQT |

## Steps to activate

1. **Define the MQ objects.** Run `mqsc/BANKZ.mqsc` against the queue manager, for example with the CSQUTIL `COMMAND` function or the MQ console.
2. **Connect CICS to MQ.** The CICS region needs the MQ adapter and the MQ libraries in its startup JCL. Follow the MQ for z/OS and CICS-MQ adapter manuals for your release.
3. **Define an `MQCONN` resource** that names the queue manager and sets `INITQNAME(BANKZ.INITQ)`. CICS then starts `CKTI` against that initiation queue. The resource model supports `mqconn` ([`resource-model.yaml`](../../../.setup/zconfig/resource-model.yaml)), but no `MQCONN` is defined in this repository, because the queue manager name is environment specific.
4. **Build.** `MQTRIG` is compiled by the PLI task in [`dbb-app.yaml`](../../../dbb-app.yaml). The task needs the MQ PL/I include library (`SCSQPLIC`) and the MQ load library (`SCSQLOAD`) in the build. `IS_MQ` is set by the DBB scanner when it detects MQ calls. If it is not detected, force it with `isMQ = true :: **/pli/MQTRIG.pli` in `application-conf/file.properties`.
5. **Install the CICS resources.** Install the `BANKZGRP` group so `MQTRIG` and `OMQT` are available.
6. **Test.** Put a message on `BANKZ.REQUEST.QUEUE` and check that `OMQT` runs.

## Notes

- `TRIGTYPE(FIRST)` creates one trigger when the queue goes from empty to not empty, so `MQTRIG` reads until `MQRC_NO_MSG_AVAILABLE`.
- Under CICS the program does not call `MQCONN` or `MQDISC`, and it commits with `EXEC CICS SYNCPOINT`, not `MQCMIT`.
- On an error the program abends, CICS backs out the unit of work, and the message goes back on the queue. `BOTHRESH(3)` and `BOQNAME` only set the backout threshold and the backout queue name. MQ does not move the message by itself, so the application must check `BackoutCount` and move it. Add that logic to `PROCESS_MESSAGE` if you need it.
- `PROCESS_MESSAGE` is a placeholder. Replace its body with your business logic.
- Queue, process and transaction names are samples.
