#pragma once

#include <SFML/Graphics.hpp>

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
};

};
