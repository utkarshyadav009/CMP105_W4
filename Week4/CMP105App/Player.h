#pragma once
#include <iostream>
#include "Framework/GameObject.h"
#include"Framework/Input.h"
class Player :
	public GameObject , public Input
{	

public:
	
	void handleInput(float dt) override;
 
};

