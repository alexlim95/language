	.file	"fact-while.c"
	.text
	.globl	fact_while
	.type	fact_while, @function
fact_while:
.LFB0:
	.cfi_startproc
	movl	4(%esp), %edx
	cmpl	$1, %edx
	jle	.L4
	movl	$1, %eax
.L3:
	imull	%edx, %eax
	subl	$1, %edx
	cmpl	$1, %edx
	jne	.L3
	rep ret
.L4:
	movl	$1, %eax
	ret
	.cfi_endproc
.LFE0:
	.size	fact_while, .-fact_while
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.9) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
