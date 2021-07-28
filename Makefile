GCCFLAGS = -Wall -O2 -ffreestanding -nostdinc -nostdlib -nostartfiles
GCCPATH = /usr/gcc-arm-9.2-2019.12-x86_64-aarch64-none-elf/bin

all: clean kernel8.img

start.o: kernel/start.S
	$(GCCPATH)/aarch64-none-elf-gcc $(GCCFLAGS) -c kernel/start.S -o start.o

scheduler.o: kernel/scheduler.c
	$(GCCPATH)/aarch64-none-elf-gcc $(GCCFLAGS) -c kernel/scheduler.c -o scheduler.o


gpio.o: modules/gpio/gpio.c
	$(GCCPATH)/aarch64-none-elf-gcc $(GCCFLAGS) -c modules/gpio/gpio.c -o gpio.o


led.o: modules/led/led.c
	$(GCCPATH)/aarch64-none-elf-gcc $(GCCFLAGS) -c modules/led/led.c -o led.o


app.o: app.c
	$(GCCPATH)/aarch64-none-elf-gcc $(GCCFLAGS) -c app.c -o app.o

kernel8.img: start.o gpio.o led.o app.o scheduler.o 
	$(GCCPATH)/aarch64-none-elf-ld -nostdlib -nostartfiles start.o gpio.o led.o app.o scheduler.o -T linker.ld -o kernel8.elf
	$(GCCPATH)/aarch64-none-elf-objcopy -O binary kernel8.elf kernel8.img

clean:
	/bin/rm kernel8.elf *.o *.img > /dev/null 2> /dev/null || true