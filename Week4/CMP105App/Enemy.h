#pragma once
#include "Framework/GameObject.h"
class Enemy :
	public GameObject
{
public:
	sf::RenderWindow* window;
	void e_update(float dt) ;

	

};

