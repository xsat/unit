#pragma once

#include "ParticleContainer.h"
#include "ProcessContainer.h"
#include "AnimatedParticle.h"

namespace unit
{

class Container 
	: public ParticleContainer
	, public ProcessContainer
{
public:
	Container();
	~Container();

	virtual const Particles *getParticles() const;
	virtual const Processes *getProcesses() const;
private:
	Particles *particles_;
	Processes *processes_;
};

}; // namespace unit
