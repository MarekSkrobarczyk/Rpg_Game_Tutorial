#include "Glob.h"
#include <iostream>
#include<string>

Glob::Glob()
{
	hp = 10;
	hpMax = 10;
	str = 4;
	def = 2;
	agi = 5;

}

std::string Glob::getName()
{
	return "Glob";
}