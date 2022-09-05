#pragma once
#ifndef PRIEST_H
#define MAGE_PRIEST_HH

#include "Player.h"

#include <string>

using std::string;

class Priest : public Player {
private:
	string name;
	Race race;
	int hit_points;
	int magic_points;
public:
	Priest(string n, Race r, int hp, int mp);
	string attack();
};

#endif