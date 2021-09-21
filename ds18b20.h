/* Create By TianSheng on 2021/9/20
 *
 * 温度传感器
 *
 * [i] You can call me TianSheng.
 * [i] You can use in anywhere.
 * [i] Fuck You.
 * [i] END.............................................................
 */
#ifndef INC_51_DS18B20_H
#define INC_51_DS18B20_H

#include "types.h"
#include "tool.h"
#include "LCD1602.h"
#include <REGX52.H>

#define DS18B20_SKIP_ROM 0xCC
#define DS18B20_CONVERT_T 0x44
#define DS18B20_READ_SCRATCHPAD 0xBE

/* 初始化总线 */
uc ds19b20_bus_init();
void ds18b20_write_bit(uc __bit);
uc ds18b20_read_bit();
void ds18b20_write_byte(uc __byte);
uc ds18b20_read_byte();

void ds18b20_convert_t();
float ds18b20_read_t();

/* 第一次初始化 */
#define ds18b20_init()                  \
        ds18b20_convert_t();            \
        delay_time(1000)

/* 将温度打印到lcd显示屏 */
#define print_t(line)                            \
        ds18b20_convert_t();                     \
        temp = ds18b20_read_t();                 \
                                                 \
        if (temp < 0)                            \
                lcd_putc(line, 3, '-');          \
        else                                     \
                lcd_putc(line, 3, '+');          \
                                                 \
        lcd_putn(line, 4, temp, 2);              \
        lcd_putc(line, 6, '.');                  \
        lcd_putn(line, 7, (unsigned long) (temp * 10000) % 10000, 4)

#endif /* INC_51_DS18B20_H */
