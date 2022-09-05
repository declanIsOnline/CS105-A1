#include <iostream>
#include <string>

#include "Priest.h"

// increase readability without using the entire namespace
using std::string;

Priest::Priest(string n, Race r, int hp, int mp) {
	name = n;
	race = r;
	hit_points = hp;
	magic_points = mp;
};

//override the attack function in the base class
string Priest::attack() {
	return "I will assault you with holy wrath!";
};