 /* **************************************************************** */
 /*                                                                */
 /*  Copyright IBM Corp. 2023                                      */
 /*                                                                */
 /* **************************************************************** */
 /* Converted from NEWACCNO.cpy - New Account Number COMMAREA.     */
 /* 88-levels converted to comments showing valid function codes.  */
 /* Include at level 3 inside the declaring DCL 1 structure.      */
   3 NEWACCNO_FUNCTION            CHAR(1),
                                  /* 'G'=get-new, 'R'=rollback, 'C'=current */
   3 ACCOUNT_NUMBER               CHAR(8),
   3 NEWACCNO_SUCCESS             CHAR(1),
   3 NEWACCNO_FAIL_CODE           CHAR(1);
