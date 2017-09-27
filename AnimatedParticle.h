#pragma once

#include <vector>

#include <SFML\System\Time.hpp>
#include <SFML\System\Clock.hpp>

#include "Particle.h"
#include "Process.h"

#define IntRects std::vector<sf::IntRect>

namespace unit
{

class AnimatedParticle : public Particle, public Process
{
public:
	AnimatedParticle(const std::string &filename, const sf::Time &frame_time, IntRects rects);
	virtual ~AnimatedParticle();

	virtual void update();
protected:
	sf::Time frame_time_;
	IntRects frames_;
	sf::Clock current_time_;
	int current_frame_;
};

}; // namespace unit
