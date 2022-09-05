#include <iostream>
#include <cmath>
#include "Circle.h"

using std::cin;
using std::cout;
using std::endl;

//circles only need a diameter value as the radius is just diameter/2
Circle::Circle() {
	diameter = 0;
	area = 0;
	perimeter = 0;
}

void Circle::draw_self() {
	cout << "    * * *" << endl;
	cout << "  * * * * * " << endl;
	cout << "* * * * * * *" << endl;
	cout << "* * * * * * *" << endl;
	cout << "* * * * * * *" << endl;
	cout << "  * * * * * " << endl;
	cout << "    * * *\n" << endl;
}

void Circle::set_data(double d) {
	diameter = d;
}

void Circle::calc_perimeter() {
	perimeter = diameter * 3.14159;
}

void Circle::calc_area() {
	area = pow((diameter / 2), 2) * 3.14159;
}

double Circle::get_perimeter() {
	return perimeter;
}

double Circle::get_area() {
	return area;
}

