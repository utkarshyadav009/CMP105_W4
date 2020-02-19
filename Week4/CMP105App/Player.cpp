#include "Player.h"

void Player::handleInput(float dt)
{
	
	if (input->isKeyDown(sf::Keyboard::W))
	{
		move(sf::Vector2f(0, -velocity.y) * dt);
		
	}
	if (input->isKeyDown(sf::Keyboard::S))

	{
		move(sf::Vector2f(0, velocity.y) * dt);
	}
	if (input->isKeyDown(sf::Keyboard::D))
	{
		move(sf::Vector2f(velocity.x, 0) * dt);
		
		
	}
	if (input->isKeyDown(sf::Keyboard::A))
	{
		move(sf::Vector2f(- velocity.x, 0) * dt);
	}
}
