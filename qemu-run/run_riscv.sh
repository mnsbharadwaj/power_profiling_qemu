
#!/bin/bash
qemu-system-riscv64 \
  -M virt \
  -cpu rv64 \
  -nographic \
  -kernel ../firmware/riscv/kyber_riscv.elf \
  -d in_asm \
  -D trace-riscv.log
