	.file	1 "stack.c"
	.section .mdebug.abi32
	.previous
	.nan	legacy
	.module	fp=xx
	.module	nooddspreg
	.rdata
	.align	2
.LC0:
	.ascii	"Address of local: %p\012\000"
	.text
	.align	2
	.globl	main
	.set	nomips16
	.set	nomicromips
	.ent	main
	.type	main, @function
main:
	.frame	$sp,32,$31		# vars= 8, regs= 1/0, args= 16, gp= 0
	.mask	0x80000000,-4
	.fmask	0x00000000,0
	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-32
	sw	$31,28($sp)
	sw	$4,32($sp)
	sw	$5,36($sp)
	addiu	$2,$sp,16
	move	$5,$2
	lui	$2,%hi(.LC0)
	addiu	$4,$2,%lo(.LC0)
	jal	printf
	nop

	move	$2,$0
	lw	$31,28($sp)
	addiu	$sp,$sp,32
	jr	$31
	nop

	.set	macro
	.set	reorder
	.end	main
	.size	main, .-main
	.ident	"GCC: (Codescape GNU Tools 2017.10-05 for MIPS MTI Bare Metal) 6.3.0"
