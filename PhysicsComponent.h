#pragma once

#include "Component.h"
#include "ProcessContainer.h"

namespace unit
{

class PhysicsComponent : public Component
{
public:
	PhysicsComponent(ProcessContainer *container);
	~PhysicsComponent();

	virtual void update(sf::RenderWindow *window);
private:
	ProcessContainer *container_;
};

};
