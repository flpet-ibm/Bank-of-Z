 /* **************************************************************** */
 /*                                                                */
 /*  Copyright IBM Corp. 2023                                      */
 /*                                                                */
 /* **************************************************************** */
 /* Converted from STCUSTNO.cpy - Customer Number Key.             */
  /* Structure template only - no storage is allocated.            */
  /* Usage: DCL 1 var LIKE STCUSTNO_TMPL;                          */
  DCL 1 STCUSTNO_TMPL BASED,
   5 CUSTOMER_NUMBER_KEY,
     10 CNO_KEY                   CHAR(10);
