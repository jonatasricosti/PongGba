path = %CD%\devkitadv\bin

gcc -c -O3 -mthumb -mthumb-interwork main.c
gcc -mthumb -mthumb-interwork -o main.elf main.o
objcopy -O binary main.elf game.gba

del *.elf
del *.o
pause
