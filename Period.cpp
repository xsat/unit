#include "Period.h"

namespace unit
{

Period::Period(const sf::Time &frame_time)
: Process()
, frame_time_(frame_time)
, current_time_()
, active_(true)
{
}

Period::~Period()
{
}

bool Period::isActive() const {
	return active_;
}

/* virtual */ void Period::update()
{
	active_ = frame_time_ > current_time_.getElapsedTime();

	if (active_) {
		return;
	}

	current_time_.restart();
}

}; // namespace unit
