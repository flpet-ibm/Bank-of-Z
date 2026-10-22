 /* **************************************************************** */
 /*                                                                */
 /*  Copyright IBM Corp. 2023                                      */
 /*                                                                */
 /* **************************************************************** */
 /* Converted from ACCTCTRL.cpy                                    */
  /* Structure template only - no storage is allocated.            */
  /* Usage: DCL 1 var LIKE ACCTCTRL_TMPL;                          */
  DCL 1 ACCTCTRL_TMPL BASED,
   3 ACCOUNT_CONTROL_RECORD,
     5 ACCOUNT_CONTROL_EYE_CATCHER  CHAR(4),
     5 FILLER_CUST                  CHAR(10),
     5 ACCOUNT_CONTROL_KEY,
       7 ACCOUNT_CONTROL_SORT_CODE  CHAR(6),
       7 ACCOUNT_CONTROL_NUMBER     CHAR(8),
     5 NUMBER_OF_ACCOUNTS           CHAR(8),
     5 LAST_ACCOUNT_NUMBER          CHAR(8),
     5 ACCOUNT_CONTROL_SUCCESS_FLAG CHAR(1),
     5 ACCOUNT_CONTROL_FAIL_CODE    CHAR(1),
     5 FILLER_RATE                  CHAR(6),
     5 FILLER_1                     CHAR(8),
     5 FILLER_2                     CHAR(8),
     5 FILLER_3                     CHAR(8),
     5 FILLER_4                     CHAR(8),
     5 FILLER_BAL                   CHAR(12),
     5 FILLER_5                     CHAR(2);
