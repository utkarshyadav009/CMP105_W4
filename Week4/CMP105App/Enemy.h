#pragma once
#include "Framework/GameObject.h"
#include"Level.h"
#include <SFML/Graphics.hpp>
#include "Framework/Input.h"
#include <iostream>
class Enemy :
	public GameObject
{
	sf::RenderWindow *window;
public:
	void update(float dt) override;
	void setWindow(sf::RenderWindow* w) 
	{
		window = w;
	}

};

