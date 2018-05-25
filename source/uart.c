/**
 * @Author: fjk
 * @Date:   2018-05-25T19:27:01+08:00
 * @Email:  sunnyfjk@mail.com
 * @Filename: uart.c
 * @Last modified by:   fjk
 * @Last modified time: 2018-05-25T20:01:06+08:00
 * @License: GPLV3
 */
#include <common.h>
#include <uart.h>
void uart_init(void) {
  printf("CLKGENENB=%d\n", CLKGENENB & (1 << 2));
  printf("CLKDIV0=%d,CLKSRCSEL0=%d\n", UARTCLKGEN0L & 0xff, UARTCLKGEN0L & 0x7);
}
void uputchar(char c) {}
char ugetchar(void) {}
