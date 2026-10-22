 /* **************************************************************** */
 /*                                                                */
 /*  Copyright IBM Corp. 2023                                      */
 /*                                                                */
 /* **************************************************************** */
 /* Converted from INQTRAND.cpy - Inquire Transaction Detail.      */
 /* Note: INQTRAND.cpy defined its own 01-level.                   */
 /* 88-levels converted to comments showing valid values.         */
  /* Structure template only - no storage is allocated.            */
  /* Usage: DCL 1 var LIKE INQTRAND_TMPL;                          */
  DCL 1 INQTRAND_TMPL BASED,
   3 INQTRAND_EYE                CHAR(4),
                                  /* valid value: 'ITRD' */
   /* Input parameters (composite key) */
   3 INQTRAND_SORTCODE           CHAR(6),
   3 INQTRAND_ACCNO              CHAR(8),
   3 INQTRAND_DATE               CHAR(8),
   3 INQTRAND_TIME               CHAR(6),
   3 INQTRAND_REF                CHAR(12),
   /* Output fields */
   3 INQTRAND_SUCCESS            CHAR(1),
                                  /* 'Y'=success, 'N'=failure */
   3 INQTRAND_FOUND              CHAR(1),
                                  /* 'Y'=found,   'N'=not found */
   /* Transaction details */
   3 INQTRAND_TRAN_ID            CHAR(50),
   3 INQTRAND_TRAN_SORTCODE      CHAR(6),
   3 INQTRAND_TRAN_ACCNO         CHAR(8),
   3 * UNION,
     5 INQTRAND_TRAN_DATE        CHAR(8),
     5 INQTRAND_TRAN_DATE_GRP,
       7 INQTRAND_TRAN_DATE_YYYY CHAR(4),
       7 INQTRAND_TRAN_DATE_MM   CHAR(2),
       7 INQTRAND_TRAN_DATE_DD   CHAR(2),
   3 * UNION,
     5 INQTRAND_TRAN_TIME        CHAR(6),
     5 INQTRAND_TRAN_TIME_GRP,
       7 INQTRAND_TRAN_TIME_HH   CHAR(2),
       7 INQTRAND_TRAN_TIME_MM   CHAR(2),
       7 INQTRAND_TRAN_TIME_SS   CHAR(2),
   3 INQTRAND_TRAN_REF           CHAR(12),
   3 INQTRAND_TRAN_TYPE          CHAR(3),
   3 INQTRAND_TRAN_DESC          CHAR(40),
   3 INQTRAND_TRAN_AMOUNT        FIXED DEC(12,2);
