/**
 * @Author: fjk
 * @Date:   2018-05-24T21:31:13+08:00
 * @Last modified by:   fjk
 * @Last modified time: 2018-05-24T22:40:01+08:00
 */
#include <common.h>
#include <hardware.h>

int main(void) {
  hardware_init();
  hardware_ops();
  led_init();
  led_on(1);
  led_off(1);
  key_init();
  key_ops();
  return 0;
}
