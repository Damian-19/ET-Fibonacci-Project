		.globl 	fib_asm1
	.p2align 2
		.type	fib_asm1,%function

fib_asm1:

	CMP X0, #0
	B.LT endif
	CMP X0, #20
	B.GT endif
	CMP X0, #2
	B.LT endif
		//a = x10
		//b = x11
		//c = x12
	MOV X10, #0
	MOV X11, #1

forloop:
	ADD X12, X10, X11
	MOV X10, X11
	MOV X11, X12

	CMP X9, #20
	B.LE forloop
endif:
	br x30 			//Return by branching to the address in the link register
