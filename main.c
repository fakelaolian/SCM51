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
#include "LCD1602.h"

void main()
{
    lcd_init();
    while(1) {
            printfk(1, 0, "Hello %s", "MC51");
    }
}