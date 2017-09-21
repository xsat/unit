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
	, components_(
		new Components({
			new InputComponent(),
			new GraphicsComponent(container_),
			new AiComponent(),
			new PhysicsComponent(container_)
		})
	)
{
	window_->setFramerateLimit(60);
}

Game::~Game()
{
	for (Component *component : *components_) {
		delete component;
	}

	delete components_;
	delete container_;
	delete window_;
}

void Game::run() 
{
	while (window_->isOpen()) {
		for (Component *component : *components_) {
			component->update(window_);
		}
	}
}

}; // namespace unit
