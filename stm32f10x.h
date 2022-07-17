#ifndef __STM32F10X_H__
#define __STM32F10X_H__


#define PERIPH_BASE           ((unsigned int)0x40000000)
#define APB1_BASE             (PERIPH_BASE)
#define APB2_BASE             (PERIPH_BASE+0x10000)
#define AHB_BASE              (PERIPH_BASE+0x20000)

#define RCC_BASE              (AHB_BASE+0x1000)
#define GPIOB_BASE            (APB2_BASE+0x0C00)

#define RCC_APB2EN            *(unsigned int *)(RCC_BASE+0X18)
	
//#define GPIOB_CRL             *(unsigned int *)(GPIOB_BASE+0x00)
//#define GPIOB_CRH             *(unsigned int *)(GPIOB_BASE+0x04)
//#define GPIOB_ODR             *(unsigned int *)(GPIOB_BASE+0x0C)
//#define GPIOB_IDR             *(unsigned int *)(GPIOB_BASE+0x08)
//#define GPIOB_BSRR            *(unsigned int *)(GPIOB_BASE+0x10)
//#define GPIOB_BRR             *(unsigned int *)(GPIOB_BASE+0x14)
//#define GPIOB_LCKR            *(unsigned int *)(GPIOB_BASE+0x18)
	

typedef unsigned int      uint32_t;
typedef unsigned short    uint16_t;
	

typedef struct
{
	uint32_t CRL;           
	uint32_t CRH;             
	uint32_t IDR;        
	uint32_t ODR;             
	uint32_t BSRR;            
	uint32_t BRR;             
	uint32_t LCKR;  
}GPIO_Typedef;

typedef struct
{
	uint32_t CR;           
	uint32_t CFGR;             
	uint32_t CIR;        
	uint32_t APB2RSTR;             
	uint32_t APB1RSTR;            
	uint32_t AHBENR;             
	uint32_t APB2ENR;  
	uint32_t APB1ENR; 
	uint32_t BDCR;
	uint32_t CSR; 	
}RCC_Typedef;

typedef struct
{
	uint16_t GPIO_Pin;
	uint16_t GPIO_Speed;
	uint16_t GPIO_Mode;
}GPIO_InitTypeDef;


typedef enum
{
	GPIO_Speed_10MHz = 1,        // 10MHZ (01)b
	GPIO_Speed_2MHz,             // 2MHZ (10)b
	GPIO_Speed_50MHz             // 50MHZ (11)b
} GPIOSpeed_TypeDef;

 typedef enum
 {
	 GPIO_Mode_AIN = 0x0,            //模拟输入  (0000 0000)b
	 GPIO_Mode_IN_FLOATING = 0x04,   //浮空输入  (0000 0100)b
	 GPIO_Mode_IPD = 0x28,           //下拉输入  (0010 1000)b
	 GPIO_Mode_IPU = 0x48,           //上拉输入  (0100 1000)b
	 
	 GPIO_Mode_Out_OD = 0x14,        //开漏输出  (0001 0100)b
	 GPIO_Mode_Out_PP = 0x10,        //推挽输出  (0001 0000)b
	 GPIO_Mode_AF_OD = 0x1C,         //复用开漏输出  (0001 1100)b
	 GPIO_Mode_AF_PP = 0x18          //复用推挽输出  (0001 1000)b
 } GPIOMode_TypeDef;








#define GPIOB  ((GPIO_Typedef*)GPIOB_BASE)
#define RCC    ((RCC_Typedef*)RCC_BASE)


#endif

