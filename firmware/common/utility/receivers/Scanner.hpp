#pragma once

#include <Callback.hpp>
#include <ConditionVariable.hpp>

#include <Enums.hpp>

template<typename RxUart>
class Scanner {
public:



	Scanner(uint16_t skips, opsy::ConditionVariable& found)
		: m_counter(-skips), m_found(found)
	{

	}

	void Start()
	{
		RxUart::set(Pull::WeakDown);
		RxUart::reversePolarity(false);
		RxUart::onSwitched([&](float delta, bool wasHigh){switched(delta, wasHigh);}, true);
	}

	constexpr ReceiverType detected() const
	{
		return m_type;
	}

private:

	static constexpr float PolarityThreshold = 0.0025f; // polarity is detected at more than 2.5ms
	static constexpr float PwmThreshold = 0.00002f; // above 200us per switch, it is considered PWM signal, otherwise UART signal
	static constexpr int32_t SwitchCountForSpeed = 50;

	enum State
	{
		DetectingPolarity,
		HighPolarity,
		LowPolarity,
		UartCheck,
	};

	void switched(float delta, bool wasHigh)
	{
		if(m_counter++ < 0) // skip first switches
			return;

		switch(m_state)
		{
		case DetectingPolarity:
		{
			if(delta > PolarityThreshold)
			{
				if(wasHigh)
				{
					m_state = HighPolarity;
					RxUart::set(Pull::Up);
				}
				else
				{
					m_state = LowPolarity;
					RxUart::set(Pull::Down);
				}
				m_counter = 0;
				m_fastestSwitch = delta;
			}
			break;
		}
		case HighPolarity:
		case LowPolarity:
		{
			if(delta < m_fastestSwitch)
				m_fastestSwitch = delta;

			if(m_counter < SwitchCountForSpeed)
				break;

			RxUart::onSwitched();

			if(m_fastestSwitch > PwmThreshold) // PWM signal found
			{
				m_type = m_state == HighPolarity ? ReceiverType::PwmPositive : ReceiverType::PwmNegative;
				m_found.notify_all();
			}
			else // too fast for PWM, it must be UART
			{
				if(m_state == LowPolarity) // if fast and low polarity, it is SBUS
				{
					m_type = ReceiverType::Sbus;
					m_found.notify_all();
				}
				else // if fast and high polarity, can't say yet, start analyzing data
				{
					RxUart::onReceived([&](Event event, uint8_t byte){ byteReceived(event, byte); });
					m_state = UartCheck;
					m_counter = 1;
				}
			}
			break;
		}

		case UartCheck:
		default:
			break;
		}

	}

	void byteReceived(Event event, uint8_t byte)
	{
		switch(event)
		{
		case Event::Data:
			if(m_counter == 0)
			{
				switch(byte)
				{
				case 0xA8:
					RxUart::onReceived();
					m_type = ReceiverType::HoTT;
					m_found.notify_all();
					break;
				case 0xA1:
				case 0xA2:
					RxUart::onReceived();
					m_type = ReceiverType::MultiplexSRXL;
					m_found.notify_all();
					break;
				case 0xA5:
					RxUart::onReceived();
					m_type = ReceiverType::SpektrumSRXL;
					m_found.notify_all();
					break;
				case 0x69:
					RxUart::onReceived();
					m_type = ReceiverType::XbusModeA;
					m_found.notify_all();
					break;
				case 0x55:
				case 0x20:
					RxUart::onReceived();
					m_type = ReceiverType::IBus;
					m_found.notify_all();
				default:
					break;
				}
			}
			break;
		case Event::Error:
			m_counter = 1;
			break;
		case Event::Idle:
			m_counter = 0;
			break;
		default:
			break;
		}
	}


	int32_t m_counter;
	float m_fastestSwitch;
	State m_state = DetectingPolarity;
	ReceiverType m_type = ReceiverType::Unknown;
	opsy::ConditionVariable& m_found;

};
