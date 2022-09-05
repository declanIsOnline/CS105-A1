#pragma once
#ifndef ALIEN_H
#define ALIEN_H

class Alien {
private:
	int weight;
	int height;
	char gender;

public:
	Alien();
	Alien(int h, int w, char g);
	int get_weight();
	int get_height();
	char get_gender();
	int get_prestige();
	Alien operator + (Alien& a);
	bool operator == (Alien& a);
	bool operator != (Alien& a);
	bool operator < (Alien& a);
	bool operator <= (Alien& a);
	bool operator > (Alien& a);
	bool operator >= (Alien& a);

};

#endif