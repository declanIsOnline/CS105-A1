#include <iostream>
#include <string>

#include "Mage.h"

// increase readability without using the entire namespace
using std::string;

Mage::Mage(string n, Race r, int hp, int mp) {
	name = n;
	race = r;
	hit_points = hp;
	magic_points = mp;
};

//override the attack function in the base class
string Mage::attack() {
	return "I will crush you with my arcane missiles!";
};