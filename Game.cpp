#include "Game.h"

namespace unit 
{

Game::Game()
	: window_(
		new sf::RenderWindow(
			sf::VideoMode(800, 600), 
			"Default title"
		)
	)
	, container_(new Container())
	, components_(new Components())
{
	window_->setFramerateLimit(60);
}

Game::~Game()
{
	delete container_;
	delete window_;
}

void Game::run() 
{
}

};
