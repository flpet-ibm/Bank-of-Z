 /* ----------------------------------------------------------------- */
 /*  Copyright IBM Corp. 2023                                        */
 /*  BNK1ACC.inc - PL/I symbolic map for BNK1ACC mapset/map         */
 /*  Generated from BNK1ACC.bms (TIOAPFX=YES, LANG=PLI equivalent)  */
 /* ----------------------------------------------------------------- */
 /* Input map structure */
 DCL 1 BNK1ACCI,
       2 BNK1ACCI_FILLER  CHAR(12),
       2 CUSTNOL           FIXED BIN(15),
       2 CUSTNOF           CHAR(1),
       2 CUSTNOA           CHAR(1),
       2 CUSTNOI           CHAR(10),
       2 ACCOUNTX   (10),
         3 ACCOUNTL         FIXED BIN(15),
         3 ACCOUNTF         CHAR(1),
         3 ACCOUNTA         CHAR(1),
         3 ACCOUNTI         CHAR(79),
       2 MESSAGEL           FIXED BIN(15),
       2 MESSAGEF           CHAR(1),
       2 MESSAGEA           CHAR(1),
       2 MESSAGEI           CHAR(79),
       2 DUMMYL             FIXED BIN(15),
       2 DUMMYF             CHAR(1),
       2 DUMMYA             CHAR(1),
       2 DUMMYI             CHAR(1);

 /* Output map - BASED overlay on BNK1ACCI storage */
 DCL BNK1ACCO_PTR POINTER;
 DCL 1 BNK1ACCO BASED(BNK1ACCO_PTR),
       2 BNK1ACCO_FILLER  CHAR(12),
       2 CUSTNOOX          CHAR(3),
       2 CUSTNOO           CHAR(10),
       2 ACCOUNTYX  (10),
         3 ACCOUNTOX        CHAR(3),
         3 ACCOUNTO         CHAR(79),
       2 MESSAGEOX          CHAR(3),
       2 MESSAGEO           CHAR(79),
       2 DUMMYOX            CHAR(3),
       2 DUMMYO             CHAR(1);
