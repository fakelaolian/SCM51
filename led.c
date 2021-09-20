/* Create By TianSheng on 2021/9/20
 *
 * [i] You can call me TianSheng.
 * [i] You can use in anywhere.
 * [i] Fuck You.
 * [i] END.............................................................
 */
#include "led.h"

#define delay_speed() delay_time(500)

/* µ„¡¡LED */
void led_on(uc ledseq)
{
        switch(ledseq) {
                case 0: __led0 = 0; break;
                case 1: __led1 = 0; break;
                case 2: __led2 = 0; break;
                case 3: __led3 = 0; break;
                case 4: __led4 = 0; break;
                case 5: __led5 = 0; break;
                case 6: __led6 = 0; break;
                case 7: __led7 = 0; break;
        }
}

/* œ®√LED */
void led_off(uc ledseq)
{
        switch(ledseq) {
                case 0: __led0 = 1; break;
                case 1: __led1 = 1; break;
                case 2: __led2 = 1; break;
                case 3: __led3 = 1; break;
                case 4: __led4 = 1; break;
                case 5: __led5 = 1; break;
                case 6: __led6 = 1; break;
                case 7: __led7 = 1; break;
        }
}

void led_flash()
{
        __led = 0xFE;
        delay_speed();
        __led = 0xFF;
        delay_speed();
}

void led_water_lamp()
{
        uc i;
        for (i = 0; i < 8; i++) {
                led_on(i);
                delay_time(500);
                led_off(i);
        }
        led_off_all();
        delay_time(500);
}