 /* ----------------------------------------------------------------- */
 /*  Copyright IBM Corp. 2023                                         */
 /*  INQTRANL.inc - Enquire Transaction List commarea                 */
 /*  Mirrors INQTRANL.cpy                                             */
 /*  Note: OCCURS 100 kept as fixed array (matches COBOL spec)        */
 /* ----------------------------------------------------------------- */
 DCL 1 INQTRANL_COMMAREA,
       2 INQTRANL_EYE              CHAR(4),
       2 INQTRANL_SORTCODE         CHAR(6),
       2 INQTRANL_ACCNO            CHAR(8),
       2 INQTRANL_FROM_DATE        FIXED DEC(8,0),
       2 INQTRANL_TO_DATE          FIXED DEC(8,0),
       2 INQTRANL_LIMIT            FIXED DEC(3,0),
       2 INQTRANL_OFFSET           FIXED DEC(5,0),
       2 INQTRANL_TOTAL_COUNT      FIXED DEC(5,0),
       2 INQTRANL_RETURNED_COUNT   FIXED DEC(3,0),
       2 INQTRANL_SUCCESS          CHAR(1),
       2 INQTRANL_TRANSACTIONS (100),
         3 INQTRANL_TRAN_ID        CHAR(50),
         3 INQTRANL_TRAN_SORTCODE  CHAR(6),
         3 INQTRANL_TRAN_ACCNO     CHAR(8),
         3 INQTRANL_TRAN_DATE      FIXED DEC(8,0),
         3 INQTRANL_TRAN_TIME      FIXED DEC(6,0),
         3 INQTRANL_TRAN_REF       FIXED DEC(12,0),
         3 INQTRANL_TRAN_TYPE      CHAR(3),
         3 INQTRANL_TRAN_DESC      CHAR(40),
         3 INQTRANL_TRAN_AMOUNT    FIXED DEC(12,2);
