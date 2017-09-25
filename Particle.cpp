#include "Particle.h"

namespace unit
{

Particle::Particle(const std::string &filename, const sf::IntRect &area)
	: Drawable()
	, texture_(new sf::Texture())
	, sprite_(new sf::Sprite())
{
	if (texture_->loadFromFile(filename, area)) {
		texture_->setRepeated(true);
		sprite_->setTexture(*texture_);
		sprite_->setTextureRect(area);
	}
}

/* virtual */ Particle::~Particle() 
{
	delete sprite_;
	delete texture_;
}

/* virtual */ void Particle::draw(sf::RenderTarget &target, sf::RenderStates states) const 
{
	target.draw(*sprite_, states);
}

}; // namespace unit
