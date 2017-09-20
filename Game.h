#pragma once

#include <SFML/Graphics.hpp>
#include "Container.h"

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
};

};
