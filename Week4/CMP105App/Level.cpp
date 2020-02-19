#include "Level.h"

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;

	// initialise game objects
	t.loadFromFile("gfx/Mushroom.png");
	t1.loadFromFile("gfx/Goomba.png");

	p.setInput(input);
	p.setTexture(&t);
	p.setSize(sf::Vector2f(100, 100));
	p.setPosition(100, 100);
	p.setVelocity(500.0, 500.0);

	e.setInput(input);
	e.setTexture(&t1);
	e.setSize(sf::Vector2f(100, 100));
	e.setPosition(500, 500);
	e.setVelocity(500.0, 500.0);

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
	e.move(speedx * dt, speedy * dt);
	if (e.getPosition().x + e.getSize().x >= window->getSize().x || e.getPosition().x < 0)
	{
		speedx = -speedx;

	}
	if (e.getPosition().y + e.getSize().y >= window->getSize().y || e.getPosition().y < 0)

	{

		speedy = -speedy;

	}
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