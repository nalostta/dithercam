#include<stdint.h>

#define SRAM_START	0x20000000U
#define SRAM_SIZE	(20*1024)
#define SRAM_END	((SRAM_START) + (SRAM_SIZE))

#define STACK_START SRAM_END

void Default_Handler(void);

void Reset_Handler			(void);	
void NMI_Handler			(void)		__attribute__ ((weak, alias("Default_Handler")));
void HardFault_Handler		(void)    	__attribute__ ((weak, alias("Default_Handler")));
void MemManage_Handler		(void)    	__attribute__ ((weak, alias("Default_Handler")));
void BusFault_Handler		(void)     	__attribute__ ((weak, alias("Default_Handler")));
void UsageFault_Handler		(void)   	__attribute__ ((weak, alias("Default_Handler")));
void SVC_Handler			(void)      __attribute__ ((weak, alias("Default_Handler")));
void DebugMonitor_Handler	(void)		__attribute__ ((weak, alias("Default_Handler")));
void SYSTICK_Handler		(void)     	__attribute__ ((weak, alias("Default_Handler")));
void PendSV_Handler			(void)	    __attribute__ ((weak, alias("Default_Handler")));
void tim2_ISR               (void)	    __attribute__ ((weak, alias("Default_Handler")));
void button_handler			(void)	    __attribute__ ((weak, alias("Default_Handler")));

extern uint32_t _etext;
extern uint32_t _sdata;
extern uint32_t _edata;
extern uint32_t _sbss;
extern uint32_t _ebss;

int main(void);

//uint32_t __attribute__ ((section(".isr_vectors"))) stack_start 	= STACK_START;
//uint32_t __attribute__ ((section(".isr_vectors"))) reset_vector 	= (uint32_t)&Reset_Handler;
//uint32_t __attribute__ ((section(".isr_vectors"))) NMI_vector 	= (uint32_t)&Default_Handler;

//

//

