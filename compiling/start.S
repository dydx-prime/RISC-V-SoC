.section .text
.global _start
_start:

    li sp, 0x1800        # set stack pointer to top of RAM, same as your Verilog

    call main

loop: j loop             # catch return
