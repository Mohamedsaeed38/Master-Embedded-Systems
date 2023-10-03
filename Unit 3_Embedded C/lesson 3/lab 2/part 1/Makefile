 #prepared by Mohamed Said

CC=arm-none-eabi-
CFLAGS=-mcpu=cortex-m3 -mthumb   -gdwarf-2
INCS=-I .
LIBS=
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
As = $(wildcard *.s)
AsOBJ = $(As:.s=.o)

all:learn-in-depth.bin
	@echo "====Build is done===="
%.o: %.s 
	$(CC)as.exe  $(CFLAGS) $< -o $@ 
%.o: %.c 
	$(CC)gcc.exe  -c $(CFLAGS) $(INCS) $<  -o $@
learn-in-depth.elf: $(OBJ) $(AsOBJ)
	$(CC)ld.exe  -T linker_script.ld  $(LIBS)  $(OBJ)  $(AsOBJ) -o $@  -Map=Map_file.map
learn-in-depth.bin: learn-in-depth.elf
	$(CC)objcopy.exe -O binary $<  $@
clean:
	rm *.elf *.bin
clean_all:
	rm *.o *.elf *.bin	
