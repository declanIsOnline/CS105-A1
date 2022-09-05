#include <iostream>
#include <cmath>


#include "Triangle.h"

using std::cin;
using std::cout;
using std::endl;

Triangle::Triangle() {
	height = 0;
	base = 0;
	diagonal = 0;
	area = 0;
	perimeter = 0;
}

void Triangle::draw_self() {
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < i; j++) {
			cout << "* ";
		}
		cout << endl;
	}
}

void Triangle::set_data(double h, double b) {
	height = h;
	base = b;
	//use the pythagorean theorom to determine the value of the diagonal side
	diagonal = sqrt((pow(height, 2) + pow(base, 2)));
}

void Triangle::calc_perimeter() {
	perimeter = base + height + diagonal;
}

void Triangle::calc_area() {
	area = height * base * 0.5;
}

double Triangle::get_perimeter() {
	return perimeter;
}

double Triangle::get_area() {
	return area;
}

