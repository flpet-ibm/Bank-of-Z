 /* **************************************************************** */
 /*                                                                */
 /*  Copyright IBM Corp. 2023                                      */
 /*                                                                */
 /* **************************************************************** */
 /* Converted from CONTROLI.cpy                                    */
  /* Structure template only - no storage is allocated.            */
  /* Usage: DCL 1 var LIKE CONTROLI_TMPL;                          */
  DCL 1 CONTROLI_TMPL BASED,
   3 CONTROL_CUSTOMER_COUNT         FIXED DEC(10,0),
   3 CONTROL_CUSTOMER_LAST          FIXED DEC(10,0),
   3 CONTROL_ACCOUNT_COUNT          FIXED DEC(8,0),
   3 CONTROL_ACCOUNT_LAST           FIXED DEC(8,0);
