 /* **************************************************************** */
 /*                                                                */
 /*  Copyright IBM Corp. 2023                                      */
 /*                                                                */
 /* **************************************************************** */
 /* Converted from INQACCCZ.cpy - Inquire Accounts by Customer     */
 /*  (z/OS Connect variant, PCB as CHAR(4)).                       */
 /* OCCURS DEPENDING ON converted to fixed (20) per COBOL max.    */
  /* Structure template only - no storage is allocated.            */
  /* Usage: DCL 1 var LIKE INQACCCZ_TMPL;                          */
  DCL 1 INQACCCZ_TMPL BASED,
   3 NUMBER_OF_ACCOUNTS           FIXED BIN(31),
   3 CUSTOMER_NUMBER              CHAR(10),
   3 COMM_SUCCESS                 CHAR(1),
   3 COMM_FAIL_CODE               CHAR(1),
   3 CUSTOMER_FOUND               CHAR(1),
   3 COMM_PCB_POINTER             CHAR(4),
   3 ACCOUNT_DETAILS              (20),
     5 COMM_EYE                   CHAR(4),
     5 COMM_CUSTNO                CHAR(10),
     5 COMM_SCODE                 CHAR(6),
     5 COMM_ACCNO                 CHAR(8),
     5 COMM_ACC_TYPE              CHAR(8),
     5 COMM_INT_RATE              FIXED DEC(6,2),
     5 * UNION,
       7 COMM_OPENED              CHAR(8),
       7 COMM_OPENED_GROUP,
         9 COMM_OPENED_DAY        CHAR(2),
         9 COMM_OPENED_MONTH      CHAR(2),
         9 COMM_OPENED_YEAR       CHAR(4),
     5 COMM_OVERDRAFT             CHAR(8),
     5 * UNION,
       7 COMM_LAST_STMT_DT        CHAR(8),
       7 COMM_LAST_STMT_GROUP,
         9 COMM_LAST_STMT_DAY     CHAR(2),
         9 COMM_LAST_STMT_MONTH   CHAR(2),
         9 COMM_LAST_STMT_YEAR    CHAR(4),
     5 * UNION,
       7 COMM_NEXT_STMT_DT        CHAR(8),
       7 COMM_NEXT_STMT_GROUP,
         9 COMM_NEXT_STMT_DAY     CHAR(2),
         9 COMM_NEXT_STMT_MONTH   CHAR(2),
         9 COMM_NEXT_STMT_YEAR    CHAR(4),
     5 COMM_AVAIL_BAL             FIXED DEC(12,2),
     5 COMM_ACTUAL_BAL            FIXED DEC(12,2);
