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
#include "timer.h"
#include <REGX52.H>

sbit MT = P1^0;

/* 初始化电机定时器和速度 */
void stepmt_init();
/* 档位自增 0~5 */
void addgear();
/* 设置档位 0~5 */
void setgear(uc gear);
/* 获取当前档位 0~5 */
uc getgear();

#endif /* INC_51_STEP_MOTOR_H */
