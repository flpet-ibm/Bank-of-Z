 /* **************************************************************** */
 /*                                                                */
 /*  Copyright IBM Corp. 2023                                      */
 /*                                                                */
 /* **************************************************************** */
 /* Converted from PAYDBCRZ.cpy - Pay Debit/Credit (z/OS Connect). */
 /* Identical structure to PAYDBCR.inc.                            */
  /* Structure template only - no storage is allocated.            */
  /* Usage: DCL 1 var LIKE PAYDBCRZ_TMPL;                          */
  DCL 1 PAYDBCRZ_TMPL BASED,
   3 COMM_ACCNO                  CHAR(8),
   3 COMM_AMT                    FIXED DEC(12,2),
   3 COMM_SORTC                  CHAR(6),
   3 COMM_AV_BAL                 FIXED DEC(12,2),
   3 COMM_ACT_BAL                FIXED DEC(12,2),
   3 COMM_ORIGIN,
     5 COMM_APPLID               CHAR(8),
     5 COMM_USERID               CHAR(8),
     5 COMM_FACILITY_NAME        CHAR(8),
     5 COMM_NETWRK_ID            CHAR(8),
     5 COMM_FACILTYPE            FIXED BIN(31),
     5 FILLER_PAY                CHAR(4),
     5 COMM_DESCRIPTION          CHAR(40),
   3 COMM_SUCCESS                CHAR(1),
   3 COMM_FAIL_CODE              CHAR(1);
