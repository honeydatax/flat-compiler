main:
	push	{fp, lr}
	add	fp, sp, #4
	sub	sp, sp, #16
	str r3,var_sys_call
	mov r0,#2
	blx	r3
	ldr r3,var_sys_call
	ldr r1,var_hellos
	mov r0,#3
	blx	r3
	ldr r3,var_sys_call
	mov r0,#0
	blx	r3
	ldr r3,var_sys_call
	mov r0,#1
	blx	r3
	sub	sp, fp, #4
	@ sp needed
	pop	{fp, pc}
var_sys_call: .word 0
var_hellos:   .word var_hello
var_hello:    .asciz "hello world\0"
var_helloss:   .word var_hello -var_hello