uint32_t vectors[] __attribute__ ((section(".isr_vectors"))) = 
{
	STACK_START,					/* 0x000 Stack Pointer                   */
	(uint32_t)&Reset_Handler,       /* 0x004 Reset                           */
	(uint32_t)&Default_Handler,     /* 0x008 Non maskable interrupt          */
	(uint32_t)&HardFault_Handler,   /* 0x00C HardFault                       */
	(uint32_t)&MemManage_Handler,   /* 0x010 Memory Management               */
	(uint32_t)&BusFault_Handler,    /* 0x014 BusFault                        */
	(uint32_t)&UsageFault_Handler,  /* 0x018 UsageFault                      */
	0,                              /* 0x01C Reserved                        */
	0,                              /* 0x020 Reserved                        */
	0,                              /* 0x024 Reserved                        */
	0,                              /* 0x028 Reserved                        */
	(uint32_t)&SVC_Handler,         /* 0x02C System service call             */
	(uint32_t)&DebugMonitor_Handler,/* 0x030 Debug Monitor                   */
	0,                              /* 0x034 Reserved                        */
	(uint32_t)&PendSV_Handler,      /* 0x038 PendSV                          */
	(uint32_t)&SYSTICK_Handler,     /* 0x03C System tick timer               */
	0,                              /* 0x040 Window watchdog                 */
	0,                              /* 0x044 PVD through EXTI Line detection */
	0,                              /* 0x048 Tamper                          */
	0,                              /* 0x04C RTC global                      */
	0,                              /* 0x050 FLASH global                    */
	0,                              /* 0x054 RCC global                      */
	(uint32_t ) button_handler,    /* 0x058 EXTI Line0                      */
	(uint32_t ) button_handler,    /* 0x05C EXTI Line1                      */
	0,                              /* 0x060 EXTI Line2                      */
	0,                              /* 0x064 EXTI Line3                      */
	0,                              /* 0x068 EXTI Line4                      */
	0,                              /* 0x06C DMA1_Ch1                        */
	0,                              /* 0x070 DMA1_Ch2                        */
	0,                              /* 0x074 DMA1_Ch3                        */
	0,                              /* 0x078 DMA1_Ch4                        */
	0,                              /* 0x07C DMA1_Ch5                        */
	0,                              /* 0x080 DMA1_Ch6                        */
	0,                              /* 0x084 DMA1_Ch7                        */
	0,                              /* 0x088 ADC1 and ADC2 global            */
	0,                              /* 0x08C CAN1_TX                         */
	0,                              /* 0x090 CAN1_RX0                        */
	0,                              /* 0x094 CAN1_RX1                        */
	0,                              /* 0x098 CAN1_SCE                        */
	0,                              /* 0x09C EXTI Lines 9:5                  */
	0,                              /* 0x0A0 TIM1 Break                      */
	0,                              /* 0x0A4 TIM1 Update                     */
	0,                              /* 0x0A8 TIM1 Trigger and Communication  */
	0,                              /* 0x0AC TIM1 Capture Compare            */
	(uint32_t)&tim2_ISR,       		/* 0x0B0 TIM2                            */
	0,                              /* 0x0B4 TIM3                            */
	0,                              /* 0x0B8 TIM4                            */
	0,                              /* 0x0BC I2C1 event                      */
	0,                              /* 0x0C0 I2C1 error                      */
	0,                              /* 0x0C4 I2C2 event                      */
	0,                              /* 0x0C8 I2C2 error                      */
	0,                              /* 0x0CC SPI1                            */
	0,                              /* 0x0D0 SPI2                            */
	0,                              /* 0x0D4 USART1                          */
	0,                              /* 0x0D8 USART2                          */
	0,                              /* 0x0DC USART3                          */
	0,                              /* 0x0E0 EXTI Lines 15:10                */
	0,                              /* 0x0E4 RTC alarm through EXTI line     */
	0,                              /* 49  USB OTG FS Wakeup through EXTI  */
	0,                              /* -   Reserved                        */
	0,                              /* -   Reserved                        */
	0,                              /* -   Reserved                        */
	0,                              /* -   Reserved                        */
	0,                              /* -   Reserved                        */
	0,                              /* -   Reserved                        */
	0,                              /* -   Reserved                        */
	0,                              /* 57  TIM5                            */
	0,                              /* 58  SPI3                            */
	0,                              /* 59  USART4                          */
	0,                              /* 60  USART5                          */
	0,                              /* 61  TIM6                            */
	0,                              /* 62  TIM7                            */
	0,                              /* 63  DMA2_Ch1                        */
	0,                              /* 64  DMA2_Ch2                        */
	0,                              /* 65  DMA2_Ch3                        */
	0,                              /* 66  DMA2_Ch4                        */
	0,                              /* 67  DMA2_Ch5                        */
	0,                              /* 68  Ethernet                        */
	0,                              /* 69  Ethernet wakeup                 */
	0,                              /* 70  CAN2_TX                         */
	0,                              /* 71  CAN2_RX0                        */
	0,                              /* 72  CAN2_RX1                        */
	0,                              /* 73  CAN2_SCE                        */
	0,                              /* 74  USB OTG FS                      */
};



void Default_Handler(void)
{
	while(1);
}

void Reset_Handler(void)
{
	//copy .data section to SRAM
	uint32_t size = &_edata - &_sdata;
	uint8_t* pDst = (uint8_t*)&_sdata;
	uint8_t* pSrc = (uint8_t*)&_etext;
	
	for(uint32_t i = 0; i < size; i++)
	{
		*pDst++ = *pSrc++;
	}
	
	//copy .bss sections
	size = &_ebss - &_sbss;
	pDst = (uint8_t*)&_sbss;
	
	for(uint32_t i = 0; i < size; i++)
	{
		*pDst++ = 0;
	}
	
	//call init library fns
	//init ISR
	
	main();
	
	while(1); //safety measure...
}



/*
MSP
reset
nmi
hf
mmf
bf
uf
0
0
0
0

*/
