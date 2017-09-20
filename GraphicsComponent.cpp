#include "GraphicsComponent.h"

namespace unit
{

GraphicsComponent::GraphicsComponent(ParticleContainer *container)
	: Component()
	, container_(container)
{
}

GraphicsComponent::~GraphicsComponent()
{
}

/* virtual */ void GraphicsComponent::update(sf::RenderWindow *window)
{
	window->clear();
	window->display();
}

};
