	.globl get_base, get_size, get_tot_mem
	.globl endbss

#*========================================================================*
#                           utilities                                     *
#*========================================================================*
get_base:                       # return click at which prog starts
        movw    %ds,%ax
        ret

get_size:                       # return prog size in bytes (text+data+bss)
        movw    endbss, %ax     # end is compiler label at end of bss
        ret

# Find out how much memory the machine has, including vectors, kernel MM, etc.
get_tot_mem:
        cli
        pushw   %es
        pushw   %di
        movw    $8192, %ax      # start search at 128K (8192 clicks)
        subw    %di,%di
.L1:    movw    %ax,%es
#       seg es
        movw    $0xA5A4,(%di)
        xorw    %bx,%bx
#       seg es
        movw    (%di), %bx      # read back pattern just written
        cmpw    $0xA5A4, %bx    # compare with expected value
        jne     .L2             # if different, no memory present
        addw    $4096, %ax      # advance counter by 64K
        cmpw    $0xA000, %ax    # stop seaching at 640K
        jne .L1
.L2:    popw %di
        popw %es
        sti
        ret

