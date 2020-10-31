#include <cstdint>

#include <interrupts.hpp>
#include <InterruptVector.hpp>
#include <Scheduler.hpp>
#include "Bsp.hpp"

extern "C"
{
extern void __libc_init_array();

extern uint32_t _estack;
extern uint32_t _sidata;
extern uint32_t _sdata;
extern uint32_t _edata;
extern uint32_t _sbss;
extern uint32_t _ebss;

uint32_t SystemCoreClock = 84000000;
}

extern "C" void reset()
{
	// initializes the data memory by copying from flash to ram
	for(auto flash = &_sidata, ram = &_sdata; ram != &_edata; flash++, ram++)
		*ram = *flash;

	// initializes the zero memory into ram
	for(auto ptr = &_sbss; ptr != &_ebss; ptr++)
		*ptr = 0;

	__libc_init_array();
	Bsp::initialize();
	opsy::Scheduler::start();
	asm volatile("bkpt 0"); // put a breakpoint because we are not supposed to arrive here
}

extern "C" constexpr auto __attribute__((section(".isr_vector"))) vector = InterruptVector<IrqCount>(&_estack, reset, SysTick_Handler, SVC_Handler, PendSV_Handler)
		.Register<DMA2_Stream0_IRQn>(neuron::mpu_spi::isrHandler)
		.Register<EXTI0_IRQn>(neuron::mpu_exti::isrHandler);

