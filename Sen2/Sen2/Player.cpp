#include <iostream>
#include <string>

#include "Player.h"

// increase readability without using the entire namespace
using std::string;
 
Player::Player(string n = "", Race r=Race::Human, int hp = 0, int mp = 0) {
	name = n;
	race = r;
	hit_points = hp;
	magic_points = mp;
}

Player::Player() {
	name = "";
	race = Race::Human;
	hit_points = 0;
	magic_points = 0;
}


string Player::get_name() {
	return name;
};

Race Player::get_race() {
	return race;
};

string Player::what_race() {
	switch (get_race()) {
	case Race::Human:
		return "Human";
		break;

	case Race::Elf:
		return "Elf";
		break;
		
	case Race::Dwarf:
		return "Dwarf";
		break;

	case Race::Orc:
		return "Orc";
		break;

	case Race::Troll:
		return "Troll";
		break;
	}
}

int Player::get_hit_points() {
	return hit_points;
};

int Player::get_magic_points() {
	return magic_points;
};

void Player::set_name(string n) {
	name = n;
};

void Player::set_race(Race r) {
	race = r;
};

void Player::set_hit_points(int hp) {
	hit_points = hp;
};

void Player::set_magic_points(int mp) {
	magic_points = mp;
};

string Player::attack() {
	return "No attack method defined yet!\n\n";
};

