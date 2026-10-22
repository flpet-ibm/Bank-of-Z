 /***************************************************************** */
 /*  Copyright IBM Corp. 2023                                      */
 /***************************************************************** */
 /* BNK1TFM - Symbolic map include for BNK1TF (Transfer Funds)    */
 /* Generated from BNK1TFM.bms                                     */
 /* Fields: FACCNO, TACCNO, AMT, FACCNO2, TACCNO2, FSORTC,        */
 /*         TSORTC, FACTBAL, TACTBAL, FAVBAL, TAVBAL, MESSAGE,     */
 /*         DUMMY                                                   */
 /***************************************************************** */
  /* Structure template only - no storage is allocated.            */
  /* Usage: DCL 1 var LIKE BNK1TFM_TMPL;                           */
  DCL 1 BNK1TFM_TMPL BASED,
   3 BNK1TFI,
     5 FACCNOL       FIXED BIN(15),
     5 FACCNOA       CHAR(1),
     5 FACCNOI       CHAR(8),
     5 TACCNOL       FIXED BIN(15),
     5 TACCNOA       CHAR(1),
     5 TACCNOI       CHAR(8),
     5 AMTL          FIXED BIN(15),
     5 AMTA          CHAR(1),
     5 AMTI          CHAR(13),
     5 FACCNO2L      FIXED BIN(15),
     5 FACCNO2A      CHAR(1),
     5 FACCNO2I      CHAR(8),
     5 TACCNO2L      FIXED BIN(15),
     5 TACCNO2A      CHAR(1),
     5 TACCNO2I      CHAR(8),
     5 FSORTCL       FIXED BIN(15),
     5 FSORTCA       CHAR(1),
     5 FSORTCI       CHAR(6),
     5 TSORTCL       FIXED BIN(15),
     5 TSORTCA       CHAR(1),
     5 TSORTCI       CHAR(6),
     5 FACTBALL      FIXED BIN(15),
     5 FACTBALA      CHAR(1),
     5 FACTBALI      CHAR(14),
     5 TACTBALL      FIXED BIN(15),
     5 TACTBALA      CHAR(1),
     5 TACTBALI      CHAR(14),
     5 FAVBALL       FIXED BIN(15),
     5 FAVBALA       CHAR(1),
     5 FAVBALI       CHAR(14),
     5 TAVBALL       FIXED BIN(15),
     5 TAVBALA       CHAR(1),
     5 TAVBALI       CHAR(14),
     5 MESSAGEL      FIXED BIN(15),
     5 MESSAGEA      CHAR(1),
     5 MESSAGEI      CHAR(79),
     5 DUMMYL        FIXED BIN(15),
     5 DUMMYA        CHAR(1),
     5 DUMMYI        CHAR(1);
