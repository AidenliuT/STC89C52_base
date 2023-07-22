#include <REGX52.H>

sbit BEEP=P2^5;	//将P2.5管脚定义为BEEP

void delay_10us(unsigned int ten_us)
{
	while(ten_us--);	
}

void main()
{
	
	while(1)
	{
		
		// 蜂鸣器脉冲信号
		u16 i=2000;
		while(i--)//循环2000次
		{
			
			//方法1、产生一定频率的脉冲信号
			BEEP=!BEEP;
			delay_10us(100);	
		
			/*
			//方法2、改变频率
			BEEP=1;
			delay_10us(190);
			BEEP=0;
			delay_10us(10);
			*/
		}
		i=0;//清零
		BEEP=0;//关闭蜂鸣器
		
	}//while(1)----END
}