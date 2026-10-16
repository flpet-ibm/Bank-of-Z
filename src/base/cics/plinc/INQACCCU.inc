 /* ----------------------------------------------------------------- */
 /*  Copyright IBM Corp. 2023                                         */
 /*  INQACCCU.inc - Enquire Accounts for Customer commarea            */
 /*  Mirrors INQACCCU.cpy / INQACCCZ.cpy                             */
 /*  Note: OCCURS DEPENDING ON replaced with fixed max (20) in PL/I  */
 /* ----------------------------------------------------------------- */
 DCL 1 INQACCCU_COMMAREA,
       2 NUMBER_OF_ACCOUNTS    FIXED BIN(31) INIT(0),
       2 CUSTOMER_NUMBER_CA    CHAR(10),
       2 COMM_SUCCESS          CHAR(1),
       2 COMM_FAIL_CODE        CHAR(1),
       2 CUSTOMER_FOUND        CHAR(1),
       2 COMM_PCB_POINTER      POINTER,
       2 ACCOUNT_DETAILS (20),
         3 COMM_EYE            CHAR(4),
         3 COMM_CUSTNO         CHAR(10),
         3 COMM_SCODE          CHAR(6),
         3 COMM_ACCNO          CHAR(8),
         3 COMM_ACC_TYPE       CHAR(8),
         3 COMM_INT_RATE       FIXED DEC(6,2),
         3 COMM_OPENED         FIXED DEC(8,0),
         3 COMM_OVERDRAFT      FIXED DEC(8,0),
         3 COMM_LAST_STMT_DT   FIXED DEC(8,0),
         3 COMM_NEXT_STMT_DT   FIXED DEC(8,0),
         3 COMM_AVAIL_BAL      FIXED DEC(12,2),
         3 COMM_ACTUAL_BAL     FIXED DEC(12,2);
