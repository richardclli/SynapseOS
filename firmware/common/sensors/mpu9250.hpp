#pragma once

#include <array>
#include <cstdint>
#include <chrono>
#include <math.h>

#include <IsrPriority.hpp>
#include <opsy.hpp>
#include <PriorityMutex.hpp>

#include <Vector.hpp>

using namespace std::chrono_literals;

enum class GyroRange : uint8_t
{
	r250 = 0b00, // 250°/s range
	r500 = 0b01, // 500°/s range
	r1000 = 0b10, // 1000°/s range
	r2000 = 0b11, // 2000°/s range
};

enum class GyroFilterOdr : uint8_t
{
	lp8800_32k = 0b11000, // 8800Hz bandwidth, 32KHz sample rate
	lp3600_32k = 0b10000, // 3600Hz bandwidth, 32KHz sample rate
	lp250_8k = 0b00000, // 250Hz bandwidth, 8KHz sample rate
	lp184_1k = 0b00001, // 184Hz bandwidth, 1KHz sample rate
	lp92_1k = 0b00010, // 92Hz bandwidth, 1KHz sample rate
	lp41_1k = 0b00011, // 41Hz bandwidth, 1KHz sample rate
	lp20_1k = 0b00100, // 20Hz bandwidth, 1KHz sample rate
	lp10_1k = 0b00101, // 10Hz bandwidth, 1KHz sample rate
	lp5_1k = 0b00110, // 5Hz bandwidth, 1KHz sample rate
	lp3600_8k = 0b00111, // 3600Hz bandwidth, 8KHz sample rate
};

enum class AccelRange : uint8_t
{
	r2 = 0b00, // 2G range
	r4 = 0b01, // 4G range
	r8 = 0b10, // 8G range
	r16 = 0b11, // 16G range
};

enum class AccelFilterOdr : uint8_t
{
	lp1130_4k = 0b1000, // 1130Hz bandwidth, 4KHz sample rate
	lp460_1k = 0b0000, // 460Hz bandwidth, 1KHz sample rate
	lp184_1k = 0b0001, // 184Hz bandwidth, 1KHz sample rate
	lp92_1k = 0b0010, // 92Hz bandwidth, 1KHz sample rate
	lp41_1k = 0b0011, // 41Hz bandwidth, 1KHz sample rate
	lp20_1k = 0b0100, // 20Hz bandwidth, 1KHz sample rate
	lp10_1k = 0b0101, // 10Hz bandwidth, 1KHz sample rate
	lp5_1k = 0b0110, // 5Hz bandwidth, 1KHz sample rate
};

enum class StatusClear
{
	latched,
	any_read,
	status_read
};

struct SixAxisData
{
	Vector<3> gyro;
	float temp = 0.f;
	Vector<3> accel;
};

struct NineAxisData
{
	Vector<3> gyro;
	float temp = 0.f;
	Vector<3> accel;
	Vector<3> compass;
};


template<typename TSpi>
class mpu9250
{
public:

	static bool init(opsy::IsrPriority priority)
	{
		TSpi::init(priority);

		setRegister(PwrMgmt1, 0b10000000); // do a full reset
		opsy::sleep_for(100ms);
		setRegister(PwrMgmt1, 1); // select best clock
		setRegister(PwrMgmt2, 0b00111111); // disable gyro and accel
		setRegister(UserCtrl, 0b00110000); // disable I2C slave interface, enable master I2C interface
		setRegister(I2CMstDelayCtrl, 1);
		setRegister(I2CMstCtrl, 0b00001101); // 400KHz I2C speed

		return (getRegister(WhoAmI) == MpuWhoAmI) && (getCompassRegister(Wia) == CompassWhoAmI);
	}

