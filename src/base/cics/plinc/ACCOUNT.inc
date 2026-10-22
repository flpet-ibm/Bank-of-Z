 /* **************************************************************** */
 /*                                                                */
 /*  Copyright IBM Corp. 2023                                      */
 /*                                                                */
 /* **************************************************************** */
 /* Converted from ACCOUNT.cpy                                     */
  /* Structure template only - no storage is allocated.            */
  /* Usage: DCL 1 var LIKE ACCOUNT_TMPL;                           */
  DCL 1 ACCOUNT_TMPL BASED,
   3 ACCOUNT_DATA,
     5 ACCOUNT_EYE_CATCHER        CHAR(4),
     5 ACCOUNT_CUST_NO             CHAR(10),
     5 ACCOUNT_KEY,
       7 ACCOUNT_SORT_CODE         CHAR(6),
       7 ACCOUNT_NUMBER            CHAR(8),
     5 ACCOUNT_TYPE                CHAR(8),
     5 ACCOUNT_INTEREST_RATE       FIXED DEC(6,2),
     5 * UNION,
       7 ACCOUNT_OPENED            CHAR(8),
       7 ACCOUNT_OPENED_GROUP,
         9 ACCOUNT_OPENED_DAY      CHAR(2),
         9 ACCOUNT_OPENED_MONTH    CHAR(2),
         9 ACCOUNT_OPENED_YEAR     CHAR(4),
     5 ACCOUNT_OVERDRAFT_LIMIT     CHAR(8),
     5 * UNION,
       7 ACCOUNT_LAST_STMT_DATE    CHAR(8),
       7 ACCOUNT_LAST_STMT_GROUP,
         9 ACCOUNT_LAST_STMT_DAY   CHAR(2),
         9 ACCOUNT_LAST_STMT_MONTH CHAR(2),
         9 ACCOUNT_LAST_STMT_YEAR  CHAR(4),
     5 * UNION,
       7 ACCOUNT_NEXT_STMT_DATE    CHAR(8),
       7 ACCOUNT_NEXT_STMT_GROUP,
         9 ACCOUNT_NEXT_STMT_DAY   CHAR(2),
         9 ACCOUNT_NEXT_STMT_MONTH CHAR(2),
         9 ACCOUNT_NEXT_STMT_YEAR  CHAR(4),
     5 ACCOUNT_AVAILABLE_BALANCE   FIXED DEC(12,2),
     5 ACCOUNT_ACTUAL_BALANCE      FIXED DEC(12,2);
