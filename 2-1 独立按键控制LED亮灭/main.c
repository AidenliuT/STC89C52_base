﻿#include <REGX52.H>

void main()
{
	while(1)
	{
		if(P3_1==0 || P3_0==0)	//如果K1按键或K2按键按下
		{
			P2_0=0;		//LED1输出0，点亮
		}
		else
		{
			P2_0=1;		//LED1输出1，熄灭
		}

/*
		// 按键控制灯亮灭		
		if(P3_1==0)
		{
			delay_10us(1000);//消抖，按键 "按下" 消抖
			LED1 = 0;
			while(P3_1==0);	//检测到按键按下，则程序一直停在这里，无需不断刷新
			delay_10us(1000);//消抖，按键 "释放" 消抖
			
			//接下来的操作
			LED1 = 1;
		}
		*/
	}
}
