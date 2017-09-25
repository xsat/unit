#include "Container.h"

namespace unit
{

Container::Container()
	: ParticleContainer()
	, ProcessContainer()
	, particles_(new Particles(
		{
			new Particle("red.png", sf::IntRect(0, 0, 100, 100))
		}
	))
	, processes_(new Processes())
{
}

Container::~Container()
{
	delete processes_;
	delete particles_;
}

/* virtual */ const Particles *Container::getParticles() const {
	return particles_;
}

/* virtual */ const Processes *Container::getProcesses() const {
	return processes_;
}

}; // namespace unit
