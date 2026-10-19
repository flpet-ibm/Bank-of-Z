 /* **************************************************************** */
 /*                                                                */
 /*  Copyright IBM Corp. 2023                                      */
 /*                                                                */
 /* **************************************************************** */
 /* Converted from UPDACC.cpy - Update Account COMMAREA.           */
 /* Include at level 3 inside the declaring DCL 1 structure.      */
   3 COMM_EYE                    CHAR(4),
   3 COMM_CUSTNO                 CHAR(10),
   3 COMM_SCODE                  CHAR(6),
   3 COMM_ACCNO                  CHAR(8),
   3 COMM_ACC_TYPE               CHAR(8),
   3 COMM_INT_RATE               FIXED DEC(6,2),
   3 * UNION,
     5 COMM_OPENED               CHAR(8),
     5 COMM_OPENED_GROUP,
       7 COMM_OPENED_DAY         CHAR(2),
       7 COMM_OPENED_MONTH       CHAR(2),
       7 COMM_OPENED_YEAR        CHAR(4),
   3 COMM_OVERDRAFT              CHAR(8),
   3 * UNION,
     5 COMM_LAST_STMT_DT         CHAR(8),
     5 COMM_LAST_STMNT_GROUP,
       7 COMM_LASTST_DAY         CHAR(2),
       7 COMM_LASTST_MONTH       CHAR(2),
       7 COMM_LASTST_YEAR        CHAR(4),
   3 * UNION,
     5 COMM_NEXT_STMT_DT         CHAR(8),
     5 COMM_NEXT_STMNT_GROUP,
       7 COMM_NEXTST_DAY         CHAR(2),
       7 COMM_NEXTST_MONTH       CHAR(2),
       7 COMM_NEXTST_YEAR        CHAR(4),
   3 COMM_AVAIL_BAL              FIXED DEC(12,2),
   3 COMM_ACTUAL_BAL             FIXED DEC(12,2),
   3 COMM_SUCCESS                CHAR(1);
