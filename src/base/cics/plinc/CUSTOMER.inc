 /* **************************************************************** */
 /*                                                                */
 /*  Copyright IBM Corp. 2023                                      */
 /*                                                                */
 /* **************************************************************** */
 /* Converted from CUSTOMER.cpy                                    */
 /* Include at level 3 inside the declaring DCL 1 structure.      */
   3 CUSTOMER_RECORD,
     5 CUSTOMER_EYECATCHER           CHAR(4),
     5 CUSTOMER_KEY,
       7 CUSTOMER_SORTCODE           CHAR(6),
       7 CUSTOMER_NUMBER             CHAR(10),
     5 CUSTOMER_NAME,
       7 CUSTOMER_TITLE              CHAR(10),
       7 CUSTOMER_FIRST_NAME         CHAR(50),
       7 CUSTOMER_LAST_NAME          CHAR(50),
     5 CUSTOMER_DOB,
       7 CUSTOMER_DOB_DAY            CHAR(2),
       7 CUSTOMER_DOB_MONTH          CHAR(2),
       7 CUSTOMER_DOB_YEAR           CHAR(4),
     5 CUSTOMER_PHONE                CHAR(20),
     5 CUSTOMER_ADDRESS,
       7 CUSTOMER_ADDR_LINE1         CHAR(50),
       7 CUSTOMER_ADDR_LINE2         CHAR(50),
       7 CUSTOMER_CITY               CHAR(50),
       7 CUSTOMER_POSTCODE           CHAR(10),
       7 CUSTOMER_COUNTRY            CHAR(50),
     5 CUSTOMER_STATUS               CHAR(10),
     5 CUSTOMER_CREATED_DATE,
       7 CUSTOMER_CREATED_DAY        CHAR(2),
       7 CUSTOMER_CREATED_MONTH      CHAR(2),
       7 CUSTOMER_CREATED_YEAR       CHAR(4),
     5 CUSTOMER_CREDIT_SCORE         CHAR(3),
     5 CUSTOMER_CS_REVIEW_DATE,
       7 CUSTOMER_CS_REVIEW_DAY      CHAR(2),
       7 CUSTOMER_CS_REVIEW_MONTH    CHAR(2),
       7 CUSTOMER_CS_REVIEW_YEAR     CHAR(4);
