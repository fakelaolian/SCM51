/* Create By TianSheng on 2021/9/20
 *
 * [i] You can call me TianSheng.
 * [i] You can use in anywhere.
 * [i] Fuck You.
 * [i] END.............................................................
 */
#include "timer.h"
#include <REGX52.H>

/**
  * @brief  定时器0初始化，100us@12.000MHz
  * @param  无
  * @retval 无
  */
void mt_timer_init(void)
{
        TMOD &= 0xF0;		//设置定时器模式
        TMOD |= 0x01;		//设置定时器模式
        TL0 = 0x9C;		//设置定时初值
        TH0 = 0xFF;		//设置定时初值
        TF0 = 0;		//清除TF0标志
        TR0 = 1;		//定时器0开始计时
        ET0=1;
        EA=1;
        PT0=0;
}

void irc51_timer_init()
{
        IT0 = 1;
        IE0 = 0;
        EX0 = 1;
        EA  = 1;
        PX0 = 1;
}