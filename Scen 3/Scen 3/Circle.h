#pragma once
#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h" 

class Circle : public Shape {
private:
	double diameter;
	double area;
	double perimeter;

public:
	Circle();
	void draw_self();
	void set_data(double h);
	void calc_perimeter();
	void calc_area();
	double get_perimeter();
	double get_area();
};

#endif