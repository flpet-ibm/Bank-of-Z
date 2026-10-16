 /* ----------------------------------------------------------------- */
 /*  Copyright IBM Corp. 2023                                         */
 /*  NEWCUSNO.inc - New Customer Number commarea                      */
 /*  Mirrors NEWCUSNO.cpy                                             */
 /* ----------------------------------------------------------------- */
 DCL 1 NEWCUSNO_COMMAREA,
       2 NEWCUSNO_FUNCTION     CHAR(1),
       2 CUSTOMER_NUMBER_CA   CHAR(10),
       2 NEWCUSNO_SUCCESS     CHAR(1),
       2 NEWCUSNO_FAIL_CODE   CHAR(1);
