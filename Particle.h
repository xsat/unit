#pragma once

#include <SFML\Graphics\RenderTarget.hpp>
#include <SFML\Graphics\Drawable.hpp>
#include <SFML\Graphics\Texture.hpp>
#include <SFML\Graphics\Sprite.hpp>
#include <SFML\System\String.hpp>

namespace unit
{

class Particle : public sf::Drawable
{
	Particle(const sf::String &filename, const sf::IntRect &area = sf::IntRect());
	virtual ~Particle();
protected:
	virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const;

	sf::Texture *texture_;
	sf::Sprite *sprite_;
};

}; // namespace unit
