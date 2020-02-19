#include <SFML/Graphics.hpp>
#include "Framework/Input.h"
#include "Framework/GameObject.h"
#include"Player.h"
#include<iostream>
class background :
	public GameObject, public Input
{
	
public:
	background();
	void handleInput(float dt) ;
	sf::RenderWindow* window;
	sf::View view;
	
	
	Player p;


};

