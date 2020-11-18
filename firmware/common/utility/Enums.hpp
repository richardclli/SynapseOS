#pragma once

enum class Pull
{
	None,
	WeakDown,
	WeakUp,
	Up,
	Down,
	StrongUp,
	StrongDown,
};

enum class Event
{
	Data,
	Error,
	Idle,
};

enum class ReceiverType
{
	Unknown,
	PwmPositive,
	PwmNegative,
	Sbus,
	HoTT,
	MultiplexSRXL,
	SpektrumSRXL,
	XbusModeA,
	IBus,
};

enum Channel : uint8_t {
	Aileron = 0, //
	Elevator = 1,
	Rudder = 2,
	Throttle = 3,
	Pitch_Aux0 = 4,
	Gain = 5,
	Setup = 6,
	Aux1 = 7,
	Aux2 = 8,
	Aux3 = 9,
	Aux4 = 10,
	Aux5 = 11,
};
