#pragma once
#ifndef SQUARE_H
#define SQUARE_H

#include "Shape.h" 

class Square : public Shape {
private:
	double height;
	double area;
	double perimeter;

public:
	Square();
	void draw_self();
	void set_data(double h);
	void calc_perimeter();
	void calc_area();
	double get_perimeter();
	double get_area();
};

#endif