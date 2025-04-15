#!/bin/bash
qemu-system-arm -M lm3s6965evb -cpu cortex-m3 -nographic -kernel ../firmware/cortexm/kyber_cortex.elf -d in_asm -D trace-cortexm.log
