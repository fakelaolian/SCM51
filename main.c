/* Create By TianSheng on 2021/9/20
 *
 * [i] You can call me TianSheng.
 * [i] You can use in anywhere.
 * [i] Fuck You.
 * [i] END.............................................................
 */
#include "key.h"
#include "ds18b20.h"
#include "irc51.h"

u4 addr, comm;

void main()
{
        lcd_init();
        irc51_init();
        while (1) {
                if (irc51_get_data_flag()) {
                        addr = irc51_get_addr();
                        comm = irc51_get_command();
                        printfk(1, 0, "a:%d, c:%d", addr, comm);
                }
        }
}