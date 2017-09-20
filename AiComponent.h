#pragma once

#include "Component.h"

namespace unit
{

class AiComponent : public Component
{
public:
	virtual void update(sf::RenderWindow *window);
};

};
