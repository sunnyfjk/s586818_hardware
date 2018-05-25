# @Author: fjk
# @Date:   2018-05-25T19:25:26+08:00
# @Email:  sunnyfjk@mail.com
# @Filename: Makefile
# @Last modified by:   fjk
# @Last modified time: 2018-05-25T20:16:35+08:00
# @License: GPLV3
arm:
	arm-linux-gcc -c ./source/hardware.c -o ./source/hardware.o -I./include
	arm-linux-gcc -c ./source/led.c -o ./source/led.o -I./include
	arm-linux-gcc -c ./source/key.c -o ./source/key.o -I./include
	arm-linux-gcc -c ./source/uart.c -o ./source/uart.o -I./include
	arm-linux-gcc -c ./main.c -o ./main.o -I./include
	arm-linux-as ./start/start.s -o ./start/start.o
	arm-linux-ld ./start/start.o main.o ./source/hardware.o ./source/led.o  ./source/uart.o  ./source/key.o -o ./arm -Ttext=0x50000000
	arm-linux-objcopy -O binary ./arm ./arm.bin
	arm-linux-nm ./arm > ./arm.map
	cp ./arm.bin /tftpboot
clean:
	rm -fr ./start/start.o ./source/hardware.o ./main.o ./arm ./arm.bin ./arm.map ./source/led.o ./source/key.o ./source/uart.o
