#ifndef __GPIO_H__
#define __GPIO_H__


//#include "stm32f10x.h"  
#define PIN_0      ((uint16_t)0x0001)//0000 0000 0000 0001
#define PIN_1      ((uint16_t)0x0002)//0000 0000 0000 0010
#define PIN_2      ((uint16_t)0x0004)
#define PIN_3      ((uint16_t)0x0008)
#define PIN_4      ((uint16_t)0x0010)
#define PIN_5      ((uint16_t)0x0020)
#define PIN_6      ((uint16_t)0x0040)
#define PIN_7      ((uint16_t)0x0080)

#define PIN_8      ((uint16_t)0x0100)
#define PIN_9      ((uint16_t)0x0200)
#define PIN_10      ((uint16_t)0x0400)
#define PIN_11      ((uint16_t)0x0800)
#define PIN_12      ((uint16_t)0x1000)
#define PIN_13      ((uint16_t)0x2000)
#define PIN_14      ((uint16_t)0x4000)
#define PIN_15      ((uint16_t)0x8000)
#define PIN_All      ((uint16_t)0xffff)


void GPIO_setbit(GPIO_Typedef *GPIOx,uint16_t PIN);
void GPIO_restbit(GPIO_Typedef *GPIOX,uint16_t PIN);
void GPIO_Init(GPIO_Typedef* GPIOx, GPIO_InitTypeDef* GPIO_InitStruct);

#endif
