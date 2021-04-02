#pragma once

#include <array>
#include <cstdint>

#include <Enums.hpp>
#include <Channels.hpp>

template<typename RxUart, typename Manager>
class Sbus
{
public:

	Sbus(Manager& manager) : m_manager(manager)
	{

	}

	void Start()
	{
		RxUart::reversePolarity(true);
		RxUart::set(Pull::Down);
		RxUart::setSpeed(Baudrate);
		RxUart::onReceived([&](Event event, uint8_t value) { eventReceived(event, value); });
	}


private:

	void eventReceived(Event event, uint8_t value)
	{
		switch(event)
		{
		case Event::Data:
		{
			if(m_index == 0 && value != Header) // first byte should be header
				m_skip = true;

			if(!m_skip)
			{
				m_buffer >>= 8;
				m_buffer |= (value << 24);

				switch(m_index)
				{
				case 2:
					m_manager.set(Channel::Aileron, get(16));
					break;
				case 3:
					m_manager.set(Channel::Elevator, get(19));
					break;
				case 5:
					m_manager.set(Channel::Throttle, -get(14));
					break;
				case 6:
					m_manager.set(Channel::Rudder, get(17));
					break;
				case 7:
					m_manager.set(Channel::Gain, get(20) * GainFactor);
					break;
				case 9:
					m_manager.set(Channel::Pitch_Aux0, -get(15));
					break;
				case 10:
					m_manager.set(Channel::Setup, get(18));
					break;
				case 11:
					m_manager.set(Channel::Aux1, get(21));
					break;
				case 13:
					m_manager.set(Channel::Aux2, get(16));
					break;
				case 14:
					m_manager.set(Channel::Aux3, get(19));
					break;
				case 16:
					m_manager.set(Channel::Aux4, get(14));
					break;
				case 17:
					m_manager.set(Channel::Aux5, get(17));
					break;
				default:
					break;
				}
			}

			m_index++;
			break;
		}
		case Event::Error:
			m_skip = true;
			break;
		case Event::Idle:
			m_skip = false;
			m_index = 0;
			break;
		default:
			break;
		}
	}

	float get(uint8_t shift)
	{
		auto ticks = static_cast<int32_t>((m_buffer >> shift) & Mask);
		return static_cast<float>(ticks - Center) * Ratio;
	}

	static constexpr uint32_t Baudrate = 100000;
	static constexpr uint8_t Header = 0x0F;
	static constexpr uint32_t Mask = 0x7FF;
	static constexpr int32_t Center = 992;
	static constexpr float Ratio = 1.f / 670.f;
	static constexpr float GainFactor = 1.f / 1.19f;

	Manager& m_manager;
	uint32_t m_buffer = 0;
	uint32_t m_index = 0;
	bool m_skip = true;
};
