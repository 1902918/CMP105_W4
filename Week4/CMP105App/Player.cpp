#include "Player.h"

Player::Player() 
{
	speed = 200;
}

void Player::handleInput(float dt)
{
	if (input->isKeyDown(sf::Keyboard::W) && getPosition().y > 0)
	{
		move(0, dt * -speed); //Move Up
	}
	else if (input->isKeyDown(sf::Keyboard::A) && getPosition().x > 0)
	{
		move(dt * -speed, 0); //Move Left
	}
	else if (input->isKeyDown(sf::Keyboard::S) && getPosition().y < window->getSize().y - getSize().y)
	{
		move(0, dt * speed); //Move Down
	}
	else if (input->isKeyDown(sf::Keyboard::D) && getPosition().x < window->getSize().x - getSize().x)
	{
		move(dt * speed, 0); //Move Right
	}
}
