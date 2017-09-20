#pragma once

#include <vector>
#include "Particle.h"

#define Particles std::vector<unit::Particle *>

namespace unit
{

class ParticleContainer
{
public:
	virtual const Particles *getParticles() const = 0;
};

};
