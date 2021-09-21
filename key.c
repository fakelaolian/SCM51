/*
 * Create By TianSheng on 2021/9/20
 *
 * [i] You can call me TianSheng.
 * [i] You can use in anywhere.
 * [i] Fuck You.
 */
#include "key.h"

#define __getkey__(n)                     \
        if (__KEY##n == 0) {              \
                delay_time(6);            \
                while (__KEY##n == 0);    \
                delay_time(6);            \
                keynum = n;               \
        }

uc getkey()
{
        uc keynum = 0;

        __getkey__(1)
        __getkey__(2)
        __getkey__(3)
        __getkey__(4)

        return keynum;
}
