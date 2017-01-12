.syntax unified

.global HardFault_Handler
.section .init, "ax"

/* poke-function-name for HardFault/MemManage_Handler */
t0:
  .align 1
  .asciz "HardFault/MemManage_Handler"
  .align 2
t1:
  .word 0xff000000 + (t1 - t0)

.code 16
.align 2
.thumb_func
HardFault_Handler:
/* handle Hard_Fault and MemManage the same */

.global MemManage_Handler
.section .init, "ax"
.code 16
.align 2
.thumb_func
/* Call print_stacktrace with a maximum of 20 stack trace counts. */

MemManage_Handler:
.fnstart
    .unwind_raw 0, 0xb0 /* filler to get long unwind description */
    push {r7, lr}
    .save {r7, lr}
    add r7, sp, #0
    .setfp r7, sp, #0
    mov r0, #20
1:  b 1b /* endless loop in case print_stacktrace returns */
.fnend