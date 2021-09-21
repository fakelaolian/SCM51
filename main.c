/* Create By TianSheng on 2021/9/20
 *
 * [i] You can call me TianSheng.
 * [i] You can use in anywhere.
 * [i] Fuck You.
 * [i] END.............................................................
 */
#include "key.h"
#include "led.h"
#include "nixie-tube.h"
#include "ds18b20.h"
#include "stepmt.h"

void main()
{
        uc speed;
        speed = 0;
        stepmt_init();
        while (1) {
                if(getkey() == 1) {
                        ++speed;
                        speed %= 6;
                        if(speed == 0) setgear(0);
                        if(speed == 1) setgear(1);
                        if(speed == 2) setgear(2);
                        if(speed == 3) setgear(3);
                        if(speed == 4) setgear(4);
                        if(speed == 5) setgear(5);
                }
                nixie_tube(0, speed);
        }
}