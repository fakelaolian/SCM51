/* Create By TianSheng on 2021/9/20
 *
 * ¼üÅÌ¿ØÖÆ
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

/* ÅĞ¶Ï¼üÅÌÊÇ·ñ°´ÏÂ */
#define getkey_press(__key, __execblock)\
if(__key == 1) {\
    delay_time(6);\
    if(__key == 0)\
        __execblock\
}

/* ÅĞ¶Ï¼üÅÌÊÇ·ñÊÍ·Å */
#define getkey_release(__key, __execblock)\
if(__key == 0) {\
    delay_time(6);\
    if(__key == 1)\
        __execblock\
}

#endif /* INC_51_KEY_H */
