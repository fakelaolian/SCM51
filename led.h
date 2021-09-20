/* Create By TianSheng on 2021/9/20
 *
 * LED灯控制
 *
 * [i] You can call me TianSheng.
 * [i] You can use in anywhere.
 * [i] Fuck You.
 * [i] END.............................................................
 */
#ifndef INC_51_LED_H
#define INC_51_LED_H

#include "tool.h"
#include "types.h"

/*
 * 十六进制和二进制对照表
 * 0        0000
 * 1        0001
 * 2        0010
 * 3        0011
 * 4        0100
 * 5        0101
 * 6        0110
 * 7        0111
 * 8        1000
 * 9        1001
 * A        1010
 * B        1011
 * C        1100
 * D        1101
 * E        1110
 * F        1111
 */
#include <REGX52.H>
#include <types.h>

/* led */
#define __led    P2
#define __led0 P2_0
#define __led1 P2_1
#define __led2 P2_2
#define __led3 P2_3
#define __led4 P2_4
#define __led5 P2_5
#define __led6 P2_6
#define __led7 P2_7

/* 点亮LED */
void led_on(uc ledseq);
/* 熄灭LED */
void led_off(uc ledseq);
/* 熄灭所有LED */
#define led_off_all() __led = 0xFF
/* led闪烁 */
void led_flash();
/* led流水灯 */
void led_water_lamp();

#endif //INC_51_LED_H
