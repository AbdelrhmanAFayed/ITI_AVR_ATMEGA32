	.file	"main.c"
__SP_H__ = 0x3e
__SP_L__ = 0x3d
__SREG__ = 0x3f
__tmp_reg__ = 0
__zero_reg__ = 1
	.section	.text.startup.main,"ax",@progbits
.global	main
	.type	main, @function
main:
/* prologue: function */
/* frame size = 0 */
/* stack size = 0 */
.L__stack_usage = 0
	call HLCD_enuInit
	ldi r22,0
	ldi r24,lo8(64)
	call HLCD_enuWriteData
.L2:
	rjmp .L2
	.size	main, .-main
	.ident	"GCC: (GNU) 5.4.0"
