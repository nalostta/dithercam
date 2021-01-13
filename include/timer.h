#ifndef __INCLUDED_TIMER_H__
#define __INCLUDED_TIMER_H__

#include "defs.h"
#include <stdint.h>
//General Timer Macro Definition

//General Timer Base Address

//General Timer Register offsets
#define TIMx_CR1	0x00
#define TIMx_CR2	0x04
#define TIMx_SMCR 	0x08
#define TIMx_DIER 	0x0C
#define TIMx_SR		0x10
#define TIMx_EGR	0x14
#define TIMx_CCMR1	0x18
#define TIMx_CCMR2	0x1C
#define TIMx_CCER	0x20
#define TIMx_CNT	0x24
#define TIMx_PSC	0x28
#define TIMx_ARR	0x2C
#define TIMx_CCR1	0x34
#define TIMx_CCR2	0x38
#define TIMx_CCR3	0x3C
#define TIMx_CCR4	0x40
#define TIMx_DCR	0x48
#define TIMx_DMAR	0x4C

//General Timer structure overlay

typedef struct
{
	__IO uint32_t CR1;	
	__IO uint32_t CR2;	
	__IO uint32_t SMCR; 	
	__IO uint32_t DIER; 	
	__IO uint32_t SR;	
	__IO uint32_t EGR;	
	__IO uint32_t CCMR1;	
	__IO uint32_t CCMR2;	
	__IO uint32_t CCER;	
	__IO uint32_t CNT;	
	__IO uint32_t PSC;	
	__IO uint32_t ARR;	
	__IO uint32_t res0;
	__IO uint32_t CCR1;	
	__IO uint32_t CCR2;	
	__IO uint32_t CCR3;	
	__IO uint32_t CCR4;	
	__IO uint32_t res1;
	__IO uint32_t DCR;	
	__IO uint32_t DMAR;	
}_TIMER_GEN;

#define tim2 ((_TIMER_GEN*)TIM2)

#endif //__INCLUDED_TIMER_H__