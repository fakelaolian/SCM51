/* Create By TianSheng on 2021/9/20
 *
 * [i] You can call me TianSheng.
 * [i] You can use in anywhere.
 * [i] Fuck You.
 * [i] END.............................................................
 */
#ifndef INC_51_TIMER_H
#define INC_51_TIMER_H

#include "types.h"

void timer0_init();
void timer0_set_counter(u4 value);
u4 timer0_get_counter();
void timer0_run(uc flag);

#endif /* INC_51_TIMER_H */
