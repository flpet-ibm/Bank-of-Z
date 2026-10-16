 /* ----------------------------------------------------------------- */
 /*  Copyright IBM Corp. 2023                                         */
 /*  ABNDINFO.inc - Abend information structure                       */
 /*  Mirrors ABNDINFO.cpy                                             */
 /* ----------------------------------------------------------------- */
 DCL 1 ABNDINFO_REC,
       2 ABND_VSAM_KEY,
         3 ABND_UTIME_KEY      FIXED DEC(15,0) INIT(0),
         3 ABND_TASKNO_KEY     CHAR(4)         INIT(' '),
       2 ABND_APPLID           CHAR(8)         INIT(' '),
       2 ABND_TRANID           CHAR(4)         INIT(' '),
       2 ABND_DATE             CHAR(10)        INIT(' '),
       2 ABND_TIME             CHAR(8)         INIT(' '),
       2 ABND_CODE             CHAR(4)         INIT(' '),
       2 ABND_PROGRAM          CHAR(8)         INIT(' '),
       2 ABND_RESPCODE         CHAR(10)        INIT(' '),
       2 ABND_RESP2CODE        CHAR(10)        INIT(' '),
       2 ABND_SQLCODE          CHAR(10)        INIT(' '),
       2 ABND_FREEFORM         CHAR(600)       INIT(' ');
