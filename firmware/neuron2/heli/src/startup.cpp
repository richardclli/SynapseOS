#include <cstdint>

#include <CortexM.hpp>

#include <interrupts.hpp>
#include <InterruptVector.hpp>
#include <Scheduler.hpp>

#include "Bsp.hpp"


extern "C"
{
extern void __libc_init_array();

void _exit()
{
	asm volatile("bkpt 0");
}

extern uint32_t _estack;
extern uint32_t _sidata;
extern uint32_t _sdata;
extern uint32_t _edata;
extern uint32_t _sbss;
extern uint32_t _ebss;

uint32_t SystemCoreClock = 160000000;
}


extern "C" void Reset_Handler();
extern "C" constexpr auto __attribute__((section(".isr_vector"))) vector = InterruptVector<IrqCount>(&_estack, Reset_Handler, SysTick_Handler, SVC_Handler, PendSV_Handler)
		.Register<DMA2_CH1_IRQn>(neuron2::lsmspi::isrHandler)
		.Register<DMA2_CH3_IRQn>(neuron2::lisspi::isrHandler)
		.Register<TIM1_UP_TIM16_IRQn>(neuron2::rxuart::timIsrHandler)
		.Register<USART3_IRQn>(neuron2::rxuart::uartIsrHandler);

extern "C" void Reset_Handler()
{
	opsy::CortexM::setMsp(&_estack);
	auto vtor = reinterpret_cast<const IsrHandler**>(reinterpret_cast<const uint32_t>(&vector));
	opsy::CortexM::moveVtor(vtor);

	// initializes the data memory by copying from flash to ram
	for(auto flash = &_sidata, ram = &_sdata; ram != &_edata; flash++, ram++)
		*ram = *flash;

	// initializes the zero memory into ram
	for(auto ptr = &_sbss; ptr != &_ebss; ptr++)
		*ptr = 0;

	opsy::CortexM::enableFpu();
	__libc_init_array();
	Bsp::initialize();
	opsy::Scheduler::start();
	asm volatile("bkpt 0"); // put a breakpoint because we are not supposed to arrive here
}

