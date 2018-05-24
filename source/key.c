/**
 * @Author: fjk
 * @Date:   2018-05-24T22:35:18+08:00
 * @Last modified by:   fjk
 * @Last modified time: 2018-05-24T22:54:04+08:00
 */
#include <common.h>
#include <key.h>
/*
1 a28
2 b30
3 b31
4 b9
*/
void key_init(void) {

  GPIOBOUTENB &= ~((1 << 30) | (1 << 31) | (1 << 9));
  GPIOAOUTENB &= ~(1 << 28);

  GPIOB_PULLENB_DISABLE_DEFAULT |= ((1 << 30) | (1 << 31) | (1 << 9));
  GPIOA_PULLENB_DISABLE_DEFAULT |= (1 << 28);

  GPIOB_PULLENB &= ~((1 << 30) | (1 << 31) | (1 << 9));
  GPIOA_PULLENB &= ~(1 << 28);
}
int key_ops(void) {
  int ret = 0;
  if (GPIOBPAD & (1 << 30))
    ret |= 1 << 1;

  if (GPIOBPAD & (1 << 31))
    ret |= 1 << 2;

  if (GPIOBPAD & (1 << 9))
    ret |= 1 << 3;

  if (GPIOAPAD & (1 << 28))
    ret |= 1 << 0;

  return ret;
}
