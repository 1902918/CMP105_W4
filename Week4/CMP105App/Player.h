#pragma once
#include "Framework/Input.h"
#include "Framework/GameObject.h"

class Player :
	public GameObject
{
private:
	sf::Window* window;
	int speed;

public:
	Player();

	void handleInput(float dt);
	void setWindow(sf::Window* w) { window = w; };
};

