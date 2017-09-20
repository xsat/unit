#include "InputComponent.h"

namespace unit
{

/* virtual */ void InputComponent::update(sf::RenderWindow *window)
{
	sf::Event event;

	while (window->pollEvent(event)) {
		if (event.type == sf::Event::Closed) {
			window->close();
		}
	}
}

};
