#pragma once
#ifndef YACHT_H
#define YACHT_H

class Yacht {
public:
	int serial_no;
	static int obj_count;
	class Location {
	public:
		char direction;
		int degrees;
		float minutes;
		void getpos();
	};
	Location latitude;
	Location longitude;
	Yacht();
	void display();
};

#endif