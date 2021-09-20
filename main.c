/* Create By TianSheng on 2021/9/20
 *
 * [i] You can call me TianSheng.
 * [i] You can use in anywhere.
 * [i] Fuck You.
 * [i] END.............................................................
 */
#include "key.h"
#include "led.h"
#include "nixie-tube.h"

void main()
{
    while(1) {
        nixie_tube(2,2);
        nixie_tube(3,5);
        nixie_tube(4,10);
    }
}