#pragma once
#ifndef MAGE_H
#define MAGE_H

#include "Player.h"

#include <string>

using std::string;

class Mage : public Player {
private:
	string name;
	Race race;
	int hit_points;
	int magic_points;
public:
	Mage(string n, Race r, int hp, int mp);
	string attack();
};

#endif