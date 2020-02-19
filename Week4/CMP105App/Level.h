#pragma once

#include <SFML/Graphics.hpp>
#include "Framework/Input.h"
#include "Framework/GameObject.h"
#include <string.h>
#include <iostream>
#include"Player.h"
#include"Enemy.h"
#include"Cursor.h"
#include"background.h"
class Level{
public:
	Level(sf::RenderWindow* hwnd, Input* in);
	~Level();

	void handleInput(float dt);
	void update(float dt);
	void render();



private:
	// Default functions for rendering to the screen.
	void beginDraw();
	void endDraw();

	// Default variables for level class.
	sf::RenderWindow* window;
	Input* input;
	sf::View view;
	//v = window->getView;
	

	
	

	// Level objects
	float speedx = 100.0;
	float speedy = 100;
	Player p;
	Enemy e;
	Cursor c;
	background b;
	

	sf::Texture t;
	sf::Texture t1;
	sf::Texture t2;
	sf::Texture t3;
};