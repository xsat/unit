#include "PhysicsComponent.h"

namespace unit
{

PhysicsComponent::PhysicsComponent(ProcessContainer *container)
	: Component()
	, container_(container)
{
}

PhysicsComponent::~PhysicsComponent()
{
}

void PhysicsComponent::update(sf::RenderWindow *window)
{
	for (Process *process : *container_->getProcesses()) {
		process->update();
	}
}

};
