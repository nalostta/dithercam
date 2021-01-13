#ifndef __INCLUDED_RCC_H__
#define __INCLUDED_RCC_H__

#include <stdint.h>
#include "defs.h"
#include "APBMemoryMap.h"

typedef
{
	__IO uint32_t CR;
	__IO uint32_t CFGR;
	__IO uint32_t CIR;
	__IO uint32_t APB2RSTR;
	__IO uint32_t APB1RSTR;
	__IO uint32_t AHBENR;
	__IO uint32_t APB2ENR;
	__IO uint32_t APB1ENR;
	__IO uint32_t BDCR;
	__IO uint32_t CSR;
}_RCC;

#define rcc ((_RCC*)RCC)

//bit defines

#define PLL_RDY 	25
#define PLL_ON  	24
#define CSS_ON  	19
#define HSEBYP  	18
#define HSERDY  	17
#define HSEON   	16
#define HSICAL7 	15
#define HSICAL6 	14
#define HSICAL5 	13
#define HSICAL4 	12
#define HSICAL3 	11
#define HSICAL2 	10
#define HSICAL1 	9
#define HSICAL0 	8
#define HSITRM4 	7 
#define HSITRM3 	6
#define HSITRM2 	5
#define HSITRM1 	4
#define HSITRM0 	3
#define HSIRDY  	1
#define HSION   	0

#define MCO2 		26
#define MCO1 		25
#define MCO0 		24
#define USBPRE 		22
#define PLLMUL 		21
#define PLLMUL 		20
#define PLLMUL 		19
#define PLLMUL 		18
#define PLLXTPRE	17
#define PLLSRC 		16
#define ADC_PRE1 	15
#define ADC_PRE0 	14
#define PPRE2_2 	13
#define PPRE2_1 	12
#define PPRE2_0 	11
#define PPRE1_2 	10
#define PPRE1_1 	9
#define PPRE1_0 	8
#define HPRE3 		7
#define HPRE2		6
#define HPRE1		5
#define HPRE0		4
#define SWS1		3
#define SWS0		2
#define SW1			1
#define SW0			0

#define CSSC		23
#define PLLRDYC		20
#define HSERDYC		19
#define HSIRDYC		18
#define LSERDYC		17
#define LSIRDYC		16
#define PLLRDYIE	12
#define HSERDYIE	11
#define HSIRDYIE	10
#define LSERDYIE	9
#define LSIRDYIE	8
#define CSSF		7
#define PLLRDYF		4
#define HSERDYF		3
#define HSIRDYF		2
#define LSERDYF		1
#define LSIRDYF		0

#define TIM11RST	21
#define TIM10RST	20
#define TIM9RST		19
#define ADC3RST		15
#define USART1RST	14	
#define TIM8RST		13
#define SPI1RST		12
#define TIM1RST		11
#define ADC2RST		10
#define ADC1RST		9
#define IOPGRST		8
#define IOPFRST		7
#define IOPERST		6
#define IOPDRST		5
#define IOPCRST		4
#define IOPBRST		3
#define IOPARST		2
#define AFIORST		0

#define DACRST		29
#define PWRRST		28
#define BKPRST		27
#define CANRST		25
#define USBRST		23
#define I2C2RST		22
#define I2C1RST		21
#define UART5RST	20
#define UART4RST	19
#define USART3RST	18	
#define USART2RST	17	
#define SPI3RST		15
#define SPI2RST		14
#define WWDGRST		11
#define TIM14RST	8	
#define TIM13RST	7
#define TIM12RST	6	
#define TM7RST		5
#define TM6RST		4
#define TM5RST		3
#define TIM4RST		2
#define TIM3RST		1
#define TIM2RST		0

#define SDIOEN		10
#define FSMCEN		8
#define CRCEN		6
#define FLITFEN		4
#define SRAMEN		2
#define DMA2EN		1
#define DMA1EN		0

#define TIM11EN		21
#define TIM10EN		20
#define TIM9EN		19
#define ADC3EN		15
#define USART1EN	14
#define TIM8EN		13
#define SPI1EN		12
#define TIM1EN		11
#define ADC2EN		10
#define ADC1EN		9
#define IOPGEN		8
#define IOPFEN		7
#define IOPEEN		6
#define IOPDEN		5
#define IOPCEN		4
#define IOPBEN		3
#define IOPAEN		2
#define AFIOEN		0

#define DACEN		29
#define PWREN		28
#define BKPEN		27
#define CANEN		25
#define USBEN		23
#define I2C2EN		22
#define I2C1EN		21
#define UART5EN		20
#define UART4EN		19
#define USART3EN	18
#define USART2EN	17
#define SPI3EN		15
#define SPI2EN		14
#define WWDGEN		11
#define TIM14EN		8
#define TIM13EN		7
#define TIM12EN		6
#define TIM7EN		5
#define TIM6EN		4
#define TIM5EN		3
#define TIM4EN		2
#define TIM3EN		1
#define TIM2EN		0

#define BDRST		16
#define RTCEN		15
#define RTCSEL1		9
#define RTCSEL0		8
#define LSEBYP		2
#define LSERDY		1
#define LSEON		0

#define LPWRSTF		31
#define WWDGRSTF	30
#define IWDGRSTF	29
#define SFTRSTF		28
#define PORRSTF		27
#define PINRSTF		26
#define RMVF		24
#define LSIRDY		1
#define LSION		0

#endif ///__INCLUDED_RCC_H__
