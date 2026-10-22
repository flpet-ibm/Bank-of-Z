 /* **************************************************************** */
 /*                                                                */
 /*  Copyright IBM Corp. 2023                                      */
 /*                                                                */
 /* **************************************************************** */
 /* Converted from NEWCUSNO.cpy - New Customer Number COMMAREA.    */
 /* 88-levels converted to comments showing valid function codes.  */
  /* Structure template only - no storage is allocated.            */
  /* Usage: DCL 1 var LIKE NEWCUSNO_TMPL;                          */
  DCL 1 NEWCUSNO_TMPL BASED,
   3 NEWCUSNO_FUNCTION            CHAR(1),
                                  /* 'G'=get-new, 'R'=rollback, 'C'=current */
   3 CUSTOMER_NUMBER              CHAR(10),
   3 NEWCUSNO_SUCCESS             CHAR(1),
   3 NEWCUSNO_FAIL_CODE           CHAR(1);
