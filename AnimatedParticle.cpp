#include "AnimatedParticle.h"

namespace unit
{

AnimatedParticle::AnimatedParticle(const std::string &filename, const sf::Time &frame_time, const IntRects &rects)
	: Particle(filename)
	, Process()
	, frame_time_(frame_time)
	, current_frame_(0)
	, current_time_()
	, frames_(rects)
{
}

/* virtual */ AnimatedParticle::~AnimatedParticle()
{
}

/* virtual */ void AnimatedParticle::update()
{
	if (frame_time_ > current_time_.getElapsedTime()) {
		return;
	}

	current_time_.restart();
	current_frame_++;

	/*if (current_frame_ >= frames_.size()) {
		current_frame_ = 0;
	}*/

	//sprite_->setTextureRect(frames_.at(current_frame_));
}

}; // namespace unit
