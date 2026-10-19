 /* **************************************************************** */
 /*                                                                */
 /*  Copyright IBM Corp. 2023                                      */
 /*                                                                */
 /* **************************************************************** */
 /* Converted from DELACC.cpy - COMMAREA for Delete Account.       */
 /* Note: DELACC.cpy defined its own 01-level (DELACC-COMMAREA).   */
 /* For PL/I include we strip the 01 level; declare in program.   */
 /* Include at level 3 inside the declaring DCL 1 structure.      */
   3 DELACC_EYE                    CHAR(4),
   3 DELACC_CUSTNO                 CHAR(10),
   3 DELACC_SCODE                  CHAR(6),
   3 DELACC_ACCNO                  CHAR(8),
   3 DELACC_ACC_TYPE               CHAR(8),
   3 DELACC_INT_RATE               FIXED DEC(6,2),
   3 * UNION,
     5 DELACC_OPENED               CHAR(8),
     5 DELACC_OPENED_GROUP,
       7 DELACC_OPENED_DAY         CHAR(2),
       7 DELACC_OPENED_MONTH       CHAR(2),
       7 DELACC_OPENED_YEAR        CHAR(4),
   3 DELACC_OVERDRAFT              CHAR(8),
   3 * UNION,
     5 DELACC_LAST_STMT_DT         CHAR(8),
     5 DELACC_LAST_STMT_GROUP,
       7 DELACC_LAST_STMT_DAY      CHAR(2),
       7 DELACC_LAST_STMT_MONTH    CHAR(2),
       7 DELACC_LAST_STMT_YEAR     CHAR(4),
   3 * UNION,
     5 DELACC_NEXT_STMT_DT         CHAR(8),
     5 DELACC_NEXT_STMT_GROUP,
       7 DELACC_NEXT_STMT_DAY      CHAR(2),
       7 DELACC_NEXT_STMT_MONTH    CHAR(2),
       7 DELACC_NEXT_STMT_YEAR     CHAR(4),
   3 DELACC_AVAIL_BAL              FIXED DEC(12,2),
   3 DELACC_ACTUAL_BAL             FIXED DEC(12,2),
   3 DELACC_SUCCESS                CHAR(1),
   3 DELACC_FAIL_CD                CHAR(1),
   3 DELACC_DEL_SUCCESS            CHAR(1),
   3 DELACC_DEL_FAIL_CD            CHAR(1),
   3 DELACC_DEL_APPLID             CHAR(8),
   3 DELACC_DEL_PCB1               POINTER,
   3 DELACC_DEL_PCB2               POINTER,
   3 DELACC_DEL_PCB3               POINTER;
