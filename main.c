/* Create By TianSheng on 2021/9/20
 *
 * [i] You can call me TianSheng.
 * [i] You can use in anywhere.
 * [i] Fuck You.
 * [i] END.............................................................
 */
#include "key.h"
#include "led.h"

void main()
{
    bool on1 = false;
    bool on2 = false;
    bool on3 = false;
    bool on4 = false;
	while (1) {
        getkey_release(__KEY1, { on1 ? (on1 = false) : (on1 = true); })
        getkey_release(__KEY2, { on2 ? (on2 = false) : (on2 = true); })
        getkey_release(__KEY3, { on3 ? (on3 = false) : (on3 = true); })
        getkey_release(__KEY4, { on4 ? (on4 = false) : (on4 = true); })

        on1 ? (led_on(0)) : (led_off(0));
        on2 ? (led_on(1)) : (led_off(1));
        on3 ? (led_on(2)) : (led_off(2));
        on4 ? (led_on(3)) : (led_off(3));
    }
}