 /* ----------------------------------------------------------------- */
 /*  Copyright IBM Corp. 2023                                         */
 /*  INQACC.inc - Enquire Account commarea                            */
 /*  Mirrors INQACC.cpy / INQACCZ.cpy                                */
 /* ----------------------------------------------------------------- */
 DCL 1 INQACC_COMMAREA,
       2 INQACC_EYE            CHAR(4),
       2 INQACC_CUSTNO         CHAR(10),
       2 INQACC_SCODE          CHAR(6),
       2 INQACC_ACCNO          CHAR(8),
       2 INQACC_ACC_TYPE       CHAR(8),
       2 INQACC_INT_RATE       FIXED DEC(6,2),
       2 INQACC_OPENED         FIXED DEC(8,0),
       2 INQACC_OVERDRAFT      FIXED DEC(8,0),
       2 INQACC_LAST_STMT_DT   FIXED DEC(8,0),
       2 INQACC_NEXT_STMT_DT   FIXED DEC(8,0),
       2 INQACC_AVAIL_BAL      FIXED DEC(12,2),
       2 INQACC_ACTUAL_BAL     FIXED DEC(12,2),
       2 INQACC_SUCCESS        CHAR(1),
       2 INQACC_PCB1_POINTER   POINTER;
