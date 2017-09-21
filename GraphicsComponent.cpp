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

	for (sf::Drawable *drawable : *container_->getParticles()) {
		window->draw(*drawable);
	}

	window->display();
}

}; // namespace unit
