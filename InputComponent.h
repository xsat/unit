#pragma once

#include "Component.h"

namespace unit
{

class InputComponent : public Component
{
public:
	virtual void update(sf::RenderWindow *window);
};

}; // namespace unit
