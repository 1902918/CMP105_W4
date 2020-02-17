#include "Level.h"

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;

	// initialise game objects
	playerTexture.loadFromFile("gfx/Mushroom.png");

	playerObject.setTexture(&playerTexture);
	playerObject.setSize(sf::Vector2f(100, 100));
	playerObject.setPosition(100, 100);
	playerObject.setInput(input);
	playerObject.setWindow(window);

	enemyTexture1.loadFromFile("gfx/goomba.png");

	enemyObject1.setTexture(&enemyTexture1);
	enemyObject1.setSize(sf::Vector2f(100, 100));
	enemyObject1.setPosition(100, 300);
	enemyObject1.setInput(input);
	enemyObject1.setWindow(window);

	enemyTexture2.loadFromFile("gfx/moomba.png");

	enemyObject2.setTexture(&enemyTexture2);
	enemyObject2.setSize(sf::Vector2f(100, 100));
	enemyObject2.setPosition(300, 500);
	enemyObject2.setInput(input);
	enemyObject2.setWindow(window);
}

Level::~Level()
{

}

// handle user input
void Level::handleInput(float dt)
{
	// Close window on Escape pressed.
	if (input->isKeyDown(sf::Keyboard::Escape))
	{
		window->close();
	}

	playerObject.handleInput(dt);

}

// Update game objects
void Level::update(float dt)
{
	enemyObject1.update(dt);
	enemyObject2.update(dt);
}

// Render level
void Level::render()
{
	beginDraw();

	window->draw(playerObject);
	window->draw(enemyObject1);
	window->draw(enemyObject2);

	endDraw();
}

// clear back buffer
void Level::beginDraw()
{
	window->clear(sf::Color(100, 149, 237));
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}