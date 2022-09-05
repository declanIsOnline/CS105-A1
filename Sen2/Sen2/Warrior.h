#pragma once
#ifndef WARRIOR_H
#define WARRIOR_H

#include "Player.h"

#include <string>

using std::string;

class Warrior : public Player {
private:
	string name;
	Race race;
	int hit_points;
	int magic_points;
public:
	Warrior(string n, Race r, int hp, int mp);
	string attack();
};

#endif