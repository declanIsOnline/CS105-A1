#pragma once
#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <cmath>
#include "Shape.h" 

class Triangle : public Shape {
private:
	double height;
	double base;
	double diagonal;
	double area;
	double perimeter;

public:
	Triangle();
	void draw_self();
	void set_data(double h, double b);
	void calc_perimeter();
	void calc_area();
	double get_perimeter();
	double get_area();
};

#endif