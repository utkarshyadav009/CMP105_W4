#include "Level.h"

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;

	// initialise game objects
	texture.loadFromFile("gfx/Mushroom.png");
	texture1.loadFromFile("gfx/Goomba.png");

	p.setInput(input);
	p.setTexture(&texture);
	p.setSize(sf::Vector2f(100, 100));
	p.setPosition(100, 100);
	p.setVelocity(500.0, 500.0);

	e.setInput(input);
	e.setTexture(&texture1);
	e.setSize(sf::Vector2f(100, 100));
	e.setPosition(200, 200);
	e.setVelocity(500.0, 500.0);
	e.setWindow(window);
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
	p.handleInput(dt);

}

// Update game objects
void Level::update(float dt)
{
	e.update(dt);
}

// Render level
void Level::render()
{
	beginDraw();

	window->draw(p);
	window->draw(e);
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