
CC=arm-none-eabi-gcc
CFLAGS=-mcpu=cortex-m3 -mthumb -Os -nostdlib -ffreestanding -I../../kyber
LDFLAGS=-Wl,-Tlinker.ld -Wl,-Map=output.map
OBJCOPY=arm-none-eabi-objcopy

SRCS=main.c ../../kyber/kyber512.c
OBJS=$(SRCS:.c=.o)

all: kyber_cortex.elf

kyber_cortex.elf: $(SRCS)
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $(SRCS)

clean:
	rm -f *.elf *.o *.map
