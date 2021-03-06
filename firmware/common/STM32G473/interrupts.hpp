#pragma once

#include <cstddef>

constexpr std::size_t IrqCount = 102;

enum IRQn_Type
{
	WWDG_IRQn                  = 0    , /** Window Watchdog interrupt       */
	PVD_PVM_IRQn               = 1    , /** PVD through EXTI line detection */
	RTC_TAMP_CSS_LSE_IRQn      = 2    , /** RTC_TAMP_CSS_LSE                */
	RTC_WKUP_IRQn              = 3    , /** RTC Wakeup timer                */
	FLASH_IRQn                 = 4    , /** FLASH                           */
	RCC_IRQn                   = 5    , /** RCC                             */
	EXTI0_IRQn                 = 6    , /** EXTI Line0 interrupt            */
	EXTI1_IRQn                 = 7    , /** EXTI Line1 interrupt            */
	EXTI2_IRQn                 = 8    , /** EXTI Line2 interrupt            */
	EXTI3_IRQn                 = 9    , /** EXTI Line3 interrupt            */
	EXTI4_IRQn                 = 10   , /** EXTI Line4 interrupt            */
	DMA1_CH1_IRQn              = 11   , /** DMA1 channel 1 interrupt        */
	DMA1_CH2_IRQn              = 12   , /** DMA1 channel 2 interrupt        */
	DMA1_CH3_IRQn              = 13   , /** DMA1 channel 3 interrupt        */
	DMA1_CH4_IRQn              = 14   , /** DMA1 channel 4 interrupt        */
	DMA1_CH5_IRQn              = 15   , /** DMA1 channel 5 interrupt        */
	DMA1_CH6_IRQn              = 16   , /** DMA1 channel 6 interrupt        */
	DMA1_CH7_IRQn              = 17   , /** DMA1 channel 7 interrupt        */
	ADC1_2_IRQn                = 18   , /** ADC1 and ADC2 global interrupt  */
	USB_HP_IRQn                = 19   , /** USB_HP                          */
	USB_LP_IRQn                = 20   , /** USB_LP                          */
	fdcan1_intr1_it_IRQn       = 21   , /** FDCAN1 interrupt                */
	fdcan1_intr0_it_IRQn       = 22   , /** FDCAN1 interrupt                */
	EXTI9_5_IRQn               = 23   , /** EXTI9_5                         */
	TIM1_BRK_TIM15_IRQn        = 24   , /** TIM1_BRK_TIM15                  */
	TIM1_UP_TIM16_IRQn         = 25   , /** TIM1_UP_TIM16                   */
	TIM1_TRG_COM_IRQn          = 26   , /** TIM1_TRG_COM/                   */
	TIM1_CC_IRQn               = 27   , /** TIM1 capture compare interrupt  */
	TIM2_IRQn                  = 28   , /** TIM2                            */
	TIM3_IRQn                  = 29   , /** TIM3                            */
	TIM4_IRQn                  = 30   , /** TIM4                            */
	I2C1_EV_IRQn               = 31   , /** I2C1_EV                         */
	I2C1_ER_IRQn               = 32   , /** I2C1_ER                         */
	I2C2_EV_IRQn               = 33   , /** I2C2_EV                         */
	I2C2_ER_IRQn               = 34   , /** I2C2_ER                         */
	SPI1_IRQn                  = 35   , /** SPI1                            */
	SPI2_IRQn                  = 36   , /** SPI2                            */
	USART1_IRQn                = 37   , /** USART1                          */
	USART2_IRQn                = 38   , /** USART2                          */
	USART3_IRQn                = 39   , /** USART3                          */
	EXTI15_10_IRQn             = 40   , /** EXTI15_10                       */
	RTC_ALARM_IRQn             = 41   , /** RTC_ALARM                       */
	USBWakeUP_IRQn             = 42   , /** USBWakeUP                       */
	TIM8_BRK_IRQn              = 43   , /** TIM8_BRK                        */
	TIM8_UP_IRQn               = 44   , /** TIM8_UP                         */
	TIM8_TRG_COM_IRQn          = 45   , /** TIM8_TRG_COM                    */
	TIM8_CC_IRQn               = 46   , /** TIM8_CC                         */
	ADC3_IRQn                  = 47   , /** ADC3                            */
	FMC_IRQn                   = 48   , /** FMC                             */
	LPTIM1_IRQn                = 49   , /** LPTIM1                          */
	TIM5_IRQn                  = 50   , /** TIM5                            */
	SPI3_IRQn                  = 51   , /** SPI3                            */
	UART4_IRQn                 = 52   , /** UART4                           */
	UART5_IRQn                 = 53   , /** UART5                           */
	TIM6_DACUNDER_IRQn         = 54   , /** TIM6_DACUNDER                   */
	TIM7_IRQn                  = 55   , /** TIM7                            */
	DMA2_CH1_IRQn              = 56   , /** DMA2_CH1                        */
	DMA2_CH2_IRQn              = 57   , /** DMA2_CH2                        */
	DMA2_CH3_IRQn              = 58   , /** DMA2_CH3                        */
	DMA2_CH4_IRQn              = 59   , /** DMA2_CH4                        */
	DMA2_CH5_IRQn              = 60   , /** DMA2_CH5                        */
	ADC4_IRQn                  = 61   , /** ADC4                            */
	ADC5_IRQn                  = 62   , /** ADC5                            */
	UCPD1_IRQn                 = 63   , /** UCPD1                           */
	COMP1_2_3_IRQn             = 64   , /** COMP1_2_3                       */
	COMP4_5_6_IRQn             = 65   , /** COMP4_5_6                       */
	COMP7_IRQn                 = 66   , /** COMP7                           */
	CRS_IRQn                   = 75   , /** CRS                             */
	SAI_IRQn                   = 76   , /** SAI                             */
	TIM20_BRK_IRQn             = 77   , /** TIM20_BRK                       */
	TIM20_UP_IRQn              = 78   , /** TIM20_UP                        */
	TIM20_TRG_COM_IRQn         = 79   , /** TIM20_TRG_COM                   */
	TIM20_CC_IRQn              = 80   , /** TIM20_CC                        */
	FPU_IRQn                   = 81   , /** Floating point unit interrupt   */
	I2C4_EV_IRQn               = 82   , /** I2C4_EV                         */
	I2C4_ER_IRQn               = 83   , /** I2C4_ER                         */
	SPI4_IRQn                  = 84   , /** SPI4                            */
	AES_IRQn                   = 85   , /** AES                             */
	FDCAN2_intr0_IRQn          = 86   , /** FDCAN2 interrupt                */
	FDCAN2_intr1_IRQn          = 87   , /** FDCAN2 interrupt                */
	FDCAN3_intr0_IRQn          = 88   , /** FDCAN3 interrupt                */
	FDCAN3_intr1_IRQn          = 89   , /** FDCAN3 interrupt                */
	RNG_IRQn                   = 90   , /** RNG                             */
	LPUART_IRQn                = 91   , /** LPUART                          */
	I2C3_EV_IRQn               = 92   , /** I2C3_EV                         */
	I2C3_ER_IRQn               = 93   , /** I2C3_ER                         */
	DMAMUX_OVR_IRQn            = 94   , /** DMAMUX_OVR                      */
	QUADSPI_IRQn               = 95   , /** QUADSPI                         */
	DMA1_CH8_IRQn              = 96   , /** DMA1_CH8                        */
	DMA2_CH6_IRQn              = 97   , /** DMA2_CH6                        */
	DMA2_CH7_IRQn              = 98   , /** DMA2_CH7                        */
	DMA2_CH8_IRQn              = 99   , /** DMA2_CH8                        */
	Cordic_IRQn                = 100  , /** Cordic                          */
	FMAC_IRQn                  = 101  , /** FMAC                            */
};

