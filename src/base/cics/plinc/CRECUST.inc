 /* **************************************************************** */
 /*                                                                */
 /*  Copyright IBM Corp. 2023                                      */
 /*                                                                */
 /* **************************************************************** */
 /* Converted from CRECUST.cpy — COMMAREA for Create Customer.     */
 /* Include at level 3 inside the declaring DCL 1 structure.      */
   3 COMM_EYECATCHER              CHAR(4),
   3 COMM_KEY,
     5 COMM_SORTCODE               CHAR(6),
     5 COMM_NUMBER                 CHAR(10),
   3 COMM_NAME,
     5 COMM_TITLE                  CHAR(10),
     5 COMM_FIRST_NAME             CHAR(50),
     5 COMM_LAST_NAME              CHAR(50),
   3 COMM_DOB,
     5 COMM_DOB_DAY                CHAR(2),
     5 COMM_DOB_MONTH              CHAR(2),
     5 COMM_DOB_YEAR               CHAR(4),
   3 COMM_PHONE                    CHAR(20),
   3 COMM_ADDR,
     5 COMM_ADDR_LINE1             CHAR(50),
     5 COMM_ADDR_LINE2             CHAR(50),
     5 COMM_CITY                   CHAR(50),
     5 COMM_POSTCODE               CHAR(10),
     5 COMM_COUNTRY                CHAR(50),
   3 COMM_STATUS                   CHAR(10),
   3 COMM_CREATED_DATE,
     5 COMM_CREATED_DAY            CHAR(2),
     5 COMM_CREATED_MONTH          CHAR(2),
     5 COMM_CREATED_YEAR           CHAR(4),
   3 COMM_CREDIT_SCORE             CHAR(3),
   3 COMM_CS_REVIEW_DATE,
     5 COMM_CS_REVIEW_DAY          CHAR(2),
     5 COMM_CS_REVIEW_MONTH        CHAR(2),
     5 COMM_CS_REVIEW_YEAR         CHAR(4),
   3 COMM_SUCCESS                  CHAR(1),
   3 COMM_FAIL_CODE                CHAR(1);
