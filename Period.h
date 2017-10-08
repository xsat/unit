#pragma once

#include <SFML\System\Time.hpp>
#include <SFML\System\Clock.hpp>
#include "Process.h"

namespace unit
{

class Period : public Process
{
public:
	Period(const sf::Time &frame_time);
	~Period();
	virtual void update();
protected:
	bool isActive() const;
private:
	sf::Time frame_time_;
	sf::Clock current_time_;

	bool active_;
};

}; // namespace unit