	template<typename TExti>
	static bool selfTest(opsy::IsrPriority priority)
	{
		if(!init(priority))
			return false;

		setGyro(GyroRange::r250, GyroFilterOdr::lp92_1k, 0);
		setAccel(AccelRange::r2, AccelFilterOdr::lp92_1k);
		setIntPin(false, false, StatusClear::latched, true);
		TExti::configure(true, false, priority);

		SixAxisData before;

		for(auto count = 0U; count < 200; ++count)
		{
			TExti::trigger().wait();
			auto data = getSixAxis(GyroRange::r250, AccelRange::r2);

			before.accel += data.accel;
			before.gyro += data.gyro;
			before.temp += data.temp;
		}

		before.accel *= 0.005f;
		before.gyro *= 0.005f;
		before.temp *= 0.005f;


		setRegister(GyroConfig, getRegister(GyroConfig) | 0b11100000);
		setRegister(AccelConfig, getRegister(AccelConfig) | 0b11100000);
		opsy::sleep_for(20ms);

		SixAxisData after;

		for(auto count = 0U; count < 200; ++count)
		{
			TExti::trigger().wait();
			auto data = getSixAxis(GyroRange::r250, AccelRange::r2);

			after.accel += data.accel;
			after.gyro += data.gyro;
			after.temp += data.temp;
		}

		after.accel *= 0.005f;
		after.gyro *= 0.005f;
		after.temp *= 0.005f;

		setRegister(GyroConfig, getRegister(GyroConfig) & 0b00011111);
		setRegister(AccelConfig, getRegister(AccelConfig) & 0b00011111);
		opsy::sleep_for(20ms);

		const Vector<3> gyroSt { trim(getRegister(SelfTestXGyro))* gyroRatio(GyroRange::r250), trim(getRegister(SelfTestYGyro))* gyroRatio(GyroRange::r250), trim(getRegister(SelfTestZGyro)) * gyroRatio(GyroRange::r250) };
		const Vector<3> accelSt { trim(getRegister(SelfTestXAccel))* accelRatio(AccelRange::r2), trim(getRegister(SelfTestYAccel)) * accelRatio(AccelRange::r2), trim(getRegister(SelfTestZAccel)) * accelRatio(AccelRange::r2) };

		const auto gyroDelta = after.gyro - before.gyro;
		const auto accelDelta = after.accel - before.accel;

		TExti::configure(false, false, priority);

		return
				std::abs(gyroDelta.x() / gyroSt.x()) > .5f &&
				std::abs(gyroDelta.y() / gyroSt.y()) > .5f &&
				std::abs(gyroDelta.z() / gyroSt.z()) > .5f &&
				std::abs(accelDelta.x() / accelSt.x()) > .5f &&
				std::abs(accelDelta.y() / accelSt.y()) > .5f &&
				std::abs(accelDelta.z() / accelSt.z()) > .5f &&
				std::abs(accelDelta.x() / accelSt.x()) < 1.5f &&
				std::abs(accelDelta.y() / accelSt.y()) < 1.5f &&
				std::abs(accelDelta.z() / accelSt.z()) < 1.5f;
	}

	static float setGyro(GyroRange range, GyroFilterOdr config, uint8_t divider = 0)
	{
		setRegister(GyroConfig, static_cast<uint8_t>(static_cast<uint8_t>(range) << 3) | static_cast<uint8_t>(static_cast<uint8_t>(config) >> 3)); // set gyro range and f_choice
		setRegister(Config, static_cast<uint8_t>(config) & 0b111); // no FIFO, no FSYNC, and set low pass filter and rate
		setRegister(SmplrtDiv, divider);
		setRegister(PwrMgmt2, getRegister(PwrMgmt2) & 0b00111000);
		return sampleFrequency(config, divider);
	}

	static void setAccel(AccelRange range, AccelFilterOdr config)
	{
		setRegister(AccelConfig, static_cast<uint8_t>(static_cast<uint8_t>(range) << 3)); // set accel range
		setRegister(AccelConfig2, static_cast<uint8_t>(config) & 0b1111); // set accel low pass filter and rate
		setRegister(PwrMgmt2, getRegister(PwrMgmt2) & 0b00000111);
	}

