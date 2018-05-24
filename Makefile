# @Author: fjk
# @Date:   2018-05-24T21:32:05+08:00
# @Last modified by:   fjk
# @Last modified time: 2018-05-24T22:39:18+08:00
arm:
	arm-linux-gcc -c ./source/hardware.c -o ./source/hardware.o -I./include
	arm-linux-gcc -c ./source/led.c -o ./source/led.o -I./include
	arm-linux-gcc -c ./source/key.c -o ./source/key.o -I./include
	arm-linux-gcc -c ./main.c -o ./main.o -I./include
	arm-linux-as ./start/start.s -o ./start/start.o
	arm-linux-ld ./start/start.o main.o ./source/hardware.o ./source/led.o ./source/key.o -o ./arm -Ttext=0x50000000
	arm-linux-objcopy -O binary ./arm ./arm.bin
	arm-linux-nm ./arm > ./arm.map
clean:
	rm -fr ./start/start.o ./source/hardware.o ./main.o ./arm ./arm.bin ./arm.map ./source/led.o ./source/key.o
