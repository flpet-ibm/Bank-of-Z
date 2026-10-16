 /* ----------------------------------------------------------------- */
 /*  Copyright IBM Corp. 2023                                         */
 /*  DELACC.inc - Delete Account commarea                             */
 /*  Mirrors DELACC.cpy                                               */
 /* ----------------------------------------------------------------- */
 DCL 1 DELACC_COMMAREA,
       2 DELACC_EYE            CHAR(4),
       2 DELACC_CUSTNO         CHAR(10),
       2 DELACC_SCODE          CHAR(6),
       2 DELACC_ACCNO          CHAR(8),
       2 DELACC_ACC_TYPE       CHAR(8),
       2 DELACC_INT_RATE       FIXED DEC(6,2),
       2 DELACC_OPENED         FIXED DEC(8,0),
       2 DELACC_OVERDRAFT      FIXED DEC(8,0),
       2 DELACC_LAST_STMT_DT   FIXED DEC(8,0),
       2 DELACC_NEXT_STMT_DT   FIXED DEC(8,0),
       2 DELACC_AVAIL_BAL      FIXED DEC(12,2),
       2 DELACC_ACTUAL_BAL     FIXED DEC(12,2),
       2 DELACC_SUCCESS        CHAR(1),
       2 DELACC_FAIL_CD        CHAR(1),
       2 DELACC_DEL_SUCCESS    CHAR(1),
       2 DELACC_DEL_FAIL_CD    CHAR(1),
       2 DELACC_DEL_APPLID     CHAR(8),
       2 DELACC_DEL_PCB1       POINTER,
       2 DELACC_DEL_PCB2       POINTER,
       2 DELACC_DEL_PCB3       POINTER;
