#pragma once

#include <iostream>
#include <string>
#include "Character.h"

// inherits from character

class Hero: public Character
{
public:

	void setName(std::string name);
	std::string getName();   // it will replace inherited from Character

	void heal(int incHP);
	void atkBoost(int incAtk);
	void defBoost(int incDef);
};

