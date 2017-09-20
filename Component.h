#pragma once

#include <SFML/Graphics.hpp>

namespace unit
{

class Component
{
public:
	virtual void update(sf::RenderWindow *window) = 0;
};

};
