/**
 * @Author: fjk
 * @Date:   2018-05-25T19:26:54+08:00
 * @Email:  sunnyfjk@mail.com
 * @Filename: uart.h
 * @Last modified by:   fjk
 * @Last modified time: 2018-05-25T19:44:05+08:00
 * @License: GPLV3
 */
#ifndef __UART_H__
#define __UART_H__

#define CLKGENENB (*((volatile unsigned int *)0xC000A9000))
#define UARTCLKGEN0L (*((volatile unsigned int *)0xC000A9000))

extern void uart_init(void);
extern void uputchar(char c);
extern char ugetchar(void);
#endif
