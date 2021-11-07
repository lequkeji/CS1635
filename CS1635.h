/**********************
 * 文 件 名  ： CS1635.H
 * 作    者  ： Zhaoxun
 * 创作时间  ： 2021.08.26
 * 功能描述  ： AT1635
 * 说    明  ： 驱动户户通数码管
 * 所用变量  ： 无
 * 用于学习，禁止商用。
**********************/
#ifndef __CS1635_H__
#define __CS1635_H__
//引脚定义
sbit CLK=P1^1;  //时钟
sbit DIO=P1^0;  //数据
//函数
void Start(void);
void Stop(void);
void Writebyte(unsigned char Byte);
void disp0(unsigned char p);
void disp(unsigned char add,value,K);
unsigned char read_key();


#endif