	static void setIntPin(bool activeLow, bool openDrain, StatusClear clearMethod, bool enable)
	{
		setRegister(IntPinCfg, static_cast<uint8_t>((activeLow ? 0b10000000 : 0) | (openDrain ? 0b01000000 : 0) | (clearMethod != StatusClear::latched ? 0b00100000 : 0) | (clearMethod == StatusClear::any_read ? 0b00010000 : 0)));
		if(enable)
		{
			getRegister(IntStatus);
			setRegister(IntEnable, 1);
		}
		else
			setRegister(IntEnable, 0);
	}

	static Vector<3> initCompass(float gyroSampleFrequency)
	{
		setCompassRegister(Cntl, 0);
		setCompassRegister(Cntl, 0xF);
		Vector<3> result
		{
			compassRatio(getCompassRegister(AsaX)),
			compassRatio(getCompassRegister(AsaY)),
			compassRatio(getCompassRegister(AsaZ))
		};
		setCompassRegister(Cntl, 0);
		setCompassRegister(Cntl, 0b0110); // continuous mode at 100Hz

		auto divider = static_cast<uint8_t>(gyroSampleFrequency / 100.f);
		if(divider > 1) divider--;
		if(divider > 0b11111) divider = 0b11111;
		setRegister(I2CSlv4Ctrl, divider);

		const std::array<uint8_t, 4> txBuffer
		{
			static_cast<uint8_t>(I2CSlv0Addr),
			CompassAddress | ReadFlag,
			static_cast<uint8_t>(HxL),
			ReadFlag | 7
		};

		TSpi::transfer(txBuffer.data(), nullptr, txBuffer.size());
		return result;
	}

	static Vector<3> getGyro(GyroRange range)
	{
		const float ratio = gyroRatio(range);
		TSpi::setSpeed(MaxReadSpeed);
		const std::array<uint8_t, 7> txBuffer{static_cast<uint8_t>(static_cast<uint8_t>(GyroXOutH) | ReadFlag)};
		std::array<uint8_t, 7> rxBuffer;
		TSpi::transfer(txBuffer.data(), rxBuffer.data(), txBuffer.size());

		return Vector<3>
		{
			static_cast<int16_t>((static_cast<uint16_t>(rxBuffer[1]) << 8) | rxBuffer[2]) * ratio,
			static_cast<int16_t>((static_cast<uint16_t>(rxBuffer[3]) << 8) | rxBuffer[4]) * ratio,
			static_cast<int16_t>((static_cast<uint16_t>(rxBuffer[5]) << 8) | rxBuffer[6]) * ratio
		};
	}

	static Vector<3> getAccel(AccelRange range)
	{
		const float ratio = accelRatio(range);
		TSpi::setSpeed(MaxReadSpeed);
		const std::array<uint8_t, 7> txBuffer{static_cast<uint8_t>(static_cast<uint8_t>(AccelXOutH) | ReadFlag)};
		std::array<uint8_t, 7> rxBuffer;
		TSpi::transfer(txBuffer.data(), rxBuffer.data(), txBuffer.size());

		return Vector<3>
		{
			static_cast<int16_t>((static_cast<uint16_t>(rxBuffer[1]) << 8) | rxBuffer[2]) * ratio,
			static_cast<int16_t>((static_cast<uint16_t>(rxBuffer[3]) << 8) | rxBuffer[4]) * ratio,
			static_cast<int16_t>((static_cast<uint16_t>(rxBuffer[5]) << 8) | rxBuffer[6]) * ratio
		};
	}

