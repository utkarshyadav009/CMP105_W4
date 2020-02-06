#include "Enemy.h"
void Enemy::update(float dt)
{
	move(velocity * dt);
	if (getPosition().x + getSize().x >= window->getSize().x || getPosition().x < 0)
	{
		velocity.x = -velocity.x;

	}
	if (getPosition().y + getSize().y >= window->getSize().y || getPosition().y < 0)

	{

		velocity.y = -velocity.y;

	}

	
}