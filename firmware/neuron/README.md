# Neuron Flybarless Unit



# Ressources

## Clock

An external ceramic resonator is connected to the STM32. It runs at 8MHz.
The PLL uses these values:
- M = 8
- N = 336
- P = 4
- Q = 7

To get a final SystemCoreClock at 84MHz.

## RC Receiver

| Name | STM32 Pin | STM32 Function | STM32 AF | Remark |
|:---:|:---:|:---:|:---:|:---:|
|IN_PWM|PA11|TIM1_CH4|1||
|IN_UART|PA12|USART6_RX|8||
|IN_XOR|PA8|GPO|/|High inverts input|
|IN_PULL|PB15|GPO|/|Connected to input through 10k resistor|

## Satellite input

| Name | STM32 Pin | STM32 Function | STM32 AF | Remark |
|:---:|:---:|:---:|:---:|:---:|
|SAT_PWR|PB1 / PA2|GPO|/|PB1 and PA2 both directly connected|
|SAT_DATA|PA3|USART2_RX|7||

## Serial port

| Name | STM32 Pin | STM32 Function | STM32 AF | Remark |
|:---:|:---:|:---:|:---:|:---:|
|EXT_TX|PA9|USART1_TX|7||
|EXT_RX|PA10|USART1_RX|7||

## Servo output

| Name | STM32 Pin | STM32 Function | STM32 AF | Remark |
|:---:|:---:|:---:|:---:|:---:|
|SRV_1|PB9|TIM4_CH4 / TIM11_CH1|2 / 3||
|SRV_2|PB8|TIM4_CH3 / TIM10_CH1|2 / 3||
|SRV_3|PB7|TIM4_CH2|2||
|SRV_4|PB6|TIM4_CH1|2||

## LEDs

| Name | STM32 Pin | STM32 Function | STM32 AF | Remark |
|:---:|:---:|:---:|:---:|:---:|
|LED_RED|PA0|TIM5_CH1|2||
|LED_GREEN|PA1|TIM5_CH2|2||

## IMU MPU9250

| Name | STM32 Pin | STM32 Function | STM32 AF | Remark |
|:---:|:---:|:---:|:---:|:---:|
|ITG_NSS|PA4|GPO|/||
|ITG_SCK|PA5|SPI1_SCK|5||
|ITG_MISO|PA6|SPI1_MISO|5||
|ITG_MOSI|PA7|SPI1_MOSI|5||
|ITG_INT|PB0|EXTI0|/|Interrupt line from MPU9250|

## Governor

| Name | STM32 Pin | STM32 Function | STM32 AF | Remark |
|:---:|:---:|:---:|:---:|:---:|
|GOV|PA15|TIM2_CH1|1|Has external 10k pull up|

## Direct Memory Access (DMA)

| Peripheral function | DMA | Stream | Channel|
| :---: | :---:| :---:| :---:|
|SPI1_RX|2|3|3|
|SPI1_TX|2|0|3|
|USART1_RX|2|5|4|
|USART1_TX|2|7|4|

# Current Version

Current Version is in early development stage.