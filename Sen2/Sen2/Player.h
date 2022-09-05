#pragma once
#ifndef PLAYER_H
#define PLAYER_H

#include <string>

using std::string;

enum class Race { Human, Elf, Dwarf, Orc, Troll };

class Player {
private:
	string name;
	Race race;
	//these go unused in the program
	int hit_points;
	int magic_points;
public:
	Player(string n, Race r, int hp, int mp);
	Player();
	string get_name();
	Race get_race();
	string what_race();
	int get_hit_points();
	int get_magic_points();
	void set_name(string n);
	void set_race(Race r);
	void set_hit_points(int hp);
	void set_magic_points(int mp);
	string attack();
};

#endif