 /* **************************************************************** */
 /*                                                                */
 /*  Copyright IBM Corp. 2023                                      */
 /*                                                                */
 /* **************************************************************** */
 /* Converted from PROCTRAN.cpy - Process Transaction record.      */
 /* Multiple REDEFINES converted to UNIONs.                        */
 /* 88-levels converted to comments showing valid values.         */
  /* Structure template only - no storage is allocated.            */
  /* Usage: DCL 1 var LIKE PROCTRAN_TMPL;                          */
  DCL 1 PROCTRAN_TMPL BASED,
   3 PROC_TRAN_DATA,
     5 * UNION,
       7 PROC_TRAN_EYE_CATCHER    CHAR(4),
                                   /* valid='PRTR' */
       7 PROC_TRAN_LOGICAL_DELETE_AREA,
         9 PROC_TRAN_LOGICAL_DELETE_FLAG CHAR(1),
                                   /* X'FF'=logically deleted */
         9 FILLER_LDA              CHAR(3),
     5 PROC_TRAN_ID,
       7 PROC_TRAN_SORT_CODE       CHAR(6),
       7 PROC_TRAN_NUMBER          CHAR(8),
     5 * UNION,
       7 PROC_TRAN_DATE            CHAR(8),
       7 PROC_TRAN_DATE_GRP,
         9 PROC_TRAN_DATE_GRP_YYYY CHAR(4),
         9 PROC_TRAN_DATE_GRP_MM   CHAR(2),
         9 PROC_TRAN_DATE_GRP_DD   CHAR(2),
     5 * UNION,
       7 PROC_TRAN_TIME            CHAR(6),
       7 PROC_TRAN_TIME_GRP,
         9 PROC_TRAN_TIME_GRP_HH   CHAR(2),
         9 PROC_TRAN_TIME_GRP_MM   CHAR(2),
         9 PROC_TRAN_TIME_GRP_SS   CHAR(2),
     5 PROC_TRAN_REF               CHAR(12),
     5 PROC_TRAN_TYPE              CHAR(3),
       /* CHA CHF CHI CHO CRE DEB ICA ICC IDA IDC OCA OCC ODA ODC */
       /* OCS PCR PDR TFR                                          */
     5 * UNION,
       7 PROC_TRAN_DESC            CHAR(40),
       7 PROC_TRAN_DESC_XFR,
         9 PROC_TRAN_DESC_XFR_HEADER   CHAR(26),
                                   /* 'TRANSFER' flags a transfer */
         9 PROC_TRAN_DESC_XFR_SORTCODE CHAR(6),
         9 PROC_TRAN_DESC_XFR_ACCOUNT  CHAR(8),
       7 PROC_TRAN_DESC_DELACC,
         9 PROC_DESC_DELACC_CUSTOMER   CHAR(10),
         9 PROC_DESC_DELACC_ACCTYPE    CHAR(8),
         9 PROC_DESC_DELACC_LAST_DD    CHAR(2),
         9 PROC_DESC_DELACC_LAST_MM    CHAR(2),
         9 PROC_DESC_DELACC_LAST_YYYY  CHAR(4),
         9 PROC_DESC_DELACC_NEXT_DD    CHAR(2),
         9 PROC_DESC_DELACC_NEXT_MM    CHAR(2),
         9 PROC_DESC_DELACC_NEXT_YYYY  CHAR(4),
         9 PROC_DESC_DELACC_FOOTER     CHAR(6),
                                   /* 'DELETE' flags a delete */
       7 PROC_TRAN_DESC_CREACC,
         9 PROC_DESC_CREACC_CUSTOMER   CHAR(10),
         9 PROC_DESC_CREACC_ACCTYPE    CHAR(8),
         9 PROC_DESC_CREACC_LAST_DD    CHAR(2),
         9 PROC_DESC_CREACC_LAST_MM    CHAR(2),
         9 PROC_DESC_CREACC_LAST_YYYY  CHAR(4),
         9 PROC_DESC_CREACC_NEXT_DD    CHAR(2),
         9 PROC_DESC_CREACC_NEXT_MM    CHAR(2),
         9 PROC_DESC_CREACC_NEXT_YYYY  CHAR(4),
         9 PROC_DESC_CREACC_FOOTER     CHAR(6),
                                   /* 'CREATE' flags a create */
       7 PROC_TRAN_DESC_DELCUS,
         9 PROC_DESC_DELCUS_SORTCODE   CHAR(6),
         9 PROC_DESC_DELCUS_CUSTOMER   CHAR(10),
         9 PROC_DESC_DELCUS_NAME       CHAR(14),
         9 PROC_DESC_DELCUS_DOB_YYYY   CHAR(4),
         9 PROC_DESC_DELCUS_FILLER     CHAR(1),
                                   /* '-' */
         9 PROC_DESC_DELCUS_DOB_MM     CHAR(2),
         9 PROC_DESC_DELCUS_FILLER2    CHAR(1),
                                   /* '-' */
         9 PROC_DESC_DELCUS_DOB_DD     CHAR(2),
       7 PROC_TRAN_DESC_CRECUS,
         9 PROC_DESC_CRECUS_SORTCODE   CHAR(6),
         9 PROC_DESC_CRECUS_CUSTOMER   CHAR(10),
         9 PROC_DESC_CRECUS_NAME       CHAR(14),
         9 PROC_DESC_CRECUS_DOB_YYYY   CHAR(4),
         9 PROC_DESC_CRECUS_FILLER     CHAR(1),
                                   /* '-' */
         9 PROC_DESC_CRECUS_DOB_MM     CHAR(2),
         9 PROC_DESC_CRECUS_FILLER2    CHAR(1),
                                   /* '-' */
         9 PROC_DESC_CRECUS_DOB_DD     CHAR(2),
     5 PROC_TRAN_AMOUNT            FIXED DEC(12,2);
