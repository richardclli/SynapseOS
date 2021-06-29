#pragma once

#include <cstddef>

constexpr std::size_t IrqCount = 85;

enum IRQn_Type
{
	WWDG_IRQn                    = 0    , /** Window WatchDog                                                    */
	PVD_IRQn                     = 1    , /** PVD through EXTI line detection interrupt                          */
	TAMP_STAMP_IRQn              = 2    , /** Tamper and TimeStamp interrupts through the EXTI line              */
	RTC_WKUP_IRQn                = 3    , /** RTC Wakeup interrupt through the EXTI line                         */
	FLASH_IRQn                   = 4    , /** FLASH global interrupt                                             */
	RCC_IRQn                     = 5    , /** RCC global interrupt                                               */
	EXTI0_IRQn                   = 6    , /** EXTI Line0 interrupt                                               */
	EXTI1_IRQn                   = 7    , /** EXTI Line1 interrupt                                               */
	EXTI2_IRQn                   = 8    , /** EXTI Line2 interrupt                                               */
	EXTI3_IRQn                   = 9    , /** EXTI Line3 interrupt                                               */
	EXTI4_IRQn                   = 10   , /** EXTI Line4 interrupt                                               */
	DMA1_Stream0_IRQn            = 11   , /** DMA1 Stream 0                                                      */
	DMA1_Stream1_IRQn            = 12   , /** DMA1 Stream 1                                                      */
	DMA1_Stream2_IRQn            = 13   , /** DMA1 Stream 2                                                      */
	DMA1_Stream3_IRQn            = 14   , /** DMA1 Stream 3                                                      */
	DMA1_Stream4_IRQn            = 15   , /** DMA1 Stream 4                                                      */
	DMA1_Stream5_IRQn            = 16   , /** DMA1 Stream 5                                                      */
	DMA1_Stream6_IRQn            = 17   , /** DMA1 Stream 6                                                      */
	ADC_IRQn                     = 18   , /** ADC1 global interrupt                                              */
	EXTI9_5_IRQn                 = 23   , /** EXTI Line[9:5] interrupts                                          */
	TIM1_BRK_TIM9_IRQn           = 24   , /** TIM1 Break interrupt and TIM9 global interrupt                     */
	TIM1_UP_TIM10_IRQn           = 25   , /** TIM1 Update interrupt and TIM10 global interrupt                   */
	TIM1_TRG_COM_TIM11_IRQn      = 26   , /** TIM1 Trigger and Commutation interrupts and TIM11 global interrupt */
	TIM1_CC_IRQn                 = 27   , /** TIM1 Capture Compare interrupt                                     */
	TIM2_IRQn                    = 28   , /** TIM2 global interrupt                                              */
	TIM3_IRQn                    = 29   , /** TIM3 global interrupt                                              */
	TIM4_IRQn                    = 30   , /** TIM4                                                               */
	I2C1_EV_IRQn                 = 31   , /** I2C1 event interrupt                                               */
	I2C1_ER_IRQn                 = 32   , /** I2C1 error interrupt                                               */
	I2C2_EV_IRQn                 = 33   , /** I2C2 event interrupt                                               */
	I2C2_ER_IRQn                 = 34   , /** I2C2 error interrupt                                               */
	SPI1_IRQn                    = 35   , /** SPI1 global interrupt                                              */
	SPI2_IRQn                    = 36   , /** SPI2 global interrupt                                              */
	USART1_IRQn                  = 37   , /** USART1                                                             */
	USART2_IRQn                  = 38   , /** USART2                                                             */
	EXTI15_10_IRQn               = 40   , /** EXTI Line[15:10] interrupts                                        */
	RTC_Alarm_IRQn               = 41   , /** RTC Alarms (A and B) through EXTI line interrupt                   */
	OTG_FS_WKUP_IRQn             = 42   , /** USB On-The-Go FS Wakeup through EXTI line interrupt                */
	DMA1_Stream7_IRQn            = 47   , /** DMA1 Stream 7                                                      */
	SDIO_IRQn                    = 49   , /** SDIO global interrupt                                              */
	TIM5_IRQn                    = 50   , /** TIM5                                                               */
	SPI3_IRQn                    = 51   , /** SPI3 global interrupt                                              */
	DMA2_Stream0_IRQn            = 56   , /** DMA2 Stream 0                                                      */
	DMA2_Stream1_IRQn            = 57   , /** DMA2 Stream 1                                                      */
	DMA2_Stream2_IRQn            = 58   , /** DMA2 Stream 2                                                      */
	DMA2_Stream3_IRQn            = 59   , /** DMA2 Stream 3                                                      */
	DMA2_Stream4_IRQn            = 60   , /** DMA2 Stream 4                                                      */
	OTG_FS_IRQn                  = 67   , /** USB On The Go FS global interrupt                                  */
	DMA2_Stream5_IRQn            = 68   , /** DMA2 Stream 5                                                      */
	DMA2_Stream6_IRQn            = 69   , /** DMA2 Stream 6                                                      */
	DMA2_Stream7_IRQn            = 70   , /** DMA2 Stream 7                                                      */
	USART6_IRQn                  = 71   , /** USART6                                                             */
	I2C3_EV_IRQn                 = 72   , /** I2C3 event interrupt                                               */
	I2C3_ER_IRQn                 = 73   , /** I2C3 error interrupt                                               */
	FPU_IRQn                     = 81   , /** Floating point interrupt                                           */
	SPI4_IRQn                    = 84   , /** SPI4 global interrupt                                              */
};

