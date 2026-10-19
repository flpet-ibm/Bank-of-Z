 /* **************************************************************** */
 /*                                                                */
 /*  Copyright IBM Corp. 2023                                      */
 /*                                                                */
 /* **************************************************************** */
 /* Converted from CREACC.cpy — COMMAREA for Create Account.       */
 /* Include at level 3 inside the declaring DCL 1 DFHCOMMAREA.    */
   3 COMM_EYECATCHER              CHAR(4),
   3 COMM_CUSTNO                  CHAR(10),
   3 COMM_KEY,
     5 COMM_SORTCODE               CHAR(6),
     5 COMM_NUMBER                 CHAR(8),
   3 COMM_ACC_TYPE                 CHAR(8),
   3 COMM_INT_RT                   FIXED DEC(6,2),
   3 * UNION,
     5 COMM_OPENED                 CHAR(8),
     5 COMM_OPENED_GROUP,
       7 COMM_OPENED_DAY           CHAR(2),
       7 COMM_OPENED_MONTH         CHAR(2),
       7 COMM_OPENED_YEAR          CHAR(4),
   3 COMM_OVERDR_LIM               CHAR(8),
   3 * UNION,
     5 COMM_LAST_STMT_DT           CHAR(8),
     5 COMM_LAST_STMNT_GROUP,
       7 COMM_LASTST_DAY           CHAR(2),
       7 COMM_LASTST_MONTH         CHAR(2),
       7 COMM_LASTST_YEAR          CHAR(4),
   3 * UNION,
     5 COMM_NEXT_STMT_DT           CHAR(8),
     5 COMM_NEXT_STMNT_GROUP,
       7 COMM_NEXTST_DAY           CHAR(2),
       7 COMM_NEXTST_MONTH         CHAR(2),
       7 COMM_NEXTST_YEAR          CHAR(4),
   3 COMM_AVAIL_BAL                FIXED DEC(12,2),
   3 COMM_ACT_BAL                  FIXED DEC(12,2),
   3 COMM_SUCCESS                  CHAR(1),
   3 COMM_FAIL_CODE                CHAR(1);