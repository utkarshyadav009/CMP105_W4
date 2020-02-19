#pragma once
#include <SFML/Graphics.hpp>
#include "Framework/Input.h"
#include "Framework/GameObject.h"
#include <string.h>
#include <iostream>

class Player :
	public GameObject , public Input
{	

public:
	sf::RenderWindow* window;
	sf::View view;
	void handleInput(float dt) override;
	
};

