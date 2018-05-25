/**
 * @Author: fjk
 * @Date:   2018-05-24T22:57:03+08:00
 * @Email:  sunnyfjk@mail.com
 * @Filename: led.c
 * @Last modified by:   fjk
 * @Last modified time: 2018-05-25T19:26:18+08:00
 * @License: GPLV3
 */

#include <common.h>
#include <led.h>
/*
c 7 11 12
b 26
*/
void led_init(void) {

  GPIOCOUTENB |= ((1 << 7) | (1 << 11) | (1 << 12));
  GPIOBOUTENB |= (1 << 26);

  GPIOCOUT |= ((1 << 7) | (1 << 11) | (1 << 12));
  GPIOBOUT |= (1 << 26);

  GPIOC_PULLENB_DISABLE_DEFAULT |= ((1 << 7) | (1 << 11) | (1 << 12));
  GPIOB_PULLENB_DISABLE_DEFAULT |= (1 << 26);

  GPIOC_PULLENB &= ~((1 << 7) | (1 << 11) | (1 << 12));
  GPIOB_PULLENB &= ~(1 << 26);
}
void led_on(int num) {

  switch (num) {
  case 0:
    GPIOCOUT &= ~(1 << 12);
    break;
  case 1:
    GPIOCOUT &= ~(1 << 7);
    break;
  case 2:
    GPIOCOUT &= ~(1 << 11);
    break;
  case 3:
    GPIOBOUT &= ~(1 << 26);
    break;
  }
}
void led_off(int num) {

  switch (num) {
  case 0:
    GPIOCOUT |= (1 << 12);
    break;
  case 1:
    GPIOCOUT |= (1 << 7);
    break;
  case 2:
    GPIOCOUT |= (1 << 11);
    break;
  case 3:
    GPIOBOUT |= (1 << 26);
    break;
  }
}
