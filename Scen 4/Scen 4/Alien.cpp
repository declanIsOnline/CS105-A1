#include <cstdlib>
#include "Alien.h"

// default constructor
Alien::Alien() {
	weight = 0;
	height = 0;
	gender = 'M';
}

// parameterised constructor
Alien::Alien(int h, int w, char g) {
	weight = h;
	height = w;
	gender = g;
}

int Alien::get_weight() {
	return weight;
}

int Alien::get_height() {
	return height;
}

char Alien::get_gender() {
	return gender;
}

int Alien::get_prestige() {
	int p;
	p = (height * weight);
	if (gender == 'M') {
		p *= 2;
	}
	else {
		p *= 3;
	}
	return p;
}


//overload all of the operators
Alien Alien::operator + (Alien& a) {
	Alien temp;
	temp.weight = (weight + a.weight) / 2;
	temp.height = (height + a.height) / 2;
	if ((rand() % 2) == 0) {
		temp.gender = 'F';
	}
	else {
		temp.gender = 'M';
	}
	return temp;
}

bool Alien::operator == (Alien& a) {
	if (get_prestige() == a.get_prestige()) {
		return true;
	}

	else {
		return false;
	}
}

bool Alien::operator != (Alien& a) {
	if (get_prestige() != a.get_prestige()) {
		return true;
	}

	else {
		return false;
	}
}

bool Alien::operator < (Alien& a) {
	if (get_prestige() < a.get_prestige()) {
		return true;
	}

	else {
		return false;
	}
}

bool Alien::operator <= (Alien& a) {
	if (get_prestige() <= a.get_prestige()) {
		return true;
	}

	else {
		return false;
	}
}

bool Alien::operator > (Alien& a) {
	if (get_prestige() > a.get_prestige()) {
		return true;
	}

	else {
		return false;
	}
}

bool Alien::operator >= (Alien& a) {
	if (get_prestige() >= a.get_prestige()) {
		return true;
	}

	else {
		return false;
	}
}