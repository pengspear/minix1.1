
STACK_SIZE	=	0x400

	.text
	.global	start, _start

start:
_start:
	movl	$(stack + STACK_SIZE), %esp

	call	main
loop:
	hlt
	jmp	loop

	.comm	stack, STACK_SIZE

