/* Create By TianSheng on 2021/9/20
 *
 * ����ң��
 *
 * [i] You can call me TianSheng.
 * [i] You can use in anywhere.
 * [i] Fuck You.
 * [i] END.............................................................
 */
#ifndef INC_51_IRC51_H
#define INC_51_IRC51_H

#include "tool.h"
#include "types.h"
#include "timer0.h"
#include "int0.h"
#include "LCD1602.h"

/* ��ʼ���ж� */
void irc51_init();
uc irc51_get_data_flag();
uc irc51_get_repeat_flag();
uc irc51_get_addr();
uc irc51_get_command();

#endif /* INC_51_IRC51_H */
