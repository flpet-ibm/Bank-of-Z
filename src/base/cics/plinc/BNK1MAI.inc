 /***************************************************************** */
 /*  Copyright IBM Corp. 2023                                      */
 /***************************************************************** */
 /* BNK1MAI - Symbolic map include for BNK1ME (Main Menu)         */
 /* Generated from BNK1MAI.bms                                     */
 /* Fields: ACTION, MESSAGE, DUMMY                                 */
 /***************************************************************** */
  /* Structure template only - no storage is allocated.            */
  /* Usage: DCL 1 var LIKE BNK1MAI_TMPL;                           */
  DCL 1 BNK1MAI_TMPL BASED,
   3 BNK1MEI,
     5 ACTIONL       FIXED BIN(15),
     5 ACTIONA       CHAR(1),
     5 ACTIONI       CHAR(1),
     5 MESSAGEL      FIXED BIN(15),
     5 MESSAGEA      CHAR(1),
     5 MESSAGEI      CHAR(79),
     5 DUMMYL        FIXED BIN(15),
     5 DUMMYA        CHAR(1),
     5 DUMMYI        CHAR(1);
