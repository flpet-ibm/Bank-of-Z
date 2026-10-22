 /* **************************************************************** */
 /*                                                                */
 /*  Copyright IBM Corp. 2023                                      */
 /*                                                                */
 /* **************************************************************** */
 /* Converted from DELCUS.cpy - COMMAREA for Delete Customer.      */
  /* Structure template only - no storage is allocated.            */
  /* Usage: DCL 1 var LIKE DELCUS_TMPL;                            */
  DCL 1 DELCUS_TMPL BASED,
   3 COMM_EYE                    CHAR(4),
   3 COMM_SCODE                  CHAR(6),
   3 COMM_CUSTNO                 CHAR(10),
   3 COMM_NAME,
     5 COMM_TITLE                CHAR(10),
     5 COMM_FIRST_NAME           CHAR(50),
     5 COMM_LAST_NAME            CHAR(50),
   3 COMM_DOB,
     5 COMM_DOB_DAY              CHAR(2),
     5 COMM_DOB_MONTH            CHAR(2),
     5 COMM_DOB_YEAR             CHAR(4),
   3 COMM_PHONE                  CHAR(20),
   3 COMM_ADDR,
     5 COMM_ADDR_LINE1           CHAR(50),
     5 COMM_ADDR_LINE2           CHAR(50),
     5 COMM_CITY                 CHAR(50),
     5 COMM_POSTCODE             CHAR(10),
     5 COMM_COUNTRY              CHAR(50),
   3 COMM_STATUS                 CHAR(10),
   3 COMM_CREATED_DATE,
     5 COMM_CREATED_DAY          CHAR(2),
     5 COMM_CREATED_MONTH        CHAR(2),
     5 COMM_CREATED_YEAR         CHAR(4),
   3 COMM_CREDIT_SCORE           CHAR(3),
   3 COMM_CS_REVIEW_DATE,
     5 COMM_CS_REVIEW_DAY        CHAR(2),
     5 COMM_CS_REVIEW_MONTH      CHAR(2),
     5 COMM_CS_REVIEW_YEAR       CHAR(4),
   3 COMM_DEL_SUCCESS            CHAR(1),
   3 COMM_DEL_FAIL_CD            CHAR(1);
