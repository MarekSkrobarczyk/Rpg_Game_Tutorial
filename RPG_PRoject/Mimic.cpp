#include "Mimic.h"
#include<iostream>


Mimic::Mimic()
{
	hp = 25;
	hpMax = 25;
	str = 6;
	def = 1;
	agi = 2;

}



std::string Mimic::getName()
{
	return "Mimic";
}