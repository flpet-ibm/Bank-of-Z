 /* ----------------------------------------------------------------- */
 /*  Copyright IBM Corp. 2023                                         */
 /*  ACCOUNT.inc - Account data structure                             */
 /*  Mirrors ACCOUNT.cpy                                              */
 /* ----------------------------------------------------------------- */
 DCL 1 ACCOUNT_DATA,
       2 ACCOUNT_EYE_CATCHER       CHAR(4),
       2 ACCOUNT_CUST_NO           CHAR(10),
       2 ACCOUNT_KEY,
         3 ACCOUNT_SORT_CODE       CHAR(6),
         3 ACCOUNT_NUMBER          CHAR(8),
       2 ACCOUNT_TYPE              CHAR(8),
       2 ACCOUNT_INTEREST_RATE     FIXED DEC(6,2),
       2 ACCOUNT_OPENED            FIXED DEC(8,0),
       2 ACCOUNT_OVERDRAFT_LIMIT   FIXED BIN(31),
       2 ACCOUNT_LAST_STMT_DATE    FIXED DEC(8,0),
       2 ACCOUNT_NEXT_STMT_DATE    FIXED DEC(8,0),
       2 ACCOUNT_AVAILABLE_BALANCE FIXED DEC(12,2),
       2 ACCOUNT_ACTUAL_BALANCE    FIXED DEC(12,2);
