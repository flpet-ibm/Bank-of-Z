 /* ----------------------------------------------------------------- */
 /*  Copyright IBM Corp. 2023                                         */
 /*  CREACC.inc - Create Account commarea                             */
 /*  Mirrors CREACC.cpy                                               */
 /* ----------------------------------------------------------------- */
 DCL 1 CREACC_COMMAREA,
       2 COMM_EYECATCHER       CHAR(4),
       2 COMM_CUSTNO           CHAR(10),
       2 COMM_KEY,
         3 COMM_SORTCODE       CHAR(6),
         3 COMM_NUMBER         CHAR(8),
       2 COMM_ACC_TYPE         CHAR(8),
       2 COMM_INT_RT           FIXED DEC(6,2),
       2 COMM_OPENED           FIXED DEC(8,0),
       2 COMM_OVERDR_LIM       FIXED DEC(8,0),
       2 COMM_LAST_STMT_DT     FIXED DEC(8,0),
       2 COMM_NEXT_STMT_DT     FIXED DEC(8,0),
       2 COMM_AVAIL_BAL        FIXED DEC(12,2),
       2 COMM_ACT_BAL          FIXED DEC(12,2),
       2 COMM_SUCCESS          CHAR(1),
       2 COMM_FAIL_CODE        CHAR(1);
