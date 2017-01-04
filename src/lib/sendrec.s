# See ../h/com.h for C definitions
        .equ    SEND, 1
        .equ    RECEIVE, 2
        .equ    BOTH, 3
        .equ    SYSVEC, 32

#*========================================================================*
#                           send and receive                              *
#*========================================================================*
# send(), receive(), sendrec() all save bp, but destroy ax, bx, and cx.
        .globl send, receive, sendrec
send:  movw    $SEND, %cx      # send(dest, ptr)
        jmp     .L0

receive:
        movw    $RECEIVE, %cx   # receive(src, ptr)
        jmp     .L0

sendrec:
        movw    $BOTH, %cx      # sendrec(srcdest, ptr)
        jmp     .L0

  .L0:  pushw   %bp             # save bp
        movw    %sp,%bp         # can't index off sp
        movw    4(%bp), %ax     # ax = dest-src
        movw    6(%bp), %bx     # bx = message pointer
        int     $SYSVEC
        popw    %bp             # restore bp
        ret                     # return


