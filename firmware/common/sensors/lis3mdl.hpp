#pragma once

#include <opsy.hpp>
#include <IsrPriority.hpp>

#include <Vector.hpp>

template<typename TSpi>
class lis3mdl {
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
		WhoAmI = 0x0F, //
				CtrlReg1 = 0x20,
				CtrlReg2 = 0x21,
				CtrlReg3 = 0x22,
				CtrlReg4 = 0x23,
				CtrlReg5 = 0x24,
				StatusReg = 0x27,
				OutXL = 0x28,
				OutXH = 0x29,
				OutYL = 0x2A,
				OutYH = 0x2B,
				OutZL = 0x2C,
				OutZH = 0x2D,
				TempOutL = 0x2E,
				TempOutH = 0x2F,
				IntCfg = 0x30,
				IntSrc = 0x31,
				IntThsL = 0x32,
				IntThsH = 0x3,
	};

	static constexpr uint8_t ReadFlag = 0x80;
	static constexpr uint32_t MaxSpeed = 10000000; // Max SPI speed is 10MHz for all operations
	static constexpr uint8_t WhoAmIValue = 0x3D;

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
