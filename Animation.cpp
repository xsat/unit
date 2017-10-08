#include "Animation.h"

namespace unit
{

Animation::Animation(
	const sf::Time &frame_time, 
	const std::vector<sf::IntRect> &frames
) 
: Process()
, frame_time_(frame_time)
, current_time_()
, frame_()
, frames_(frames)
, current_frame_(0)
{
}

/* virtual */ Animation::~Animation()
{
}

/* virtual */ void Animation::update()
{
	if (frame_time_ > current_time_.getElapsedTime()) {
		return;
	}

	current_time_.restart();

	if (frames_.empty()) {
		return;
	}

	current_frame_++;

	if (current_frame_ >= frames_.size()) {
		current_frame_ = 0;
	}
}

const sf::IntRect &Animation::getActive() const 
{
	if (frames_.empty()) {
		return frame_;
	}

	return frames_.at(current_frame_);
}

}; // namespace unit
