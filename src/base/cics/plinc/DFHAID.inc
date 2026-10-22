 /********************************************************************/
 /*                                                                  */
 /*                                                                  */
 /*                                                                  */
 /*      Licensed Materials - Property of IBM                        */
 /*                                                                  */
 /*      "Restricted Materials of IBM"                               */
 /*                                                                  */
 /*      5655-YA1                                                    */
 /*                                                                  */
 /*      (C) Copyright IBM Corp. 1980, 2022"                         */
 /*                                                                  */
 /*                                                                  */
 /*                                                                  */
 /*                                                                  */
 /*                                                                  */
 /*MODULE NAME = DFHAID                                              */
 /*                                                                  */
 /*DESCRIPTIVE NAME = CICS TS     3270 AID VALUES                    */
 /*                                                                  */
 /*                                                                  */
 /*STATUS = %XB10                                                    */
 /*                                                                  */
 /*FUNCTION = DEFINES THE STANDARD 3270 AID VALUES                   */
 /*                                                                  */
 /*EXTERNAL REFERENCES :                                             */
 /*   ....                                                           */
 /*                                                                  */
 /*TABLES :                                                          */
 /*   ....                                                           */
 /*                                                                  */
 /*MACROS :                                                          */
 /*   ....                                                           */
 /*                                                                  */
 /*CHANGE ACTIVITY :                                                 */
 /* $SEG(DFHAID),COMP(BTAM),PROD(CICS TS ):                          */
 /*                                                                  */
 /* PN= REASON REL YYMMDD HDXIII : REMARKS                           */
 /* $01= A48577 660 070910 HDEORVB: Migrate PK48577 from SPA R650    */
 /* $D1= I01599 170 831114,HD0PIHR : DCR 1599 (STATIC INTERNAL)      */
 /* $H1= 5E2 160 8009,HDCPH:            CICS/VS 1.6 PARTITION SUPPORT*/
 /* $P1= M81072 410 920707 HD9CTNG: Restore DFHAID copybooks to LCS  */
 /* $P3= M83615 410 930819 HD4OGB  : Fix Change Descriptors          */
 /*     R169962 740 220304 HDPJEM  : Fix special chars               */
 /*                                                                  */
 /********************************************************************/
  DECLARE    (
                    DFHENTER  CHAR (1) INIT(''''),
                    DFHCLEAR  CHAR (1) INIT('_'),
                    DFHCLRP   CHAR (1) INIT('6A'X),          /* @01C */
                    DFHPEN    CHAR (1) INIT('='),
                    DFHOPID   CHAR (1) INIT('W'),
                    DFHMSRE   CHAR (1) INIT('X'),
                    DFHSTRF   CHAR (1) INIT('h'),
                    DFHTRIG   CHAR (1) INIT('"'),
                    DFHPA1    CHAR (1) INIT('%'),
                    DFHPA2    CHAR (1) INIT('>'),
                    DFHPA3    CHAR (1) INIT(','),
                    DFHPF1    CHAR (1) INIT('1'),
                    DFHPF2    CHAR (1) INIT('2'),
                    DFHPF3    CHAR (1) INIT('3'),
                    DFHPF4    CHAR (1) INIT('4'),
                    DFHPF5    CHAR (1) INIT('5'),
                    DFHPF6    CHAR (1) INIT('6'),
                    DFHPF7    CHAR (1) INIT('7'),
                    DFHPF8    CHAR (1) INIT('8'),
                    DFHPF9    CHAR (1) INIT('9'),
                    DFHPF10   CHAR (1) INIT(':'),
                    DFHPF11   CHAR (1) INIT('#'),
                    DFHPF12   CHAR (1) INIT('@'),
                    DFHPF13   CHAR (1) INIT('A'),
                    DFHPF14   CHAR (1) INIT('B'),
                    DFHPF15   CHAR (1) INIT('C'),
                    DFHPF16   CHAR (1) INIT('D'),
                    DFHPF17   CHAR (1) INIT('E'),
                    DFHPF18   CHAR (1) INIT('F'),
                    DFHPF19   CHAR (1) INIT('G'),
                    DFHPF20   CHAR (1) INIT('H'),
                    DFHPF21   CHAR (1) INIT('I'),
                    DFHPF22   CHAR (1) INIT('4A'X),     /* @R169962C */
                    DFHPF23   CHAR (1) INIT('.'),
                    DFHPF24   CHAR (1) INIT('<')
             ) STATIC INTERNAL;
                                                     /* @D1C*/