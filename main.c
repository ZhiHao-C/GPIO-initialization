#include "stm32f10x.h"                  // Device header
#include "gpio.h" 
void delay_ms(int n)//��ʱ����
{
	int i;
	while (n--)
	{
		for(i=0;i<115;i++);
	}
}



int main()
{
	GPIO_InitTypeDef  GPIO_InitStructure;
	//��GPIO�˿ڵ�ʱ��
	RCC->APB2ENR |=1<<3;
	GPIO_InitStructure.GPIO_Pin=PIN_0;
	GPIO_InitStructure.GPIO_Speed=GPIO_Speed_50MHz;
	GPIO_InitStructure.GPIO_Mode=GPIO_Mode_Out_PP;
	GPIO_Init(GPIOB,&GPIO_InitStructure);
	GPIO_restbit(GPIOB,PIN_0);
	
	

//	//����
//	GPIOB->CRL =0;
//	GPIOB->ODR =0;
//	//����IO��Ϊ���
//	GPIOB->CRL |=1;
//	//����ODR�Ĵ���PB0
//	GPIO_setbit(GPIOB,PIN_0);
//	GPIO_restbit(GPIOB,PIN_0);
//	GPIOB->ODR |=(1<<0);
		

//		
//	delay_ms(2000);
//	GPIOB->CRL =0;
//	GPIOB->ODR =0;
//	//����IO��Ϊ���
//	GPIOB->CRL |=1<<4;
//	//����ODR�Ĵ���PB1
//	GPIOB->ODR &=~(1<<1);
//	delay_ms(2000);
//	
//	GPIOB->CRL =0;
//	GPIOB->ODR =0;
//	//����IO��Ϊ���
//	GPIOB->CRL |=1<<20;
//	//����ODR�Ĵ���PB1
//	GPIOB->ODR &=~(1<<5);
//	delay_ms(2000);

	
			
		
		
		


}




void SystemInit()
{
	
}
