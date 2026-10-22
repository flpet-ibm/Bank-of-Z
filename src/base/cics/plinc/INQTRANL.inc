 /* **************************************************************** */
 /*                                                                */
 /*  Copyright IBM Corp. 2023                                      */
 /*                                                                */
 /* **************************************************************** */
 /* Converted from INQTRANL.cpy - Inquire Transaction List.        */
 /* Note: INQTRANL.cpy defined its own 01-level.                   */
 /* 88-levels converted to comments showing valid values.         */
 /* OCCURS 100 kept as fixed array.                                */
  /* Structure template only - no storage is allocated.            */
  /* Usage: DCL 1 var LIKE INQTRANL_TMPL;                          */
  DCL 1 INQTRANL_TMPL BASED,
   3 INQTRANL_EYE                CHAR(4),
                                  /* valid value: 'ITRL' */
   /* Input parameters */
   3 INQTRANL_SORTCODE           CHAR(6),
   3 INQTRANL_ACCNO              CHAR(8),
   3 INQTRANL_FROM_DATE          CHAR(8),
                                  /* 0 = no from-date filter */
   3 INQTRANL_TO_DATE            CHAR(8),
                                  /* 99999999 = no to-date filter */
   3 INQTRANL_LIMIT              CHAR(3),
                                  /* default: 50 */
   3 INQTRANL_OFFSET             CHAR(5),
   /* Output metadata */
   3 INQTRANL_TOTAL_COUNT        CHAR(5),
   3 INQTRANL_RETURNED_COUNT     CHAR(3),
   3 INQTRANL_SUCCESS            CHAR(1),
                                  /* 'Y'=success, 'N'=failure */
   /* Transaction array (max 100 per OpenAPI spec) */
   3 INQTRANL_TRANSACTIONS       (100),
     5 INQTRANL_TRAN_ID          CHAR(50),
     5 INQTRANL_TRAN_SORTCODE    CHAR(6),
     5 INQTRANL_TRAN_ACCNO       CHAR(8),
     5 * UNION,
       7 INQTRANL_TRAN_DATE      CHAR(8),
       7 INQTRANL_TRAN_DATE_GRP,
         9 INQTRANL_TRAN_DATE_YYYY CHAR(4),
         9 INQTRANL_TRAN_DATE_MM   CHAR(2),
         9 INQTRANL_TRAN_DATE_DD   CHAR(2),
     5 * UNION,
       7 INQTRANL_TRAN_TIME      CHAR(6),
       7 INQTRANL_TRAN_TIME_GRP,
         9 INQTRANL_TRAN_TIME_HH   CHAR(2),
         9 INQTRANL_TRAN_TIME_MM   CHAR(2),
         9 INQTRANL_TRAN_TIME_SS   CHAR(2),
     5 INQTRANL_TRAN_REF         CHAR(12),
     5 INQTRANL_TRAN_TYPE        CHAR(3),
     5 INQTRANL_TRAN_DESC        CHAR(40),
     5 INQTRANL_TRAN_AMOUNT      FIXED DEC(12,2);
