#pragma once
#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h" 

class Rectangle : public Shape {
private:
	double height;
	double base;
	double area;
	double perimeter;

public:
	Rectangle();
	void draw_self();
	void set_data(double h, double b);
	void calc_perimeter();
	void calc_area();
	double get_perimeter();
	double get_area();
};

#endif