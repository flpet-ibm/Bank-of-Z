 /* **************************************************************** */
 /*                                                                */
 /*  Copyright IBM Corp. 2023                                      */
 /*                                                                */
 /* **************************************************************** */
 /* Converted from INQACC.cpy - COMMAREA for Inquire Account.      */
 /* Note: INQACC.cpy defined its own 01-level (INQACC-COMMAREA).   */
  /* Structure template only - no storage is allocated.            */
  /* Usage: DCL 1 var LIKE INQACC_TMPL;                            */
  DCL 1 INQACC_TMPL BASED,
   3 INQACC_EYE                  CHAR(4),
   3 INQACC_CUSTNO               CHAR(10),
   3 INQACC_SCODE                CHAR(6),
   3 INQACC_ACCNO                CHAR(8),
   3 INQACC_ACC_TYPE             CHAR(8),
   3 INQACC_INT_RATE             FIXED DEC(6,2),
   3 * UNION,
     5 INQACC_OPENED             CHAR(8),
     5 INQACC_OPENED_GROUP,
       7 INQACC_OPENED_DAY       CHAR(2),
       7 INQACC_OPENED_MONTH     CHAR(2),
       7 INQACC_OPENED_YEAR      CHAR(4),
   3 INQACC_OVERDRAFT            CHAR(8),
   3 * UNION,
     5 INQACC_LAST_STMT_DT       CHAR(8),
     5 INQACC_LAST_STMT_GROUP,
       7 INQACC_LAST_STMT_DAY    CHAR(2),
       7 INQACC_LAST_STMT_MONTH  CHAR(2),
       7 INQACC_LAST_STMT_YEAR   CHAR(4),
   3 * UNION,
     5 INQACC_NEXT_STMT_DT       CHAR(8),
     5 INQACC_NEXT_STMT_GROUP,
       7 INQACC_NEXT_STMT_DAY    CHAR(2),
       7 INQACC_NEXT_STMT_MONTH  CHAR(2),
       7 INQACC_NEXT_STMT_YEAR   CHAR(4),
   3 INQACC_AVAIL_BAL            FIXED DEC(12,2),
   3 INQACC_ACTUAL_BAL           FIXED DEC(12,2),
   3 INQACC_SUCCESS              CHAR(1),
   3 INQACC_PCB1_POINTER         POINTER;
