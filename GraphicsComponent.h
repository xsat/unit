#pragma once

#include "Component.h"
#include "ParticleContainer.h"

namespace unit
{

class GraphicsComponent : public Component
{
public:
	GraphicsComponent(ParticleContainer *container);
	~GraphicsComponent();

	virtual void update(sf::RenderWindow *window);
private:
	ParticleContainer *container_;
};

}; // namespace unit
