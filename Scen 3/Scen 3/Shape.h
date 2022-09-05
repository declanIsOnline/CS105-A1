#pragma once
#ifndef SHAPE_H
#define SHAPE_H

class Shape {
private:
	double height;
	double base;
	double area;
	double perimeter;

public:
	Shape();
	void draw_self();
	void set_data();
	void calc_perimeter();
	void calc_area();
	double get_area();
	double get_perimeter();
};

#endif