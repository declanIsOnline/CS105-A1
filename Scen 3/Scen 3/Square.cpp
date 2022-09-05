#include <iostream>
#include "Square.h"

using std::cin;
using std::cout;
using std::endl;

//squares only need a height var because every side has the same value
Square::Square() {
	height = 0;
	area = 0;
	perimeter = 0;
}

void Square::draw_self() {
	for (int i = 0; i < 6; i++) {
		cout << "* * * * * *" << endl;
	}
}

void Square::set_data(double h) {
	height = h;
}

void Square::calc_perimeter() {
	perimeter = height * 4;
}

void Square::calc_area() {
	area = height * height;
}

double Square::get_perimeter() {
	return perimeter;
}

double Square::get_area() {
	return area;
}

