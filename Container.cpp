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
	AnimatedParticle *wheel = new AnimatedParticle(
		"wheel.png", 
		sf::seconds(0.06f), 
		std::vector<sf::IntRect>({
			sf::IntRect(0, 0, 100, 100),
			sf::IntRect(100, 0, 100, 100),
			sf::IntRect(200, 0, 100, 100),
			sf::IntRect(300, 0, 100, 100)
		})
	);

	particles_->emplace_back(wheel);
	processes_->emplace_back(wheel);
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
