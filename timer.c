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
  * @brief  ��ʱ��0��ʼ����100us@12.000MHz
  * @param  ��
  * @retval ��
  */
void mt_timer_init(void)
{
        TMOD &= 0xF0;		//���ö�ʱ��ģʽ
        TMOD |= 0x01;		//���ö�ʱ��ģʽ
        TL0 = 0x9C;		//���ö�ʱ��ֵ
        TH0 = 0xFF;		//���ö�ʱ��ֵ
        TF0 = 0;		//���TF0��־
        TR0 = 1;		//��ʱ��0��ʼ��ʱ
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