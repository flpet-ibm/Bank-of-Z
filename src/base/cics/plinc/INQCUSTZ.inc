 /* **************************************************************** */
 /*                                                                */
 /*  Copyright IBM Corp. 2023                                      */
 /*                                                                */
 /* **************************************************************** */
 /* Converted from INQCUSTZ.cpy - Inquire Customer COMMAREA.       */
 /* Include at level 3 inside the declaring DCL 1 structure.      */
   3 INQCUST_EYE                  CHAR(4),
   3 INQCUST_SCODE                CHAR(6),
   3 INQCUST_CUSTNO               CHAR(10),
   3 INQCUST_NAME,
     5 INQCUST_TITLE              CHAR(10),
     5 INQCUST_FIRST_NAME         CHAR(50),
     5 INQCUST_LAST_NAME          CHAR(50),
   3 INQCUST_DOB,
     5 INQCUST_DOB_DD             CHAR(2),
     5 INQCUST_DOB_MM             CHAR(2),
     5 INQCUST_DOB_YYYY           CHAR(4),
   3 INQCUST_PHONE                CHAR(20),
   3 INQCUST_ADDR,
     5 INQCUST_ADDR_LINE1         CHAR(50),
     5 INQCUST_ADDR_LINE2         CHAR(50),
     5 INQCUST_CITY               CHAR(50),
     5 INQCUST_POSTCODE           CHAR(10),
     5 INQCUST_COUNTRY            CHAR(50),
   3 INQCUST_STATUS               CHAR(10),
   3 INQCUST_CREATED_DATE,
     5 INQCUST_CREATED_DD         CHAR(2),
     5 INQCUST_CREATED_MM         CHAR(2),
     5 INQCUST_CREATED_YYYY       CHAR(4),
   3 INQCUST_CREDIT_SCORE         CHAR(3),
   3 INQCUST_CS_REVIEW_DT,
     5 INQCUST_CS_REVIEW_DD       CHAR(2),
     5 INQCUST_CS_REVIEW_MM       CHAR(2),
     5 INQCUST_CS_REVIEW_YYYY     CHAR(4),
   3 INQCUST_INQ_SUCCESS          CHAR(1),
   3 INQCUST_INQ_FAIL_CD          CHAR(1),
   3 INQCUST_PCB_POINTER          CHAR(4);