static constexpr const char* IrqNames[IrqCount] =
{
	"Window Watchdog interrupt",         // WWDG_IRQn (0)
	"PVD through EXTI line detection",   // PVD_PVM_IRQn (1)
	"RTC_TAMP_CSS_LSE",                  // RTC_TAMP_CSS_LSE_IRQn (2)
	"RTC Wakeup timer",                  // RTC_WKUP_IRQn (3)
	"FLASH",                             // FLASH_IRQn (4)
	"RCC",                               // RCC_IRQn (5)
	"EXTI Line0 interrupt",              // EXTI0_IRQn (6)
	"EXTI Line1 interrupt",              // EXTI1_IRQn (7)
	"EXTI Line2 interrupt",              // EXTI2_IRQn (8)
	"EXTI Line3 interrupt",              // EXTI3_IRQn (9)
	"EXTI Line4 interrupt",              // EXTI4_IRQn (10)
	"DMA1 channel 1 interrupt",          // DMA1_CH1_IRQn (11)
	"DMA1 channel 2 interrupt",          // DMA1_CH2_IRQn (12)
	"DMA1 channel 3 interrupt",          // DMA1_CH3_IRQn (13)
	"DMA1 channel 4 interrupt",          // DMA1_CH4_IRQn (14)
	"DMA1 channel 5 interrupt",          // DMA1_CH5_IRQn (15)
	"DMA1 channel 6 interrupt",          // DMA1_CH6_IRQn (16)
	"DMA1 channel 7 interrupt",          // DMA1_CH7_IRQn (17)
	"ADC1 and ADC2 global interrupt",    // ADC1_2_IRQn (18)
	"USB_HP",                            // USB_HP_IRQn (19)
	"USB_LP",                            // USB_LP_IRQn (20)
	"FDCAN1 interrupt",                  // fdcan1_intr1_it_IRQn (21)
	"FDCAN1 interrupt",                  // fdcan1_intr0_it_IRQn (22)
	"EXTI9_5",                           // EXTI9_5_IRQn (23)
	"TIM1_BRK_TIM15",                    // TIM1_BRK_TIM15_IRQn (24)
	"TIM1_UP_TIM16",                     // TIM1_UP_TIM16_IRQn (25)
	"TIM1_TRG_COM/",                     // TIM1_TRG_COM_IRQn (26)
	"TIM1 capture compare interrupt",    // TIM1_CC_IRQn (27)
	"TIM2",                              // TIM2_IRQn (28)
	"TIM3",                              // TIM3_IRQn (29)
	"TIM4",                              // TIM4_IRQn (30)
	"I2C1_EV",                           // I2C1_EV_IRQn (31)
	"I2C1_ER",                           // I2C1_ER_IRQn (32)
	"I2C2_EV",                           // I2C2_EV_IRQn (33)
	"I2C2_ER",                           // I2C2_ER_IRQn (34)
	"SPI1",                              // SPI1_IRQn (35)
	"SPI2",                              // SPI2_IRQn (36)
	"USART1",                            // USART1_IRQn (37)
	"USART2",                            // USART2_IRQn (38)
	"USART3",                            // USART3_IRQn (39)
	"EXTI15_10",                         // EXTI15_10_IRQn (40)
	"RTC_ALARM",                         // RTC_ALARM_IRQn (41)
	"USBWakeUP",                         // USBWakeUP_IRQn (42)
	"TIM8_BRK",                          // TIM8_BRK_IRQn (43)
	"TIM8_UP",                           // TIM8_UP_IRQn (44)
	"TIM8_TRG_COM",                      // TIM8_TRG_COM_IRQn (45)
	"TIM8_CC",                           // TIM8_CC_IRQn (46)
	"ADC3",                              // ADC3_IRQn (47)
	"FMC",                               // FMC_IRQn (48)
	"LPTIM1",                            // LPTIM1_IRQn (49)
	"TIM5",                              // TIM5_IRQn (50)
	"SPI3",                              // SPI3_IRQn (51)
	"UART4",                             // UART4_IRQn (52)
	"UART5",                             // UART5_IRQn (53)
	"TIM6_DACUNDER",                     // TIM6_DACUNDER_IRQn (54)
	"TIM7",                              // TIM7_IRQn (55)
	"DMA2_CH1",                          // DMA2_CH1_IRQn (56)
	"DMA2_CH2",                          // DMA2_CH2_IRQn (57)
	"DMA2_CH3",                          // DMA2_CH3_IRQn (58)
	"DMA2_CH4",                          // DMA2_CH4_IRQn (59)
	"DMA2_CH5",                          // DMA2_CH5_IRQn (60)
	"ADC4",                              // ADC4_IRQn (61)
	"ADC5",                              // ADC5_IRQn (62)
	"UCPD1",                             // UCPD1_IRQn (63)
	"COMP1_2_3",                         // COMP1_2_3_IRQn (64)
	"COMP4_5_6",                         // COMP4_5_6_IRQn (65)
	"COMP7",                             // COMP7_IRQn (66)
	"",                                  // unassigned (66)
	"",                                  // unassigned (67)
	"",                                  // unassigned (68)
	"",                                  // unassigned (69)
	"",                                  // unassigned (70)
	"",                                  // unassigned (71)
	"",                                  // unassigned (72)
	"",                                  // unassigned (73)
	"CRS",                               // CRS_IRQn (75)
	"SAI",                               // SAI_IRQn (76)
	"TIM20_BRK",                         // TIM20_BRK_IRQn (77)
	"TIM20_UP",                          // TIM20_UP_IRQn (78)
	"TIM20_TRG_COM",                     // TIM20_TRG_COM_IRQn (79)
	"TIM20_CC",                          // TIM20_CC_IRQn (80)
	"Floating point unit interrupt",     // FPU_IRQn (81)
	"I2C4_EV",                           // I2C4_EV_IRQn (82)
	"I2C4_ER",                           // I2C4_ER_IRQn (83)
	"SPI4",                              // SPI4_IRQn (84)
	"AES",                               // AES_IRQn (85)
	"FDCAN2 interrupt",                  // FDCAN2_intr0_IRQn (86)
	"FDCAN2 interrupt",                  // FDCAN2_intr1_IRQn (87)
	"FDCAN3 interrupt",                  // FDCAN3_intr0_IRQn (88)
	"FDCAN3 interrupt",                  // FDCAN3_intr1_IRQn (89)
	"RNG",                               // RNG_IRQn (90)
	"LPUART",                            // LPUART_IRQn (91)
	"I2C3_EV",                           // I2C3_EV_IRQn (92)
	"I2C3_ER",                           // I2C3_ER_IRQn (93)
	"DMAMUX_OVR",                        // DMAMUX_OVR_IRQn (94)
	"QUADSPI",                           // QUADSPI_IRQn (95)
	"DMA1_CH8",                          // DMA1_CH8_IRQn (96)
	"DMA2_CH6",                          // DMA2_CH6_IRQn (97)
	"DMA2_CH7",                          // DMA2_CH7_IRQn (98)
	"DMA2_CH8",                          // DMA2_CH8_IRQn (99)
	"Cordic",                            // Cordic_IRQn (100)
	"FMAC",                              // FMAC_IRQn (101)
};
