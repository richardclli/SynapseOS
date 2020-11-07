#pragma once

#include <opsy.hpp>
#include <IsrPriority.hpp>

#include <Vector.hpp>

template<typename TSpi>
class lsm6dso32 {
public:

	static bool init(opsy::IsrPriority priority) {
		TSpi::init(priority);
		TSpi::setSpeed(MaxSpeed);

		if(getRegister(WhoAmI) != WhoAmIValue)
			return false;

		return true;
	}

private:

	enum Reg : uint8_t {
		FuncCfgAccess = 0x01, //
		PinCtrl = 0x02,
		FifoCtrl1 = 0x07,
		FifoCtrl2 = 0x08,
		FifoCtrl3 = 0x09,
		FifoCtrl4 = 0x0A,
		CounterBdrReg1 = 0x0B,
		CounterBdrReg2 = 0x0C,
		Int1Ctrl = 0x0D,
		Int2Ctrl = 0x0E,
		WhoAmI = 0x0F,
		Ctrl1Xl = 0x10,
		Ctrl2G = 0x11,
		Ctrl3C = 0x12,
		Ctrl4C = 0x13,
		Ctrl5C = 0x14,
		Ctrl6C = 0x15,
		Ctrl7G = 0x16,
		Ctrl8Xl = 0x17,
		Ctrl9Xl = 0x18,
		Ctrl10C = 0x19,
		AllIntSrc = 0x1A,
		WakeUpSrc = 0x1B,
		TapSrc = 0x1C,
		D6dSrc = 0x1D,
		StatusReg = 0x1E,
		OutTempL = 0x20,
		OutTempH = 0x21,
		OutXLG = 0x22,
		OutXHG = 0x23,
		OutYLG = 0x24,
		OutYHG = 0x25,
		OutZLG = 0x26,
		OutZHG = 0x27,
		OutXLA = 0x28,
		OutXHA = 0x29,
		OutYLA = 0x2A,
		OutYHA = 0x2B,
		OutZLA = 0x2C,
		OutZHA = 0x2D,
		EmbFuncStatusMainpage = 0x35,
		FsmStatusAMainpage = 0x36,
		FsmStatusBMainpage = 0x37,
		StatusMasterMainpage = 0x39,
		FifoStatus1 = 0x3A,
		FifoStatus2 = 0x3B,
		Timestamp0 = 0x40,
		Timestamp1 = 0x41,
		Timestamp2 = 0x42,
		Timestamp3 = 0x43,
		TapCfg0 = 0x56,
		TapCfg1 = 0x57,
		TapCfg2 = 0x58,
		TapThs6D = 0x59,
		IntDur2 = 0x5A,
		WakeUpThs = 0x5B,
		WakeUpDur = 0x5C,
		FreeFall = 0x5D,
		Md1Cfg = 0x5E,
		Md2Cfg = 0x5F,
		I3cBusAvb = 0x62,
		InternalFreqFine = 0x63,
		XOfsUsr = 0x73,
		YOfsUsr = 0x74,
		ZOfsUsr = 0x75,
		FifoDataOutTag = 0x78,
		FifoDataOutXL = 0x79,
		FifoDataOutXH = 0x7A,
		FifoDataOutYL = 0x7B,
		FifoDataOutYH = 0x7C,
		FifoDataOutZL = 0x7D,
		FifoDataOutZH = 0x7E,
	};

	static constexpr uint8_t ReadFlag = 0x80;
	static constexpr uint32_t MaxSpeed = 10000000; // Max SPI speed is 10MHz for all operations
	static constexpr uint8_t WhoAmIValue = 0x6C;

	static uint8_t getRegister(Reg reg) {
		const std::array<uint8_t, 2> txBuffer {
				static_cast<uint8_t>(static_cast<uint8_t>(reg) | ReadFlag), 0 };
		std::array<uint8_t, 2> rxBuffer;
		TSpi::transfer(txBuffer.data(), rxBuffer.data(), txBuffer.size());
		return rxBuffer[1];
	}

	static void setRegister(Reg reg, uint8_t value) {
		const std::array<uint8_t, 2> txBuffer { static_cast<uint8_t>(reg), value };
		TSpi::transfer(txBuffer.data(), nullptr, txBuffer.size());
	}
};
