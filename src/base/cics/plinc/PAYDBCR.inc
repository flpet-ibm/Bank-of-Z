 /* ----------------------------------------------------------------- */
 /*  Copyright IBM Corp. 2023                                         */
 /*  PAYDBCR.inc - Payment Debit/Credit commarea                      */
 /*  Mirrors PAYDBCR.cpy / PAYDBCRZ.cpy                              */
 /* ----------------------------------------------------------------- */
 DCL 1 PAYDBCR_COMMAREA,
       2 COMM_ACCNO            CHAR(8),
       2 COMM_AMT              FIXED DEC(12,2),
       2 COMM_SORTC            CHAR(6),
       2 COMM_AV_BAL           FIXED DEC(12,2),
       2 COMM_ACT_BAL          FIXED DEC(12,2),
       2 COMM_ORIGIN,
         3 COMM_APPLID         CHAR(8),
         3 COMM_USERID         CHAR(8),
         3 COMM_FACILITY_NAME  CHAR(8),
         3 COMM_NETWRK_ID      CHAR(8),
         3 COMM_FACILTYPE      FIXED BIN(31),
         3 COMM_ORIGIN_FILL    CHAR(4),
         3 COMM_DESCRIPTION    CHAR(40),
       2 COMM_SUCCESS          CHAR(1),
       2 COMM_FAIL_CODE        CHAR(1);
