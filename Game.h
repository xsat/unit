#pragma once

#include <vector>

#include <SFML/Graphics.hpp>
#include "Container.h"
#include "InputComponent.h"
#include "GraphicsComponent.h"
#include "AiComponent.h"
#include "PhysicsComponent.h"

#define Components std::vector<unit::Component *>

namespace unit 
{

class Game
{
public:
	Game();
	~Game();

	void run();
private:
	sf::RenderWindow *window_;
	Container *container_;
	Components *components_;
};

};
