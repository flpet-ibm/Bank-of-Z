 /***************************************************************** */
 /*  Copyright IBM Corp. 2023                                      */
 /***************************************************************** */
 /* BNK1ACC - Symbolic map include for BNK1ACC (Display Accounts) */
 /* Generated from BNK1ACC.bms                                     */
 /* Fields: CUSTNO, ACCOUNT(10), MESSAGE, DUMMY                    */
 /***************************************************************** */
   3 BNK1ACCI,
     5 CUSTNOL       FIXED BIN(15),
     5 CUSTNOA       CHAR(1),
     5 CUSTNOI       CHAR(10),
     5 ACCOUNT       (10) CHAR(79),
     5 MESSAGEL      FIXED BIN(15),
     5 MESSAGEA      CHAR(1),
     5 MESSAGEI      CHAR(79),
     5 DUMMYL        FIXED BIN(15),
     5 DUMMYA        CHAR(1),
     5 DUMMYI        CHAR(1);
