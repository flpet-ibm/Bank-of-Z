 /* ----------------------------------------------------------------- */
 /*  Copyright IBM Corp. 2023                                         */
 /*  UPDACC.inc - Update Account commarea                             */
 /*  Mirrors UPDACC.cpy                                               */
 /* ----------------------------------------------------------------- */
 DCL 1 UPDACC_COMMAREA,
       2 COMM_EYE              CHAR(4),
       2 COMM_CUSTNO           CHAR(10),
       2 COMM_SCODE            CHAR(6),
       2 COMM_ACCNO            CHAR(8),
       2 COMM_ACC_TYPE         CHAR(8),
       2 COMM_INT_RATE         FIXED DEC(6,2),
       2 COMM_OPENED           FIXED DEC(8,0),
       2 COMM_OVERDRAFT        FIXED DEC(8,0),
       2 COMM_LAST_STMT_DT     FIXED DEC(8,0),
       2 COMM_NEXT_STMT_DT     FIXED DEC(8,0),
       2 COMM_AVAIL_BAL        FIXED DEC(12,2),
       2 COMM_ACTUAL_BAL       FIXED DEC(12,2),
       2 COMM_SUCCESS          CHAR(1);
