#include <REGX52.H>

typedef unsigned char u8;
void Delay1ms(unsigned int xms);		//@12.000MHz
#define LED_PORT	P2	//ʹ�ú궨��P2�˿�

void main()
{
	while(1)
	{
		// ����1��ʹ����λ+ѭ��ʵ����ˮ��
		u8 i=0;
		for(i=0;i<8;i++)
		{
			LED_PORT=~(0x01<<i);	//��1����iλ��Ȼ��ȡ���������ֵ��LED_PORT
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
