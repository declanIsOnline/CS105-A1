#include <iostream>
#include "Rectangle.h"

using std::cin;
using std::cout;
using std::endl;

Rectangle::Rectangle() {
	height = 0;
	base = 0;
	area = 0;
	perimeter = 0;
}

void Rectangle::draw_self() {
	for (int i = 0; i < 6; i++) {
		cout << "* * * * * * * * * * * * *" << endl;
	}
}

void Rectangle::set_data(double h, double b) {
	height = h;
	base = b;
}

void Rectangle::calc_perimeter() {
	perimeter += height * 2;
	perimeter += base * 2;
}

void Rectangle::calc_area() {
	area = height * base;
}

double Rectangle::get_perimeter() {
	return perimeter;
}

double Rectangle::get_area() {
	return area;
}

