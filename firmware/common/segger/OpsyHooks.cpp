#include "OpsyHooks.hpp"

char opsy::Hooks::s_charBuffer[kCharBufferSize];
const SEGGER_SYSVIEW_OS_API opsy::Hooks::s_osApi =
{ nullptr, opsy::Hooks::sendTaskList };
opsy::Callback<void(opsy::Callback<void(const opsy::TaskControlBlock&)>)> opsy::Hooks::s_foreachTask;

namespace opsy
{
void Hooks::boot(uint32_t coreClock)
{
	SEGGER_SYSVIEW_Init(coreClock, coreClock, &opsy::Hooks::s_osApi, opsy::Hooks::sendSystemDescription);
	SEGGER_SYSVIEW_Start();
}
}
