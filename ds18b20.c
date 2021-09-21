/* Create By TianSheng on 2021/9/20
 *
 * 写的这代码，我tm也看不懂。
 *
 * [i] You can call me TianSheng.
 * [i] You can use in anywhere.
 * [i] Fuck You.
 * [i] END.............................................................
 */
#include "ds18b20.h"

/* 使用IO端口 */
sbit ds18b20_bus = P3^7;

#define delayus(__n) i = __n; while(--i)

uc ds19b20_bus_init()
{
        uc i;
        uc ack_bit; /* 应答位 */

        ds18b20_bus = 1;
        ds18b20_bus = 0;
        delayus(247);           /* 延迟500us */

        ds18b20_bus = 1;
        delayus(32);            /* 延迟70us */

        ack_bit = ds18b20_bus;
        delayus(247);           /* 延迟500us */

        return ack_bit;
}

void ds18b20_write_bit(uc __bit)
{
        uc i;
        ds18b20_bus = 0;
        delayus(4);             /* 延迟10us */
        ds18b20_bus = __bit;
        delayus(24);            /* 延迟50us */
        ds18b20_bus = 1;
}

uc ds18b20_read_bit()
{
        uc i;
        uc __bit;
        ds18b20_bus = 0;
        delayus(2);
        ds18b20_bus = 1;
        delayus(2);
        __bit = ds18b20_bus;
        delayus(24);            /* 延迟50us */

        return __bit;
}

void ds18b20_write_byte(uc __byte)
{
        uc i;
        for (i = 0; i < 8; i++)
                ds18b20_write_bit(__byte&(0x01 << i));
}

uc ds18b20_read_byte()
{
        uc i;
        uc __byte = 0x00;
        for (i = 0; i < 8; i++)
                if(ds18b20_read_bit())
                        __byte |= (0x01 << i);

        return __byte;
}

void ds18b20_convert_t()
{
        ds19b20_bus_init();
        ds18b20_write_byte(DS18B20_SKIP_ROM);
        ds18b20_write_byte(DS18B20_CONVERT_T);
}

float ds18b20_read_t()
{
        uc TLSB, TMSB;
        int temp;
        float ret;

        ds19b20_bus_init();
        ds18b20_write_byte(DS18B20_SKIP_ROM);
        ds18b20_write_byte(DS18B20_READ_SCRATCHPAD);

        TLSB = ds18b20_read_byte();
        TMSB = ds18b20_read_byte();

        temp = (TMSB << 8) | TLSB;
        ret = temp / 4.0;

        return ret;
}