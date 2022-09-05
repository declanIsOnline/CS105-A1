#include <iostream>
#include <string>

#include "Warrior.h"

// increase readability without using the entire namespace
using std::string;

Warrior::Warrior(string n, Race r, int hp, int mp) {
	name = n;
	race = r;
	hit_points = hp;
	magic_points = mp;
};

//override the attack function in the base class
string Warrior::attack() {
	return "I will destroy you with my sword!";
};