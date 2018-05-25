/**
 * @Author: fjk
 * @Date:   2018-05-24T22:57:03+08:00
 * @Email:  sunnyfjk@mail.com
 * @Filename: led.h
 * @Last modified by:   fjk
 * @Last modified time: 2018-05-25T20:22:50+08:00
 * @License: GPLV3
 */

#ifndef __LED_H__
#define __LED_H__

#define GPIOCOUT (*((volatile unsigned int *)0xC001C000))
#define GPIOBOUT (*((volatile unsigned int *)0xC001B000))
#define GPIOCOUTENB (*((volatile unsigned int *)0xC001C004))
#define GPIOBOUTENB (*((volatile unsigned int *)0xC001B004))

#define GPIOC_PULLENB (*((volatile unsigned int *)0xC001C060))
#define GPIOB_PULLENB (*((volatile unsigned int *)0xC001B060))
#define GPIOC_PULLENB_DISABLE_DEFAULT (*((volatile unsigned int *)0xC001C064))
#define GPIOB_PULLENB_DISABLE_DEFAULT (*((volatile unsigned int *)0xC001B064))

extern void led_init(void);
extern void led_on(int num);
extern void led_off(int num);
#endif
