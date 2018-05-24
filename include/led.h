/**
 * @Author: fjk
 * @Date:   2018-05-24T22:08:45+08:00
 * @Last modified by:   fjk
 * @Last modified time: 2018-05-24T22:29:32+08:00
 */
#ifndef __LED_H__
#define __LED_H__

#define GPIOCOUT (*((volatile unsigned int *)0xC001C000))
#define GPIOBOUT (*((volatile unsigned int *)0xC001B000))
#define GPIOCOUTENB (*((volatile unsigned int *)0xC001C004))
#define GPIOBOUTENB (*((volatile unsigned int *)0xC001C004))

#define GPIOC_PULLENB (*((volatile unsigned int *)0xC001C060))
#define GPIOB_PULLENB (*((volatile unsigned int *)0xC001B060))
#define GPIOC_PULLENB_DISABLE_DEFAULT (*((volatile unsigned int *)0xC001C064))
#define GPIOB_PULLENB_DISABLE_DEFAULT (*((volatile unsigned int *)0xC001B064))

extern void led_init(void);
extern void led_on(int num);
extern void led_off(int num);
#endif
