/**
 * @Author: fjk
 * @Date:   2018-05-24T22:35:12+08:00
 * @Last modified by:   fjk
 * @Last modified time: 2018-05-24T22:46:01+08:00
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
#define GPIOBOUTENB (*((volatile unsigned int *)0xC001C004))
#define GPIOB_PULLENB (*((volatile unsigned int *)0xC001B060))
#define GPIOB_PULLENB_DISABLE_DEFAULT (*((volatile unsigned int *)0xC001B064))

#define GPIOAPAD (*((volatile unsigned int *)0xC001A018))
#define GPIOAOUTENB (*((volatile unsigned int *)0xC001A004))
#define GPIOA_PULLENB (*((volatile unsigned int *)0xC001A060))
#define GPIOA_PULLENB_DISABLE_DEFAULT (*((volatile unsigned int *)0xC001A064))

extern void key_init(void);
extern int key_ops(void);
#endif
