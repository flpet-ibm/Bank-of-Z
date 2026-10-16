 /* **************************************************************** */
 /*                                                                */
 /*  Copyright IBM Corp. 2023                                      */
 /*                                                                */
 /* **************************************************************** */
 /* Converted from CONTDB2.cpy — SQL DECLARE TABLE statement.      */
 /* Use with: EXEC SQL INCLUDE CONTDB2                             */
 EXEC SQL DECLARE STTESTER.CONTROL TABLE
      (CONTROL_NAME       CHAR(32) NOT NULL,
       CONTROL_VALUE_NUM  INTEGER,
       CONTROL_VALUE_STR  CHAR(40));
