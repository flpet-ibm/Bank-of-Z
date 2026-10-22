 /***************************************************************** */
 /*  Copyright IBM Corp. 2023                                      */
 /***************************************************************** */
 /* BNK1CDM - Symbolic map include for BNK1CD (Credit/Debit)      */
 /* Generated from BNK1CDM.bms                                     */
 /* Fields: ACCNO, SIGN, AMT, SORTC, AVBAL, ACTBAL, MESSAGE, DUMMY*/
 /***************************************************************** */
  /* Structure template only - no storage is allocated.            */
  /* Usage: DCL 1 var LIKE BNK1CDM_TMPL;                           */
  DCL 1 BNK1CDM_TMPL BASED,
   3 BNK1CDI,
     5 ACCNOL        FIXED BIN(15),
     5 ACCNOA        CHAR(1),
     5 ACCNOI        CHAR(8),
     5 SIGNL         FIXED BIN(15),
     5 SIGNA         CHAR(1),
     5 SIGNI         CHAR(1),
     5 AMTL          FIXED BIN(15),
     5 AMTA          CHAR(1),
     5 AMTI          CHAR(13),
     5 SORTCL        FIXED BIN(15),
     5 SORTCA        CHAR(1),
     5 SORTCI        CHAR(6),
     5 AVBALL        FIXED BIN(15),
     5 AVBALA        CHAR(1),
     5 AVBALI        CHAR(14),
     5 ACTBALL       FIXED BIN(15),
     5 ACTBALA       CHAR(1),
     5 ACTBALI       CHAR(14),
     5 MESSAGEL      FIXED BIN(15),
     5 MESSAGEA      CHAR(1),
     5 MESSAGEI      CHAR(79),
     5 DUMMYL        FIXED BIN(15),
     5 DUMMYA        CHAR(1),
     5 DUMMYI        CHAR(1);
