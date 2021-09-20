/* Create By TianSheng on 2021/9/20
 *
 * [i] You can call me TianSheng.
 * [i] You can use in anywhere.
 * [i] Fuck You.
 * [i] END.............................................................
 */
#include "tool.h"

void delay_time(unsigned int ms)
{
    unsigned char i, j;
    while(ms) {
        i = 2;
        j = 239;
        do {
            while(--j);
        } while(--i);
        --ms;
    }
}