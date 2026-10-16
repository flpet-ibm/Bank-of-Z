 /* ----------------------------------------------------------------- */
 /*  Copyright IBM Corp. 2023                                         */
 /*  XFRFUN.inc - Transfer Funds commarea                             */
 /*  Mirrors XFRFUN.cpy                                               */
 /* ----------------------------------------------------------------- */
 DCL 1 XFRFUN_COMMAREA,
       2 COMM_FACCNO           CHAR(8),
       2 COMM_FSCODE           CHAR(6),
       2 COMM_TACCNO           CHAR(8),
       2 COMM_TSCODE           CHAR(6),
       2 COMM_AMT              FIXED DEC(12,2),
       2 COMM_FAVBAL           FIXED DEC(12,2),
       2 COMM_FACTBAL          FIXED DEC(12,2),
       2 COMM_TAVBAL           FIXED DEC(12,2),
       2 COMM_TACTBAL          FIXED DEC(12,2),
       2 COMM_FAIL_CODE        CHAR(1),
       2 COMM_SUCCESS          CHAR(1);
