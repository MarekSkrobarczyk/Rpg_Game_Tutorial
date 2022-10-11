#pragma once

#include <iostream>
#include <string>
#include "Character.h"

// inherits from character

class Hero: public Character
{
	
private:
	std::string name;
public:

	void setName(std::string s);
	std::string getName();   // it will replace inherited from Character

	void heal(int amount);
	void atkBoost(int amount);
	void defBoost(int amount);
};

