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
        TL0 = 0x9C;		//���ö�ʱ��ֵ
        TH0 = 0xFF;		//���ö�ʱ��ֵ
        TF0 = 0;		//���TF0��־
        TR0 = 1;		//��ʱ��0��ʼ��ʱ
        ET0=1;
        EA=1;
        PT0=0;
}

/*��ʱ���жϺ���ģ��
void timer0_routine() interrupt 1
{
	static unsigned int T0Count;
	TL0 = 0x9C;		//���ö�ʱ��ֵ
	TH0 = 0xFF;		//���ö�ʱ��ֵ
	T0Count++;
	if(T0Count>=1000)
	{
		T0Count=0;

	}
}
*/