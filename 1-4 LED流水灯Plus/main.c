#include <REGX52.H>

typedef unsigned char u8;
void Delay1ms(unsigned int xms);		//@12.000MHz
#define LED_PORT	P2	//使用宏定义P2端口

void main()
{
	while(1)
	{
		// 方法1：使用移位+循环实现流水灯
		u8 i=0;
		for(i=0;i<8;i++)
		{
			LED_PORT=~(0x01<<i);	//将1左移i位，然后取反将结果赋值到LED_PORT
			Delay_1ms(500);
		}	
	}
}

void Delay1ms(unsigned int xms)		//@12.000MHz
{
	unsigned char i, j;
	while(xms)
	{
		i = 2;
		j = 239;
		do
		{
			while (--j);
		} while (--i);
		xms--;
	}
}
