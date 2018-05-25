/**
 * @Author: fjk
 * @Date:   2018-05-24T22:57:03+08:00
 * @Email:  sunnyfjk@mail.com
 * @Filename: key.h
 * @Last modified by:   fjk
 * @Last modified time: 2018-05-25T20:31:22+08:00
 * @License: GPLV3
 */

#ifndef __KEY_H__
#define __KEY_H__

/*
1 a28
2 b30
3 b31
4 b9
*/
#define GPIOBPAD (*((volatile unsigned int *)0xC001B018))
#define GPIOBOUTENB (*((volatile unsigned int *)0xC001B004))
#define GPIOB_PULLENB (*((volatile unsigned int *)0xC001B060))
#define GPIOB_PULLENB_DISABLE_DEFAULT (*((volatile unsigned int *)0xC001B064))

#define GPIOAPAD (*((volatile unsigned int *)0xC001A018))
#define GPIOAOUTENB (*((volatile unsigned int *)0xC001A004))
#define GPIOA_PULLENB (*((volatile unsigned int *)0xC001A060))
#define GPIOA_PULLENB_DISABLE_DEFAULT (*((volatile unsigned int *)0xC001A064))

extern void key_init(void);
extern int key_ops(void);
#endif
