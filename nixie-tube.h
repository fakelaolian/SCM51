/* Create By TianSheng on 2021/9/20
 *
 * LED数码管
 *
 * [i] You can call me TianSheng.
 * [i] You can use in anywhere.
 * [i] Fuck You.
 * [i] END.............................................................
 */
#ifndef INC_51_LED_DIGITAL_TUBE_H
#define INC_51_LED_DIGITAL_TUBE_H

#include "tool.h"
#include "types.h"

/* 在数码管上显示数字。pos是数码管的位置。
 * n是需要在数码管上显示的数字，不过只能显示单个数字。*/
void nixie_tube(uc pos, uc n);
/* 在动态数码管上显示数字 */
void xnprintk(u8 n);

#endif /* INC_51_LED_DIGITAL_TUBE_H */
