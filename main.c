/**
 * @Author: fjk
 * @Date:   2018-05-24T22:57:03+08:00
 * @Email:  sunnyfjk@mail.com
 * @Filename: main.c
 * @Last modified by:   fjk
 * @Last modified time: 2018-05-25T20:33:58+08:00
 * @License: GPLV3
 */

#include <common.h>
#include <hardware.h>
#include <key.h>

int main(void) {
  int i = 0;
  hardware_init();
  hardware_ops();
  led_init();
  key_init();
  while (1) {
    i = 0;
    i = key_ops();
    printf("key0=%d,key1=%d,key2=%d,key3=%d\n", ((i >> 0) & 1), ((i >> 1) & 1),
           ((i >> 2) & 1), ((i >> 3) & 1));
  }
  return 0;
}
