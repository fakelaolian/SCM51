/* Create By TianSheng on 2021/9/20
 *
 * �����������
 *
 * [i] You can call me TianSheng.
 * [i] You can use in anywhere.
 * [i] Fuck You.
 * [i] END.............................................................
 */
#ifndef INC_51_STEP_MOTOR_H
#define INC_51_STEP_MOTOR_H

#include "types.h"
#include "timer.h"
#include <REGX52.H>

sbit MT = P1^0;

/* ��ʼ�������ʱ�����ٶ� */
void stepmt_init();
/* ��λ���� 0~5 */
void addgear();
/* ���õ�λ 0~5 */
void setgear(uc gear);
/* ��ȡ��ǰ��λ 0~5 */
uc getgear();

#endif /* INC_51_STEP_MOTOR_H */
