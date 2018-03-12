	.file	1 "linked-list.c"
	.section .mdebug.abi32
	.previous
	.nan	legacy
	.module	fp=xx
	.module	nooddspreg
	.text
	.align	2
	.globl	list_head_append
	.set	nomips16
	.set	nomicromips
	.ent	list_head_append
	.type	list_head_append, @function
list_head_append:
	.frame	$sp,0,$31		# vars= 0, regs= 0/0, args= 0, gp= 0
	.mask	0x00000000,0
	.fmask	0x00000000,0
	.set	noreorder
	.set	nomacro
	sw	$4,0($sp)
	sw	$5,4($sp)
	lw	$2,0($sp)
	lw	$3,0($2)
	lw	$2,4($sp)
	sw	$3,4($2)
	lw	$2,0($sp)
	lw	$3,4($sp)
	sw	$3,0($2)
	nop
	jr	$31
	nop

	.set	macro
	.set	reorder
	.end	list_head_append
	.size	list_head_append, .-list_head_append
	.align	2
	.globl	list_tail_append
	.set	nomips16
	.set	nomicromips
	.ent	list_tail_append
	.type	list_tail_append, @function
list_tail_append:
	.frame	$sp,0,$31		# vars= 0, regs= 0/0, args= 0, gp= 0
	.mask	0x00000000,0
	.fmask	0x00000000,0
	.set	noreorder
	.set	nomacro
	sw	$4,0($sp)
	sw	$5,4($sp)
	lw	$2,4($sp)
	sw	$0,4($2)
	lw	$2,0($sp)
	lw	$2,4($2)
	lw	$3,4($sp)
	sw	$3,4($2)
	lw	$2,0($sp)
	lw	$3,4($sp)
	sw	$3,4($2)
	nop
	jr	$31
	nop

	.set	macro
	.set	reorder
	.end	list_tail_append
	.size	list_tail_append, .-list_tail_append
	.ident	"GCC: (Codescape GNU Tools 2017.10-05 for MIPS MTI Bare Metal) 6.3.0"
