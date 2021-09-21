/* Create By TianSheng on 2021/9/20
 *
 * [i] You can call me TianSheng.
 * [i] You can use in anywhere.
 * [i] Fuck You.
 * [i] END.............................................................
 */
#include "ds18b20.h"

float temp;

void main()
{
        lcd_init();
        ds18b20_init();
        printfk(1, 0, "TEMP: ");
        while (1) {
                print_t(2);
        }
}
