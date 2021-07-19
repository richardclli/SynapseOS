#pragma once

#include "SEGGER/SEGGER_SYSVIEW.h"
#include <Task.hpp>
#include <interrupts.hpp>

extern "C" void boot(uint32_t);

namespace opsy
{
class Hooks
{
	friend void ::boot(uint32_t);

public:

	static void starting(IdleTaskControlBlock&, uint32_t, Callback<void(Callback<void(const TaskControlBlock&)>)> foreachTask)
	{
		s_foreachTask = std::move(foreachTask);
	}

	static void enterPendSv()
	{
		SEGGER_SYSVIEW_RecordEnterISR();
	}

	static void enterIdle()
	{
		SEGGER_SYSVIEW_OnIdle();
	}

	static void enterSystick()
	{
		SEGGER_SYSVIEW_RecordEnterISR();
	}

	static void exitSystick(bool switchRequired)
	{
		if (switchRequired)
			SEGGER_SYSVIEW_RecordExitISRToScheduler();
		else
			SEGGER_SYSVIEW_RecordExitISR();
	}

	static void enterServiceCall()
	{
		SEGGER_SYSVIEW_RecordEnterISR();
	}

	static void exitServiceCall(bool switchRequired)
	{
		if (switchRequired)
			SEGGER_SYSVIEW_RecordExitISRToScheduler();
		else
			SEGGER_SYSVIEW_RecordExitISR();
	}

	static void taskAdded(TaskControlBlock& task)
	{
		SEGGER_SYSVIEW_OnTaskCreate(reinterpret_cast<uint32_t>(&task));
		sendTaskInfo(task);
	}

	static void taskTerminated(TaskControlBlock& task)
	{
		SEGGER_SYSVIEW_OnTaskTerminate(reinterpret_cast<uint32_t>(&task));
	}

	static void taskStarted(TaskControlBlock& task)
	{
		SEGGER_SYSVIEW_OnTaskStartExec(reinterpret_cast<uint32_t>(&task));
	}

	static void taskSleep(TaskControlBlock& task)
	{
		SEGGER_SYSVIEW_OnTaskStopReady(reinterpret_cast<uint32_t>(&task), static_cast<uint8_t>(ReasonForReadyStop::sleep));
	}

	static void taskStopped(TaskControlBlock&)
	{
		SEGGER_SYSVIEW_OnTaskStopExec(/* current task only */);
	}

	static void taskWait(TaskControlBlock& task, ConditionVariable&)
	{
		SEGGER_SYSVIEW_OnTaskStopReady(reinterpret_cast<uint32_t>(&task), static_cast<uint8_t>(ReasonForReadyStop::wait));
	}

	static void taskWaitTimeout(TaskControlBlock& task, ConditionVariable&, time_point)
	{
		SEGGER_SYSVIEW_OnTaskStopReady(reinterpret_cast<uint32_t>(&task), static_cast<uint8_t>(ReasonForReadyStop::waitWithTimeout));
	}

	static void taskReady(TaskControlBlock& task)
	{
		SEGGER_SYSVIEW_OnTaskStartReady(reinterpret_cast<uint32_t>(&task));
	}

	static void taskNameChanged(TaskControlBlock& task)
	{
		sendTaskInfo(task);
	}

	static void taskPriorityChanged(TaskControlBlock& task)
	{
		SEGGER_SYSVIEW_RecordU32x2(static_cast<uint8_t>(EvendId::PriorityChanged), reinterpret_cast<uint32_t>(&task), static_cast<uint32_t>(task.m_priority));
		sendTaskInfo(task);
	}

	static void enterCriticalSection()
	{
		SEGGER_SYSVIEW_RecordVoid(static_cast<uint8_t>(EvendId::CriticalSection));
	}

	static void exitCriticalSection()
	{
		SEGGER_SYSVIEW_RecordEndCall(static_cast<uint8_t>(EvendId::CriticalSection));
	}

	static void enterFullLock()
	{
		SEGGER_SYSVIEW_RecordVoid(static_cast<uint8_t>(EvendId::FullLock));
	}

	static void exitFullLock()
	{
		SEGGER_SYSVIEW_RecordEndCall(static_cast<uint8_t>(EvendId::FullLock));
	}

	static void enterPriorityLock(IsrPriority priority)
	{
		SEGGER_SYSVIEW_RecordU32(static_cast<uint8_t>(EvendId::PriorityLock), priority.value());
	}

	static void exitPriorityLock()
	{
		SEGGER_SYSVIEW_RecordEndCall(static_cast<uint8_t>(EvendId::PriorityLock));
	}

