#include <iostream>
#include "Shape.h"

Shape::Shape() {
	height = 0;
	base = 0;
	area = 0;
	perimeter = 0;
}


void Shape::draw_self() {
	std::cout << "This will be overridden by child shapes";
}

void Shape::set_data() {
	std::cout << "This will be overridden by child shapes";
}

void Shape::calc_perimeter() {
	std::cout << "This will be overridden by child shapes";
}

void Shape::calc_area() {
	std::cout << "This will be overridden by child shapes";
}

double Shape::get_area() {
	return area;
}

double Shape::get_perimeter() {
	return perimeter;
}