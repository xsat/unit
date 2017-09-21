#include "Container.h"

namespace unit
{

Container::Container()
	: ParticleContainer()
	, ProcessContainer()
	, particles_(new Particles())
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
