#include "stm32f10x.h"                  // Device header
#include "gpio.h" 
void delay_ms(int n)//延时函数
{
	int i;
	while (n--)
	{
		for(i=0;i<115;i++);
	}
}



int main()
{
	GPIO_InitTypeDef  GPIO_InitStructure;//创立一个结构体变量
	//打开GPIO端口的时钟
	RCC->APB2ENR |=1<<3;
	GPIO_InitStructure.GPIO_Pin=PIN_0;//设置为PB0为推挽输出速度为50MHz模式
	GPIO_InitStructure.GPIO_Speed=GPIO_Speed_50MHz;
	GPIO_InitStructure.GPIO_Mode=GPIO_Mode_Out_PP;
	GPIO_Init(GPIOB,&GPIO_InitStructure);
	GPIO_restbit(GPIOB,PIN_0);//复位函数使得PB0归零
	
	

//	//清零
//	GPIOB->CRL =0;
//	GPIOB->ODR =0;
//	//配置IO口为输出
//	GPIOB->CRL |=1;
//	//控制ODR寄存器PB0
//	GPIO_setbit(GPIOB,PIN_0);
//	GPIO_restbit(GPIOB,PIN_0);
//	GPIOB->ODR |=(1<<0);
		

//		
//	delay_ms(2000);
//	GPIOB->CRL =0;
//	GPIOB->ODR =0;
//	//配置IO口为输出
//	GPIOB->CRL |=1<<4;
//	//控制ODR寄存器PB1
//	GPIOB->ODR &=~(1<<1);
//	delay_ms(2000);
//	
//	GPIOB->CRL =0;
//	GPIOB->ODR =0;
//	//配置IO口为输出
//	GPIOB->CRL |=1<<20;
//	//控制ODR寄存器PB1
//	GPIOB->ODR &=~(1<<5);
//	delay_ms(2000);

	
			
		
		
		


}




void SystemInit()
{
	
}
