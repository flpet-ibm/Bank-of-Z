 /* ----------------------------------------------------------------- */
 /*  Copyright IBM Corp. 2023                                         */
 /*  PROCTRAN.inc - Processed Transaction data structure              */
 /*  Mirrors PROCTRAN.cpy                                             */
 /*  Note: REDEFINES on PROC_TRAN_DESC handled as union via BASED.   */
 /*  Programs needing overlay views should declare BASED structures   */
 /*  over ADDR(PROC_TRAN_DESC).                                       */
 /* ----------------------------------------------------------------- */
 DCL 1 PROC_TRAN_DATA,
       2 PROC_TRAN_EYE_CATCHER   CHAR(4),
       2 PROC_TRAN_ID,
         3 PROC_TRAN_SORT_CODE   CHAR(6),
         3 PROC_TRAN_NUMBER      CHAR(8),
       2 PROC_TRAN_DATE          FIXED DEC(8,0),
       2 PROC_TRAN_TIME          FIXED DEC(6,0),
       2 PROC_TRAN_REF           CHAR(12),
       2 PROC_TRAN_TYPE          CHAR(3),
       2 PROC_TRAN_DESC          CHAR(40),
       2 PROC_TRAN_AMOUNT        FIXED DEC(12,2);

 /* ----------------------------------------------------------------- */
 /*  Transfer overlay - BASED over PROC_TRAN_DESC                     */
 /* ----------------------------------------------------------------- */
 DCL PROC_TRAN_DESC_PTR          POINTER;
 DCL 1 PROC_TRAN_DESC_XFR BASED(PROC_TRAN_DESC_PTR),
       2 PROC_TRAN_DESC_XFR_HEADER   CHAR(26),
       2 PROC_TRAN_DESC_XFR_SORTCODE CHAR(6),
       2 PROC_TRAN_DESC_XFR_ACCOUNT  CHAR(8);

 /* ----------------------------------------------------------------- */
 /*  Delete-Account overlay - BASED over PROC_TRAN_DESC               */
 /* ----------------------------------------------------------------- */
 DCL 1 PROC_TRAN_DESC_DELACC BASED(PROC_TRAN_DESC_PTR),
       2 PROC_DESC_DELACC_CUSTOMER  CHAR(10),
       2 PROC_DESC_DELACC_ACCTYPE   CHAR(8),
       2 PROC_DESC_DELACC_LAST_DD   CHAR(2),
       2 PROC_DESC_DELACC_LAST_MM   CHAR(2),
       2 PROC_DESC_DELACC_LAST_YYYY CHAR(4),
       2 PROC_DESC_DELACC_NEXT_DD   CHAR(2),
       2 PROC_DESC_DELACC_NEXT_MM   CHAR(2),
       2 PROC_DESC_DELACC_NEXT_YYYY CHAR(4),
       2 PROC_DESC_DELACC_FOOTER    CHAR(6);

 /* ----------------------------------------------------------------- */
 /*  Create-Account overlay - BASED over PROC_TRAN_DESC               */
 /* ----------------------------------------------------------------- */
 DCL 1 PROC_TRAN_DESC_CREACC BASED(PROC_TRAN_DESC_PTR),
       2 PROC_DESC_CREACC_CUSTOMER  CHAR(10),
       2 PROC_DESC_CREACC_ACCTYPE   CHAR(8),
       2 PROC_DESC_CREACC_LAST_DD   CHAR(2),
       2 PROC_DESC_CREACC_LAST_MM   CHAR(2),
       2 PROC_DESC_CREACC_LAST_YYYY CHAR(4),
       2 PROC_DESC_CREACC_NEXT_DD   CHAR(2),
       2 PROC_DESC_CREACC_NEXT_MM   CHAR(2),
       2 PROC_DESC_CREACC_NEXT_YYYY CHAR(4),
       2 PROC_DESC_CREACC_FOOTER    CHAR(6);

 /* ----------------------------------------------------------------- */
 /*  Delete-Customer overlay - BASED over PROC_TRAN_DESC              */
 /* ----------------------------------------------------------------- */
 DCL 1 PROC_TRAN_DESC_DELCUS BASED(PROC_TRAN_DESC_PTR),
       2 PROC_DESC_DELCUS_SORTCODE CHAR(6),
       2 PROC_DESC_DELCUS_CUSTOMER CHAR(10),
       2 PROC_DESC_DELCUS_NAME     CHAR(14),
       2 PROC_DESC_DELCUS_DOB_YYYY CHAR(4),
       2 PROC_DESC_DELCUS_FILLER   CHAR(1),
       2 PROC_DESC_DELCUS_DOB_MM   CHAR(2),
       2 PROC_DESC_DELCUS_FILLER2  CHAR(1),
       2 PROC_DESC_DELCUS_DOB_DD   CHAR(2);

 /* ----------------------------------------------------------------- */
 /*  Create-Customer overlay - BASED over PROC_TRAN_DESC              */
 /* ----------------------------------------------------------------- */
 DCL 1 PROC_TRAN_DESC_CRECUS BASED(PROC_TRAN_DESC_PTR),
       2 PROC_DESC_CRECUS_SORTCODE CHAR(6),
       2 PROC_DESC_CRECUS_CUSTOMER CHAR(10),
       2 PROC_DESC_CRECUS_NAME     CHAR(14),
       2 PROC_DESC_CRECUS_DOB_YYYY CHAR(4),
       2 PROC_DESC_CRECUS_FILLER   CHAR(1),
       2 PROC_DESC_CRECUS_DOB_MM   CHAR(2),
       2 PROC_DESC_CRECUS_FILLER2  CHAR(1),
       2 PROC_DESC_CRECUS_DOB_DD   CHAR(2);
