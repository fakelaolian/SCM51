/* Create By TianSheng on 2021/9/20
 *
 * [i] You can call me TianSheng.
 * [i] You can use in anywhere.
 * [i] Fuck You.
 * [i] END.............................................................
 */
#include "stepmt.h"

static uc counter, compv;

void stepmt_init()
{
        timer0_init();
        compv = 0;
}

void setgear(uc gear)
{
        switch (gear) {
                case 0: compv = 0; break;
                case 1: compv = 24; break;
                case 2: compv = 40; break;
                case 3: compv = 60; break;
                case 4: compv = 80; break;
                case 5: compv = 100; break;
        }
}

void timer0_routine() interrupt 1
{
        TL0 = 0x9C;     /* ���ö�ʱ��ʼֵ */
        TH0 = 0xFF;     /* ���ö�ʱ��ʼֵ */

        counter++;
        counter %= 100; /* �������Ϊ if(counter == 100) counter = 0  */

        if (counter < compv)
                MT = 1;
        else
                MT = 0;
}
