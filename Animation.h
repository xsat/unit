#pragma once

#include <vector>
#include <SFML\Graphics\Rect.hpp>
#include <SFML\System\Time.hpp>
#include <SFML\System\Clock.hpp>
#include "Process.h"

namespace unit
{

class Animation: public Process
{
public:
	Animation(
		const sf::Time &frame_time, 
		const std::vector<sf::IntRect> &frames
	);
	virtual ~Animation();
	virtual void update();
	const sf::IntRect &getActive() const;
private:
	sf::Time frame_time_;
	sf::Clock current_time_;
	sf::IntRect frame_;
	std::vector<sf::IntRect> frames_;
	unsigned int current_frame_;
};

}; // namespace unit
