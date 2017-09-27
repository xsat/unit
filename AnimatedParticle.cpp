#include "AnimatedParticle.h"

namespace unit
{

AnimatedParticle::AnimatedParticle(
	const std::string &filename, 
	const sf::Time &frame_time, 
	const std::vector<sf::IntRect> &frames
)
: Animation(frame_time, frames)
, Particle(filename, getActive())
{
}

/* virtual */ AnimatedParticle::~AnimatedParticle()
{
}

/* virtual */ void AnimatedParticle::update()
{
	Animation::update();

	sprite_->setTextureRect(getActive());
}

}; // namespace unit
