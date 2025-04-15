
CC=riscv64-unknown-elf-gcc
CFLAGS=-march=rv64gc -mabi=lp64 -Os -nostdlib -ffreestanding -I../../kyber
LDFLAGS=-Wl,-Tlinker.ld -Wl,-Map=output.map
OBJCOPY=riscv64-unknown-elf-objcopy

SRCS=main.c ../../kyber/kyber512.c
OBJS=$(SRCS:.c=.o)

all: kyber_riscv.elf

kyber_riscv.elf: $(SRCS)
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $(SRCS)

clean:
	rm -f *.elf *.o *.map
