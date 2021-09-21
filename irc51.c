/* Create By TianSheng on 2021/9/20
 *
 * [i] You can call me TianSheng.
 * [i] You can use in anywhere.
 * [i] Fuck You.
 * [i] END.............................................................
 */
#include "irc51.h"

u4 irc51_time;
uc irc51_state;

uc irc51_data[4];
uc irc51_pdata;

uc irc51_data_flag;
uc irc51_repeat_flag;
uc irc51_addr;
uc irc51_command;

#define __S_500(n) ( n - 500)
#define __P_500(n) ( n + 500)

void irc51_init()
{
        timer0_init();
        int0_init();
        irc51_state = 0;
        irc51_addr = 0;
        irc51_command = 0;
        irc51_time = 0;
}

uc irc51_get_data_flag()
{
        if (irc51_data_flag) {
                irc51_data_flag = 0;
                return 1;
        }

        return 0;
}

uc irc51_get_repeat_flag()
{
        if (irc51_repeat_flag) {
                irc51_repeat_flag = 0;
                return 1;
        }

        return 0;
}

uc irc51_get_addr()
{
        return irc51_addr;
}

uc irc51_get_command()
{
        return irc51_command;
}

void irc51_int0_routine() interrupt 0
{
        printfk(2, 0, "s %u, t %u", (u4) irc51_state, irc51_time);
        switch (irc51_state) {
                case 0: {
                        timer0_set_counter(0);
                        timer0_run(1);
                        irc51_state = 1;
                        break;
                }
                case 1: {
                        irc51_time = timer0_get_counter();
                        timer0_set_counter(0);
                        // 低电平9ms，高电平4.5ms
                        if (irc51_time > 13500 - 500 && irc51_time < 13500 + 500) {
                                irc51_state = 2;
                        } else if (irc51_time > 11250 - 500 && irc51_time < 11250 + 500) {
                                irc51_repeat_flag = 1;
                                timer0_run(0);
                                irc51_state = 0;
                        } else {
                                irc51_state = 1;
                        }
                        break;
                }
                case 2: {
                        irc51_time = timer0_get_counter();
                        timer0_set_counter(0);
                        if (irc51_time > 1120 - 500 && irc51_time < 1120 + 500) {
                                irc51_data[irc51_pdata / 8] &= ~(0x01 << irc51_pdata % 8);
                                irc51_pdata++;
                        } else if (irc51_time > 2250 - 500 && irc51_time < 2250 + 500) {
                                irc51_data[irc51_pdata / 8] |= (0x01 << irc51_pdata % 8);
                                irc51_pdata++;
                        } else {
                                irc51_pdata = 0;
                                irc51_state = 1;
                        }

                        if (irc51_pdata >= 32) {
                                irc51_pdata = 0;
                                if ((irc51_data[0] == ~irc51_data[1]) && (irc51_data[2] == ~irc51_data[3])) {
                                        irc51_addr = irc51_data[0];
                                        irc51_command = irc51_data[2];
                                        irc51_data_flag = 1;
                                }
                                timer0_run(0);
                                irc51_state = 0;
                        }
                        break;
                }
        }
}
