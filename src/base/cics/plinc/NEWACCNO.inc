 /* ----------------------------------------------------------------- */
 /*  Copyright IBM Corp. 2023                                         */
 /*  NEWACCNO.inc - New Account Number commarea                       */
 /*  Mirrors NEWACCNO.cpy                                             */
 /* ----------------------------------------------------------------- */
 DCL 1 NEWACCNO_COMMAREA,
       2 NEWACCNO_FUNCTION     CHAR(1),
       2 ACCOUNT_NUMBER_CA    CHAR(8),
       2 NEWACCNO_SUCCESS     CHAR(1),
       2 NEWACCNO_FAIL_CODE   CHAR(1);
