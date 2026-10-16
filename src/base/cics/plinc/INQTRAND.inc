 /* ----------------------------------------------------------------- */
 /*  Copyright IBM Corp. 2023                                         */
 /*  INQTRAND.inc - Enquire Transaction Detail commarea               */
 /*  Mirrors INQTRAND.cpy                                             */
 /* ----------------------------------------------------------------- */
 DCL 1 INQTRAND_COMMAREA,
       2 INQTRAND_EYE             CHAR(4),
       2 INQTRAND_SORTCODE        CHAR(6),
       2 INQTRAND_ACCNO           CHAR(8),
       2 INQTRAND_DATE            FIXED DEC(8,0),
       2 INQTRAND_TIME            FIXED DEC(6,0),
       2 INQTRAND_REF             FIXED DEC(12,0),
       2 INQTRAND_SUCCESS         CHAR(1),
       2 INQTRAND_FOUND           CHAR(1),
       2 INQTRAND_TRAN_ID         CHAR(50),
       2 INQTRAND_TRAN_SORTCODE   CHAR(6),
       2 INQTRAND_TRAN_ACCNO      CHAR(8),
       2 INQTRAND_TRAN_DATE       FIXED DEC(8,0),
       2 INQTRAND_TRAN_TIME       FIXED DEC(6,0),
       2 INQTRAND_TRAN_REF        FIXED DEC(12,0),
       2 INQTRAND_TRAN_TYPE       CHAR(3),
       2 INQTRAND_TRAN_DESC       CHAR(40),
       2 INQTRAND_TRAN_AMOUNT     FIXED DEC(12,2);
