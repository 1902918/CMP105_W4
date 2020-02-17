#pragma once
#include "Framework/Input.h"
#include "Framework/GameObject.h"

class Player :
	public GameObject
{
private:
	int speed = 200;

public:

	void handleInput(float dt) 
	{
		if (input->isKeyDown(sf::Keyboard::W))
		{
			move(0, dt * -speed); //Move Up
		}
		else if (input->isKeyDown(sf::Keyboard::A))
		{
			move(dt * -speed, 0); //Move Left
		}
		else if (input->isKeyDown(sf::Keyboard::S))
		{
			move(0, dt * speed); //Move Down
		}
		else if (input->isKeyDown(sf::Keyboard::D))
		{
			move(dt * speed, 0); //Move Right
		}
	}
};