	static SixAxisData getSixAxis(GyroRange gyro, AccelRange accel)
	{
		const float gyror = gyroRatio(gyro);
		const float accelr = accelRatio(accel);
		TSpi::setSpeed(MaxReadSpeed);
		const std::array<uint8_t, 15> txBuffer{static_cast<uint8_t>(static_cast<uint8_t>(AccelXOutH) | ReadFlag)};
		std::array<uint8_t, 15> rxBuffer;
		TSpi::transfer(txBuffer.data(), rxBuffer.data(), txBuffer.size());

		SixAxisData result;

		result.accel = Vector<3>
		{
			static_cast<int16_t>((static_cast<uint16_t>(rxBuffer[1]) << 8) | rxBuffer[2]) * accelr,
			static_cast<int16_t>((static_cast<uint16_t>(rxBuffer[3]) << 8) | rxBuffer[4]) * accelr,
			static_cast<int16_t>((static_cast<uint16_t>(rxBuffer[5]) << 8) | rxBuffer[6]) * accelr
		};
		result.temp = temperatureCalc(static_cast<int16_t>((static_cast<uint16_t>(rxBuffer[7]) << 8) | rxBuffer[8]));
		result.gyro = Vector<3>
		{
			static_cast<int16_t>((static_cast<uint16_t>(rxBuffer[ 9]) << 8) | rxBuffer[10]) * gyror,
			static_cast<int16_t>((static_cast<uint16_t>(rxBuffer[11]) << 8) | rxBuffer[12]) * gyror,
			static_cast<int16_t>((static_cast<uint16_t>(rxBuffer[13]) << 8) | rxBuffer[14]) * gyror
		};

		return result;
	}

	static NineAxisData getNineAxis(GyroRange gyro, AccelRange accel, const Vector<3>& compassCalib)
	{
		const float gyror = gyroRatio(gyro);
		const float accelr = accelRatio(accel);
		TSpi::setSpeed(MaxReadSpeed);
		const std::array<uint8_t, 21> txBuffer{static_cast<uint8_t>(static_cast<uint8_t>(AccelXOutH) | ReadFlag)};
		std::array<uint8_t, 21> rxBuffer;
		TSpi::transfer(txBuffer.data(), rxBuffer.data(), txBuffer.size());

		NineAxisData result;

		result.accel = Vector<3>
		{
			static_cast<int16_t>((static_cast<uint16_t>(rxBuffer[1]) << 8) | rxBuffer[2]) * accelr,
			static_cast<int16_t>((static_cast<uint16_t>(rxBuffer[3]) << 8) | rxBuffer[4]) * accelr,
			static_cast<int16_t>((static_cast<uint16_t>(rxBuffer[5]) << 8) | rxBuffer[6]) * accelr
		};
		result.temp = temperatureCalc(static_cast<int16_t>((static_cast<uint16_t>(rxBuffer[7]) << 8) | rxBuffer[8]));
		result.gyro = Vector<3>
		{
			static_cast<int16_t>((static_cast<uint16_t>(rxBuffer[ 9]) << 8) | rxBuffer[10]) * gyror,
			static_cast<int16_t>((static_cast<uint16_t>(rxBuffer[11]) << 8) | rxBuffer[12]) * gyror,
			static_cast<int16_t>((static_cast<uint16_t>(rxBuffer[13]) << 8) | rxBuffer[14]) * gyror
		};
		result.compass = Vector<3>
		{
			static_cast<int16_t>((static_cast<uint16_t>(rxBuffer[18]) << 8) | rxBuffer[17]) * compassCalib.y(),
			static_cast<int16_t>((static_cast<uint16_t>(rxBuffer[16]) << 8) | rxBuffer[15]) * compassCalib.x(),
			static_cast<int16_t>((static_cast<uint16_t>(rxBuffer[20]) << 8) | rxBuffer[19]) * compassCalib.z()
		};

		return result;
	}


private:

