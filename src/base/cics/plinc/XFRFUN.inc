 /* **************************************************************** */
 /*                                                                */
 /*  Copyright IBM Corp. 2023                                      */
 /*                                                                */
 /* **************************************************************** */
 /* Converted from XFRFUN.cpy - Transfer Function COMMAREA.        */
  /* Structure template only - no storage is allocated.            */
  /* Usage: DCL 1 var LIKE XFRFUN_TMPL;                            */
  DCL 1 XFRFUN_TMPL BASED,
   3 COMM_FACCNO                 CHAR(8),
   3 COMM_FSCODE                 CHAR(6),
   3 COMM_TACCNO                 CHAR(8),
   3 COMM_TSCODE                 CHAR(6),
   3 COMM_AMT                    FIXED DEC(12,2),
   3 COMM_FAVBAL                 FIXED DEC(12,2),
   3 COMM_FACTBAL                FIXED DEC(12,2),
   3 COMM_TAVBAL                 FIXED DEC(12,2),
   3 COMM_TACTBAL                FIXED DEC(12,2),
   3 COMM_FAIL_CODE              CHAR(1),
   3 COMM_SUCCESS                CHAR(1);
