 /* **************************************************************** */
 /*                                                                */
 /*  Copyright IBM Corp. 2023                                      */
 /*                                                                */
 /* **************************************************************** */
 /* Converted from ABNDINFO.cpy                                    */
 /* Include at level 3 inside the declaring DCL 1 structure.      */
   3 ABND_VSAM_KEY,
     5 ABND_UTIME_KEY         FIXED DEC(15,0),
     5 ABND_TASKNO_KEY        CHAR(4),
   3 ABND_APPLID              CHAR(8),
   3 ABND_TRANID              CHAR(4),
   3 ABND_DATE                CHAR(10),
   3 ABND_TIME                CHAR(8),
   3 ABND_CODE                CHAR(4),
   3 ABND_PROGRAM             CHAR(8),
   3 ABND_RESPCODE            CHAR(9), 
     /* S9(8) DISPLAY SIGN LEADING SEPARATE = 9 chars */
   3 ABND_RESP2CODE           CHAR(9),
   3 ABND_SQLCODE             CHAR(9),
   3 ABND_FREEFORM            CHAR(600);