	enum Reg : uint8_t
	{
		SelfTestXGyro = 0, //
		SelfTestYGyro = 1,
		SelfTestZGyro = 2,
		SelfTestXAccel = 13,
		SelfTestYAccel = 14,
		SelfTestZAccel = 15,
		XgOffsetH = 19,
		XgOffsetL = 20,
		YgOffsetH = 21,
		YgOffsetL = 22,
		ZgOffsetH = 23,
		ZgOffsetL = 24,
		SmplrtDiv = 25,
		Config = 26,
		GyroConfig = 27,
		AccelConfig = 28,
		AccelConfig2 = 29,
		LpAccelOdr = 30,
		WomThr = 31,
		FifoEn = 35,
		I2CMstCtrl = 36,
		I2CSlv0Addr = 37,
		I2CSlv0Reg = 38,
		I2CSlv0Ctrl = 39,
		I2CSlv1Addr = 40,
		I2CSlv1Reg = 41,
		I2CSlv1Ctrl = 42,
		I2CSlv2Addr = 43,
		I2CSlv2Reg = 44,
		I2CSlv2Ctrl = 45,
		I2CSlv3Addr = 46,
		I2CSlv3Reg = 47,
		I2CSlv3Ctrl = 48,
		I2CSlv4Addr = 49,
		I2CSlv4Reg = 50,
		I2CSlv4Do = 51,
		I2CSlv4Ctrl = 52,
		I2CSlv4Di = 53,
		I2CMstStatus = 54,
		IntPinCfg = 55,
		IntEnable = 56,
		IntStatus = 58,
		AccelXOutH = 59,
		AccelXOutL = 60,
		AccelYOutH = 61,
		AccelYOutL = 62,
		AccelZOutH = 63,
		AccelZOutL = 64,
		TempOutH = 65,
		TempOutL = 66,
		GyroXOutH = 67,
		GyroXOutL = 68,
		GyroYOutH = 69,
		GyroYOutL = 70,
		GyroZOutH = 71,
		GyroZOutL = 72,
		ExtSensData00 = 73,
		ExtSensData01 = 74,
		ExtSensData02 = 75,
		ExtSensData03 = 76,
		ExtSensData04 = 77,
		ExtSensData05 = 78,
		ExtSensData06 = 79,
		ExtSensData07 = 80,
		ExtSensData08 = 81,
		ExtSensData09 = 82,
		ExtSensData10 = 83,
		ExtSensData11 = 84,
		ExtSensData12 = 85,
		ExtSensData13 = 86,
		ExtSensData14 = 87,
		ExtSensData15 = 88,
		ExtSensData16 = 89,
		ExtSensData17 = 90,
		ExtSensData18 = 91,
		ExtSensData19 = 92,
		ExtSensData20 = 93,
		ExtSensData21 = 94,
		ExtSensData22 = 95,
		ExtSensData23 = 96,
		I2CSlv0Do = 99,
		I2CSlv1Do = 100,
		I2CSlv2Do = 101,
		I2CSlv3Do = 102,
		I2CMstDelayCtrl = 103,
		SignalPathReset = 104,
		MotDetectCtrl = 105,
		UserCtrl = 106,
		PwrMgmt1 = 107,
		PwrMgmt2 = 108,
		FifoCountH = 114,
		FifoCountL = 115,
		FifoRW = 116,
		WhoAmI = 117,
		XaOffsetH = 119,
		XaOffsetL = 120,
		YaOffsetH = 122,
		YaOffsetL = 123,
		ZaOffsetH = 125,
		ZaOffsetL = 126,
	};

	enum CompassReg : uint8_t
	{
		Wia = 0x00, //
		Info = 0x01,
		St1 = 0x02,
		HxL = 0x03,
		HxH = 0x04,
		HyL = 0x05,
		HyH = 0x06,
		HzL = 0x07,
		HzH = 0x08,
		St2 = 0x09,
		Cntl = 0x0A,
		Astc = 0x0C,
		I2CDis = 0x0F,
		AsaX = 0x10,
		AsaY = 0x11,
		AsaZ = 0x12,
	};

	static constexpr uint8_t ReadFlag = 0x80;
	static constexpr uint8_t CompassAddress = 0x0C; // internal compass address
	static constexpr uint32_t MaxConfigurationSpeed = 1000000;
	static constexpr uint32_t MaxReadSpeed = 20000000;
	static constexpr uint8_t MpuWhoAmI = 0x71;
	static constexpr uint8_t CompassWhoAmI = 0x48;
	static constexpr float CompassRatio = 0.6f;

