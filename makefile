
CC = arm-none-eabi-gcc
CPU = cortex-m3
DEBUG_FLAG = -g
CFLAGS = -mcpu=$(CPU) -mthumb -std=gnu11 -O0 $(DEBUG_FLAG)
LDFLAGS = -T lscript.ld -nostdlib -Map=main.map
OBJS = startup.o main.o
INCP = C:\Users\shahm\OneDrive\Desktop\bluepill
	
main.elf: $(OBJS)
	arm-none-eabi-ld $(LDFLAGS) -o $@ *.o
	size $@
	
	
%.o:%.c
	$(CC) $(CFLAGS) -c -I$(INCP) -o $@ $<
	
info: $(OBJS)
	arm-none-eabi-objdump -s -h -t $(OBJS)
	
debug:
	debug
#arm-none-eabi-gdb main.elf -ex "target extended-remote com5"  -ex " mon swdp_scan"
	
clean:
	rm -f *.o *.elf

.phony : clean
.phony : info