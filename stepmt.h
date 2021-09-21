/* Create By TianSheng on 2021/9/20
 *
 * 步进电机控制
 *
 * [i] You can call me TianSheng.
 * [i] You can use in anywhere.
 * [i] Fuck You.
 * [i] END.............................................................
 */
#ifndef INC_51_STEP_MOTOR_H
#define INC_51_STEP_MOTOR_H

#include "types.h"
#include "timer0.h"
#include <REGX52.H>

sbit MT = P1^0;

/* 初始化电机定时器和速度 */
void stepmt_init();
/* 设置档位 0~5 */
void setgear(uc gear);

#endif /* INC_51_STEP_MOTOR_H */
