/* Modify By TianSheng on 2021/9/20
 *
 * [i] You can call me TianSheng.
 * [i] You can use in anywhere.
 * [i] Fuck You.
 * [i] END.............................................................
 */
#ifndef __LCD1602_H__
#define __LCD1602_H__

#include "types.h"
#include <stdio.h>

/* 初始化lcd */
void lcd_init();
/* 显示单个字符 */
void lcd_putc(unsigned char Line,unsigned char Column,char Char);
/* 显示字符串 */
void lcd_puts(unsigned char Line,unsigned char Column,char *String);
/* 显示10进制的数字 */
void lcd_putn(unsigned char Line,unsigned char Column,unsigned int Number,unsigned char Length);
/* 显示有符号16进制的数字 */
void lcd_putsn(unsigned char Line,unsigned char Column,int Number,unsigned char Length);
/* 显示有16进制的数字 */
void lcd_puth(unsigned char Line,unsigned char Column,unsigned int Number,unsigned char Length);
/* 显示有2进制的数字 */
void lcd_putb(unsigned char Line,unsigned char Column,unsigned int Number,unsigned char Length);

/* 格式化输出 */
void printfk(uc line, uc col, char *fmt, ...);

#endif
