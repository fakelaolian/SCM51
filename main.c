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
#include "irc51.h"

void main()
{
        stepmt_init();
        irc51_init();
        while (1) {
                if(getkey() == 1)
                        addgear();

                nixie_tube(0, getgear());
        }
}