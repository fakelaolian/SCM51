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
  * @brief  ��ʱ��0��ʼ����100us@12.000MHz
  * @param  ��
  * @retval ��
  */
void timer0_init(void)
{
        TMOD &= 0xF0;		//���ö�ʱ��ģʽ
        TMOD |= 0x01;		//���ö�ʱ��ģʽ
        TL0 = 0;		//���ö�ʱ��ֵ
        TH0 = 0;		//���ö�ʱ��ֵ
        TF0 = 0;		//���TF0��־
        TR0 = 0;		//��ʱ��0����ʱ
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