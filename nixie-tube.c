/* Create By TianSheng on 2021/9/20
 *
 * [i] You can call me TianSheng.
 * [i] You can use in anywhere.
 * [i] Fuck You.
 * [i] END.............................................................
 */
#include <stdio.h>
#include <REGX52.H>
#include "nixie-tube.h"

uc nixie_table[] = {
        // 0 - 9
        0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x07, 0x7F, 0x6F,
        // A-Z, 0x0
        0x77, 0x7C, 0x39, 0x5E, 0x79, 0x71, 0x00,
};

#define SET_P432(p2, p3, p4) P2_4 = p2; P2_3 = p3; P2_2 = p4

void nixie_tube(uc pos, uc n)
{
        switch (pos) {
                case 0: SET_P432(1, 1, 1); break;
                case 1: SET_P432(1, 1, 0); break;
                case 2: SET_P432(1, 0, 1); break;
                case 3: SET_P432(1, 0, 0); break;
                case 4: SET_P432(0, 1, 1); break;
                case 5: SET_P432(0, 1, 0); break;
                case 6: SET_P432(0, 0, 1); break;
                case 7: SET_P432(0, 0, 0); break;
        }
        P0 = nixie_table[n];
        delay_time(1);
        P0 = 0x0;
}

void xnprintk(u8 n)
{

}