	static uint8_t getRegister(Reg reg)
	{
		TSpi::setSpeed(MaxConfigurationSpeed);
		const std::array<uint8_t, 2> txBuffer
		{ static_cast<uint8_t>(static_cast<uint8_t>(reg) | ReadFlag), 0 };
		std::array<uint8_t, 2> rxBuffer;
		TSpi::transfer(txBuffer.data(), rxBuffer.data(), txBuffer.size());
		return rxBuffer[1];
	}

	static void setRegister(Reg reg, uint8_t value)
	{
		TSpi::setSpeed(MaxConfigurationSpeed);
		const std::array<uint8_t, 2> txBuffer
		{ static_cast<uint8_t>(reg), value };
		TSpi::transfer(txBuffer.data(), nullptr, txBuffer.size());
	}

	static uint8_t getCompassRegister(CompassReg reg)
	{
		TSpi::setSpeed(MaxConfigurationSpeed);
		const std::array<uint8_t, 5> txBuffer
		{ static_cast<uint8_t>(I2CSlv4Addr), CompassAddress | ReadFlag, static_cast<uint8_t>(reg), 0, ReadFlag };
		TSpi::transfer(txBuffer.data(), nullptr, txBuffer.size());

		while ((getRegister(I2CMstStatus) & 0x40) == 0)
			;
		setRegister(I2CMstStatus, 0);
		return getRegister(I2CSlv4Di);
	}

	static void setCompassRegister(CompassReg reg, uint8_t value)
	{
		TSpi::setSpeed(MaxConfigurationSpeed);
		const std::array<uint8_t, 5> txBuffer
		{ static_cast<uint8_t>(I2CSlv4Addr), CompassAddress, static_cast<uint8_t>(reg), value, ReadFlag };
		TSpi::transfer(txBuffer.data(), nullptr, txBuffer.size());

		while ((getRegister(I2CMstStatus) & 0x40) == 0)
			;
		setRegister(I2CMstStatus, 0);
	}

	static constexpr float sampleFrequency(GyroFilterOdr config, uint8_t divider)
	{
		switch (config)
		{
		case GyroFilterOdr::lp3600_32k:
		case GyroFilterOdr::lp8800_32k:
			return 32000.f;
		case GyroFilterOdr::lp3600_8k:
		case GyroFilterOdr::lp250_8k:
			return 8000.f;
		case GyroFilterOdr::lp184_1k:
		case GyroFilterOdr::lp92_1k:
		case GyroFilterOdr::lp41_1k:
		case GyroFilterOdr::lp20_1k:
		case GyroFilterOdr::lp10_1k:
		case GyroFilterOdr::lp5_1k:
			return 1000.f / (divider + 1.f);
		default:
			return 0.f;
		}
	}

	static constexpr float compassRatio(uint8_t value)
	{
		return CompassRatio * (((static_cast<float>(value) - 128.f) / 256.f) + 1.f);
	}

	static constexpr float gyroRatio(GyroRange range)
	{
		switch (range)
		{
		case GyroRange::r250:
			return 1.f / 131.f;
		case GyroRange::r500:
			return 1.f / 65.5f;
		case GyroRange::r1000:
			return 1.f / 32.8f;
		case GyroRange::r2000:
			return 1.f / 16.4f;
		default:
			return 0.f;
		}
	}

	static constexpr float accelRatio(AccelRange range)
	{
		switch (range)
		{
		case AccelRange::r2:
			return 1.f / 16384.f;
		case AccelRange::r4:
			return 1.f / 8192.f;
		case AccelRange::r8:
			return 1.f / 4096.f;
		case AccelRange::r16:
			return 1.f / 2048.f;
		default:
			return 0.f;
		}
	}

	static constexpr float temperatureCalc(int16_t value)
	{
		return static_cast<float>(value) / 333.87f + 21.f;
	}

	static constexpr float trim(uint8_t value)
	{
		return 2620.f * std::pow(1.01f, static_cast<float>(value) - 1.f);
	}

};