static constexpr const char* IrqNames[] =
{
	"Window WatchDog",                                                      // WWDG_IRQn
	"PVD through EXTI line detection interrupt",                            // PVD_IRQn
	"Tamper and TimeStamp interrupts through the EXTI line",                // TAMP_STAMP_IRQn
	"RTC Wakeup interrupt through the EXTI line",                           // RTC_WKUP_IRQn
	"FLASH global interrupt",                                               // FLASH_IRQn
	"RCC global interrupt",                                                 // RCC_IRQn
	"EXTI Line0 interrupt",                                                 // EXTI0_IRQn
	"EXTI Line1 interrupt",                                                 // EXTI1_IRQn
	"EXTI Line2 interrupt",                                                 // EXTI2_IRQn
	"EXTI Line3 interrupt",                                                 // EXTI3_IRQn
	"EXTI Line4 interrupt",                                                 // EXTI4_IRQn
	"DMA1 Stream 0",                                                        // DMA1_Stream0_IRQn
	"DMA1 Stream 1",                                                        // DMA1_Stream1_IRQn
	"DMA1 Stream 2",                                                        // DMA1_Stream2_IRQn
	"DMA1 Stream 3",                                                        // DMA1_Stream3_IRQn
	"DMA1 Stream 4",                                                        // DMA1_Stream4_IRQn
	"DMA1 Stream 5",                                                        // DMA1_Stream5_IRQn
	"DMA1 Stream 6",                                                        // DMA1_Stream6_IRQn
	"ADC1 global interrupt",                                                // ADC_IRQn
	"EXTI Line[9:5] interrupts",                                            // EXTI9_5_IRQn
	"TIM1 Break interrupt and TIM9 global interrupt",                       // TIM1_BRK_TIM9_IRQn
	"TIM1 Update interrupt and TIM10 global interrupt",                     // TIM1_UP_TIM10_IRQn
	"TIM1 Trigger and Commutation interrupts and TIM11 global interrupt",   // TIM1_TRG_COM_TIM11_IRQn
	"TIM1 Capture Compare interrupt",                                       // TIM1_CC_IRQn
	"TIM2 global interrupt",                                                // TIM2_IRQn
	"TIM3 global interrupt",                                                // TIM3_IRQn
	"TIM4",                                                                 // TIM4_IRQn
	"I2C1 event interrupt",                                                 // I2C1_EV_IRQn
	"I2C1 error interrupt",                                                 // I2C1_ER_IRQn
	"I2C2 event interrupt",                                                 // I2C2_EV_IRQn
	"I2C2 error interrupt",                                                 // I2C2_ER_IRQn
	"SPI1 global interrupt",                                                // SPI1_IRQn
	"SPI2 global interrupt",                                                // SPI2_IRQn
	"USART1",                                                               // USART1_IRQn
	"USART2",                                                               // USART2_IRQn
	"EXTI Line[15:10] interrupts",                                          // EXTI15_10_IRQn
	"RTC Alarms (A and B) through EXTI line interrupt",                     // RTC_Alarm_IRQn
	"USB On-The-Go FS Wakeup through EXTI line interrupt",                  // OTG_FS_WKUP_IRQn
	"DMA1 Stream 7",                                                        // DMA1_Stream7_IRQn
	"SDIO global interrupt",                                                // SDIO_IRQn
	"TIM5",                                                                 // TIM5_IRQn
	"SPI3 global interrupt",                                                // SPI3_IRQn
	"DMA2 Stream 0",                                                        // DMA2_Stream0_IRQn
	"DMA2 Stream 1",                                                        // DMA2_Stream1_IRQn
	"DMA2 Stream 2",                                                        // DMA2_Stream2_IRQn
	"DMA2 Stream 3",                                                        // DMA2_Stream3_IRQn
	"DMA2 Stream 4",                                                        // DMA2_Stream4_IRQn
	"USB On The Go FS global interrupt",                                    // OTG_FS_IRQn
	"DMA2 Stream 5",                                                        // DMA2_Stream5_IRQn
	"DMA2 Stream 6",                                                        // DMA2_Stream6_IRQn
	"DMA2 Stream 7",                                                        // DMA2_Stream7_IRQn
	"USART6",                                                               // USART6_IRQn
	"I2C3 event interrupt",                                                 // I2C3_EV_IRQn
	"I2C3 error interrupt",                                                 // I2C3_ER_IRQn
	"Floating point interrupt",                                             // FPU_IRQn
	"SPI4 global interrupt",                                                // SPI4_IRQn
};
