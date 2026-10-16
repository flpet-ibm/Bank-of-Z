 /* **************************************************************** */
 /*                                                                */
 /*  Copyright IBM Corp. 2023                                      */
 /*                                                                */
 /* **************************************************************** */
 /* Converted from CUSTCTRL.cpy                                    */
 /* Include at level 3 inside the declaring DCL 1 structure.      */
   3 CUSTOMER_CONTROL_RECORD,
     5 CUSTOMER_CONTROL_EYECATCHER    CHAR(4),
     5 CUSTOMER_CONTROL_KEY,
       7 CUSTOMER_CONTROL_SORTCODE    CHAR(6),
       7 CUSTOMER_CONTROL_NUMBER      CHAR(10),
     5 NUMBER_OF_CUSTOMERS            CHAR(10),
     5 LAST_CUSTOMER_NUMBER           CHAR(10),
     5 CUSTOMER_CONTROL_SUCCESS_FLAG  CHAR(1),
     5 CUSTOMER_CONTROL_FAIL_CODE     CHAR(1),
     5 FILLER_A                       CHAR(38),
     5 FILLER_B                       CHAR(160),
     5 FILLER_C                       CHAR(8),
     5 FILLER_D                       CHAR(3),
     5 FILLER_E                       CHAR(8);
