/* Create By TianSheng on 2021/9/20
 *
 * 键盘控制
 *
 * [i] You can call me TianSheng.
 * [i] You can use in anywhere.
 * [i] Fuck You.
 * [i] END.............................................................
 */
#ifndef INC_51_KEY_H
#define INC_51_KEY_H

#include <tool.h>
#include <types.h>
#include <REGX52.H>

#define __KEY1  P3_1
#define __KEY2  P3_0
#define __KEY3  P3_2
#define __KEY4  P3_3

/* 判断键盘是否按下 */
uc getkey();

#endif /* INC_51_KEY_H */
