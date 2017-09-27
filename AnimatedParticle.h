#pragma once

#include <SFML\System\Time.hpp>
#include <SFML\System\Clock.hpp>

#include "Animation.h"
#include "Particle.h"

namespace unit
{

class AnimatedParticle : public Animation, public Particle
{
public:
	AnimatedParticle(
		const std::string &filename, 
		const sf::Time &frame_time, 
		const std::vector<sf::IntRect> &frames
	);
	virtual ~AnimatedParticle();
	virtual void update();
};

}; // namespace unit
