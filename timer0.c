/* Create By TianSheng on 2021/9/20
 *
 * [i] You can call me TianSheng.
 * [i] You can use in anywhere.
 * [i] Fuck You.
 * [i] END.............................................................
 */
#include "timer0.h"
#include <REGX52.H>

/**
  * @brief  定时器0初始化，100us@12.000MHz
  * @param  无
  * @retval 无
  */
void timer0_init(void)
{
        TMOD &= 0xF0;		//设置定时器模式
        TMOD |= 0x01;		//设置定时器模式
        TL0 = 0;		//设置定时初值
        TH0 = 0;		//设置定时初值
        TF0 = 0;		//清除TF0标志
        TR0 = 0;		//定时器0不计时
}

void timer0_set_counter(u4 value)
{
        TH0 = value / 256;
        TL0 = value % 256;
}

u4 timer0_get_counter()
{
        return (TH0 << 8) | TL0;
}

void timer0_run(uc flag)
{
        TR0 = flag;
}