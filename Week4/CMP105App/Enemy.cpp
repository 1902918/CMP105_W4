#include "Enemy.h"

Enemy::Enemy()
{
	speed.x = 200;
	speed.y = 100;
}

void Enemy::update(float dt)
{
	if (getPosition().x <= 0) //if past left edge 
	{
		speed.x = abs(speed.x);
	}
	else if (getPosition().x >= window->getSize().x - getSize().x) //if past right edge
	{
		speed.x = -abs(speed.x);
	}

	if (getPosition().y <= 0) //if past top edge 
	{
		speed.y = abs(speed.y);
	}
	else if (getPosition().y >= window->getSize().y - getSize().y) //if past bottom edge
	{
		speed.y = -abs(speed.y);
	}

	move(dt * speed.x, dt * speed.y);
}