	static void conditionVariableStartWaiting(ConditionVariable& cv, TaskControlBlock& task)
	{
		SEGGER_SYSVIEW_RecordU32x2(static_cast<uint8_t>(EvendId::CvWait), reinterpret_cast<uint32_t>(&task), reinterpret_cast<uint32_t>(&cv));
	}

	static void conditionVariableStartWaiting(ConditionVariable& cv, TaskControlBlock& task, duration d)
	{
		SEGGER_SYSVIEW_RecordU32x3(static_cast<uint8_t>(EvendId::CvWaitTimeout), reinterpret_cast<uint32_t>(&task), reinterpret_cast<uint32_t>(&cv), static_cast<uint32_t>(d.count()));
	}

	static void conditionVariableNotifyOne(ConditionVariable& cv)
	{
		SEGGER_SYSVIEW_RecordU32(static_cast<uint8_t>(EvendId::CvNotifyOne), reinterpret_cast<uint32_t>(&cv));
	}

	static void conditionVariableNotifyAll(ConditionVariable& cv)
	{
		SEGGER_SYSVIEW_RecordU32(static_cast<uint8_t>(EvendId::CvNotifyAll), reinterpret_cast<uint32_t>(&cv));
	}

	static void setName(ConditionVariable& cv, const char* name)
	{
		SEGGER_SYSVIEW_NameResource(reinterpret_cast<uint32_t>(&cv), name);
	}

	static void mutexStoredForTask(TaskControlBlock& task)
	{
		SEGGER_SYSVIEW_RecordU32(static_cast<uint8_t>(EvendId::MutexStore), reinterpret_cast<uint32_t>(&task));
	}

	static void mutexRestoredForTask(TaskControlBlock& task)
	{
		SEGGER_SYSVIEW_RecordU32(static_cast<uint8_t>(EvendId::MutexRestored), reinterpret_cast<uint32_t>(&task));
	}

	static void boot(uint32_t coreClock);

	template<void(*Routine)()>
	static constexpr auto decorateIsr()
	{
		return []()
		{
			SEGGER_SYSVIEW_RecordEnterISR();
			Routine();
			SEGGER_SYSVIEW_RecordExitISR();
		};
	}


private:

	enum class ReasonForReadyStop
		: uint8_t
		{
			sleep = 1, wait = 2, waitWithTimeout = 3
	};

	enum class EvendId
		: uint8_t
		{
			CriticalSection = 35, //
		FullLock = 36,
		PriorityLock = 37,
		PriorityChanged = 38,
		CvWait = 39,
		CvWaitTimeout = 40,
		CvNotifyOne = 41,
		CvNotifyAll = 42,
		MutexStore = 43,
		MutexRestored = 44,
	};

	static constexpr std::size_t kCharBufferSize = 256;
	static char s_charBuffer[kCharBufferSize];
	static const SEGGER_SYSVIEW_OS_API s_osApi;
	static Callback<void(Callback<void(const TaskControlBlock&)>)> s_foreachTask;

	static void sendSystemDescription()
	{
		SEGGER_SYSVIEW_SendSysDesc("N=Neuron2,D=Cortex-M4,O=OpSy");
		SEGGER_SYSVIEW_SendSysDesc("I#15=Systick");
		SEGGER_SYSVIEW_SendSysDesc("I#14=PendSV");
		SEGGER_SYSVIEW_SendSysDesc("I#11=ServiceCall");

		auto vtor = opsy::CortexM::getVtor();

		for (auto i = 0u; i < IrqCount; ++i)
		{
			if(vtor[i + opsy::CortexM::kSystemIrqs] != 0)
			{
				snprintf(s_charBuffer, kCharBufferSize, "I#%lu=%s", i + CortexM::kSystemIrqs, IrqNames[i]);
				SEGGER_SYSVIEW_SendSysDesc(s_charBuffer);
			}
		}
	}

	static void sendTaskInfo(const TaskControlBlock& task)
	{
		SEGGER_SYSVIEW_TASKINFO info;
		info.TaskID = reinterpret_cast<uint32_t>(&task);
		info.Prio = static_cast<uint8_t>(task.priority());
		info.StackBase = reinterpret_cast<uint32_t>(task.m_stackBase);
		info.StackSize = task.m_stackSize * sizeof(uint32_t) / sizeof(uint8_t);

		if (task.name() == nullptr)
		{
			snprintf(s_charBuffer, kCharBufferSize, "Task 0x%08lX", info.TaskID);
			info.sName = s_charBuffer;
		}
		else
			info.sName = task.name();

		SEGGER_SYSVIEW_SendTaskInfo(&info);
	}

	static void sendTaskList()
	{
		s_foreachTask(sendTaskInfo);
	}

};
}
