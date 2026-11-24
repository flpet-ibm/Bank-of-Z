      *****************************************************************
      *                                                               *
      *                                                               *
      *                                                               *
      *     Licensed Materials - Property of IBM                      *
      *                                                               *
      *     "Restricted Materials of IBM"                             *
      *                                                               *
      *     5655-Y04                                                  *
      *                                                               *
      *     (C) Copyright IBM Corp. 1988"                             *
      *                                                               *
      *                                                               *
      *                                                               *
      *                                                               *
      *   STATUS = 7.2.0                                              *
      *                                                               *
      * CHANGE ACTIVITY :                                             *
      *                                                               *
      *   $SEG(DFHEIBLK),COMP(COMMAND),PROD(CICS TS ):                *
      *                                                               *
      *  PN= REASON REL YYMMDD HDXXIII : REMARKS                      *
      * $L0= Base   210 88     HDWRVB  : Base                         *
      * R140343     720 171002 HDAFDRB : comp-5 changes               *
      *                                                               *
      *****************************************************************
      *
      *
      *     EIBLK EXEC INTERFACE BLOCK
       01   EIBLK.
      *        EIBTIME    TIME IN 0HHMMSS FORMAT
            02 EIBTIME    PICTURE S9(7) USAGE COMPUTATIONAL-3.
      *        EIBDATE    DATE IN 0CYYDDD FORMAT, where C is the
      *                   century indicator (0=1900, 1=2000 etc),
      *                   YY is the year and DDD is the day number.
            02 EIBDATE    PICTURE S9(7) USAGE COMPUTATIONAL-3.
      *        EIBTRNID   TRANSACTION IDENTIFIER
            02 EIBTRNID   PICTURE X(4).
      *        EIBTASKN   TASK NUMBER
            02 EIBTASKN   PICTURE S9(7) USAGE COMPUTATIONAL-3.
      *        EIBTRMID   TERMINAL IDENTIFIER
            02 EIBTRMID   PICTURE X(4).
      *        DFHEIGDI   RESERVED
            02 DFHEIGDI   PICTURE S9(4) USAGE COMPUTATIONAL-5.
      *        EIBCPOSN   CURSOR POSITION
            02 EIBCPOSN   PICTURE S9(4) USAGE COMPUTATIONAL-5.
      *        EIBCALEN   COMMAREA LENGTH
            02 EIBCALEN   PICTURE S9(4) USAGE COMPUTATIONAL-5.
      *        EIBAID     ATTENTION IDENTIFIER
            02 EIBAID     PICTURE X(1).
      *        EIBFN      FUNCTION CODE
            02 EIBFN      PICTURE X(2).
      *        EIBRCODE   RESPONSE CODE
            02 EIBRCODE   PICTURE X(6).
      *        EIBDS      DATASET NAME
            02 EIBDS      PICTURE X(8).
      *        EIBREQID   REQUEST IDENTIFIER
            02 EIBREQID   PICTURE X(8).
      *        EIBRSRCE   RESOURCE NAME
            02 EIBRSRCE   PICTURE X(8).
      *        EIBSYNC    X'FF' - SYNCPOINT REQUESTED
            02 EIBSYNC    PICTURE X.
      *        EIBFREE    X'FF' - FREE REQUESTED
            02 EIBFREE    PICTURE X.
      *        EIBRECV    X'FF' - RECEIVE REQUIRED
            02 EIBRECV    PICTURE X.
      *        EIBSEND    RESERVED
            02 EIBSEND    PICTURE X.
      *        EIBATT     X'FF' - ATTACH DATA RECEIVED
            02 EIBATT     PICTURE X.
      *        EIBEOC     X'FF' - EOC RECEIVED
            02 EIBEOC     PICTURE X.
      *        EIBFMH     X'FF' - FMHS RECEIVED
            02 EIBFMH     PICTURE X.
      *        EIBCOMPL   X'FF' - DATA COMPLETE
            02 EIBCOMPL   PICTURE X(1).
      *        EIBSIG     X'FF' - SIGNAL RECEIVED
            02 EIBSIG     PICTURE X(1).
      *        EIBCONF    X'FF' - CONFIRM REQUESTED
            02 EIBCONF    PICTURE X(1).
      *        EIBERR     X'FF' - ERROR RECEIVED
            02 EIBERR     PICTURE X(1).
      *        EIBERRCD  ERROR CODE RECEIVED
            02 EIBERRCD  PICTURE X(4).
      *        EIBSYNRB   X'FF' - SYNC ROLLBACK REQUESTED
            02 EIBSYNRB   PICTURE X.
      *        EIBNODAT   X'FF' - NO APPL DATA RECEIVED
            02 EIBNODAT   PICTURE X.
      *        EIBRESP    INTERNAL CONDITION NUMBER
            02 EIBRESP    PICTURE S9(8) USAGE COMPUTATIONAL.
      *        EIBRESP2   MORE DETAILS ON SOME RESPONSES
            02 EIBRESP2   PICTURE S9(8) USAGE COMPUTATIONAL.
      *        EIBRLDBK   ROLLED BACK
            02 EIBRLDBK   PICTURE X(1).