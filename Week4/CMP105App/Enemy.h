#pragma once
#include "Framework/Input.h"
#include "Framework/GameObject.h"

class Enemy :
	public GameObject
{
private:
	sf::Window* window;
	sf::Vector2i speed;

public:
	Enemy();

	void setWindow(sf::Window* w) { window = w; };
	void update(float dt);
};

