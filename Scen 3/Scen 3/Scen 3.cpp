//Bob Jones is a building architect hired to build a mall in the city centre of Chicago.He needs to produce the building plan to his team.He wants to calculate the areaand perimeter of some of the structures he is planning to build which is part of the software he uses.Details are as follows :
//A square room
//A rectangular room
//A circular swimming pool
//A triangular portico
//He wants the app to allow him to enter different dataset to see if it can all fit well in the total available land area.

//this prompt is very confusing. the example images have errors in them (perimeter of a rectangle is not 4x height value). Why would calculate area be in the parent, but calculate perimeter is in the child? that doesn't make sense. How do we reuse code to draw a rectangle to draw a circle? what is give result? why is it seperate from the other functions?

#include <iostream>

#include "Shape.h"
#include "Square.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Circle.h"

using std::cout;
using std::cin;
using std::endl;

void square_calculator();
void rectangle_calculator();
void triangle_calculator();
void circle_calculator();

int main()
{
	int choice;

	//main menu. loops infinitely
	for (;;) {
		cout << "****************" << endl;
		cout << "Shape Calculator" << endl;
		cout << "****************\n" << endl;

		cout << "1) Square" << endl;
		cout << "2) Rectangle" << endl;
		cout << "3) Triangle" << endl;
		cout << "4) Circle" << endl;
		cout << "5) Quit\n" << endl;

		cout << "Please enter your choice: ";
		cin >> choice;

		switch (choice) {
		case 1:
			system("cls");
			square_calculator();
			break;

		case 2:
			system("cls");
			rectangle_calculator();
			break;

		case 3:
			system("cls");
			triangle_calculator();
			break;

		case 4:
			system("cls");
			circle_calculator();
			break;

		case 5:
			//breaks the loop and exits the program
			return 0;
		}
	}
}

void square_calculator() {
	//declare a new square object
	Square square;

	int choice;
	double height;

	//main menu for the calculator. loops infinitely until a user enters 3
	for (;;) {
		square.draw_self();
		cout << endl << endl;

		cout << "*****************" << endl;
		cout << "Square Calculator" << endl;
		cout << "*****************\n" << endl;

		cout << "1) Calculate Perimeter" << endl;
		cout << "2) Calculate Area" << endl;
		cout << "3) Return to main menu\n" << endl;

		cout << "Please enter your choice: ";
		cin >> choice;

		switch (choice) {
		case 1:
			//gets a height value from the user and aassigns it to the height attribute of the square object, then calculates and displays the perimeter
			cout << "Please enter the length of a side of the square in cm: ";
			cin >> height;
			square.set_data(height);

			square.calc_perimeter();

			cout << "The perimeter of the square is " << square.get_perimeter() << "cm\n" << endl;
			break;

		case 2:
			//gets a height value from the user and aassigns it to the height attribute of the square object, then calculates and displays the area
			cout << "Please enter the length of a side of the square in cm: ";
			cin >> height;
			square.set_data(height);

			square.calc_area();

			cout << "The area of the square is " << square.get_area() << " square cm\n" << endl;
			break;

		case 3:
			//breaks the loop by returning
			system("cls");
			return;
		}
	}
}

//please see the square function for a detailed break down
void rectangle_calculator() {
	Rectangle rectangle;

	int choice;
	double height;
	double base;

	for (;;) {
		rectangle.draw_self();
		cout << endl << endl;

		cout << "********************" << endl;
		cout << "Rectangle Calculator" << endl;
		cout << "********************\n" << endl;

		cout << "1) Calculate Perimeter" << endl;
		cout << "2) Calculate Area" << endl;
		cout << "3) Return to main menu\n" << endl;

		cout << "Please enter your choice: ";
		cin >> choice;

		switch (choice) {
		case 1:
			cout << "Please enter the height the rectangle in cm: ";
			cin >> height;
			cout << "Please enter the base the rectangle in cm: ";
			cin >> base;
			rectangle.set_data(height, base);

			rectangle.calc_perimeter();

			cout << "The perimeter of the rectangle is " << rectangle.get_perimeter() << "cm\n" << endl;
			break;

		case 2:
			cout << "Please enter the height the rectangle in cm: ";
			cin >> height;
			cout << "Please enter the base the rectangle in cm: ";
			cin >> base;
			rectangle.set_data(height, base);

			rectangle.calc_area();

			cout << "The area of the rectangle is " << rectangle.get_area() << " square cm\n" << endl;
			break;

		case 3:
			system("cls");
			return;
		}
	}
}

//please see the square function for a detailed break down
void triangle_calculator() {
	Triangle triangle;

	int choice;
	double height;
	double base;

	for (;;) {
		triangle.draw_self();
		cout << endl << endl;

		cout << "*******************" << endl;
		cout << "Triangle Calculator" << endl;
		cout << "*******************\n" << endl;

		cout << "1) Calculate Perimeter" << endl;
		cout << "2) Calculate Area" << endl;
		cout << "3) Return to main menu\n" << endl;

		cout << "Please enter your choice: ";
		cin >> choice;

		switch (choice) {
		case 1:
			cout << "Please enter the height the rectangle in cm: ";
			cin >> height;
			cout << "Please enter the base the rectangle in cm: ";
			cin >> base;
			triangle.set_data(height, base);

			triangle.calc_perimeter();

			cout << "The perimeter of the triangle is " << triangle.get_perimeter() << "cm\n" << endl;
			break;

		case 2:
			cout << "Please enter the height the triangle in cm: ";
			cin >> height;
			cout << "Please enter the base the triangle in cm: ";
			cin >> base;
			triangle.set_data(height, base);

			triangle.calc_area();

			cout << "The area of the triangle is " << triangle.get_area() << " square cm\n" << endl;
			break;

		case 3:
			system("cls");
			return;
		}
	}
}

//please see the square function for a detailed break down
void circle_calculator() {
	Circle circle;

	int choice;
	double diameter;

	for (;;) {
		circle.draw_self();
		cout << endl << endl;

		cout << "*****************" << endl;
		cout << "Circle Calculator" << endl;
		cout << "*****************\n" << endl;

		cout << "1) Calculate Perimeter" << endl;
		cout << "2) Calculate Area" << endl;
		cout << "3) Return to main menu\n" << endl;

		cout << "Please enter your choice: ";
		cin >> choice;

		switch (choice) {
		case 1:
			cout << "Please enter the diameter of the circle in cm: ";
			cin >> diameter;
			circle.set_data(diameter);

			circle.calc_perimeter();

			cout << "The perimeter of the circle is " << circle.get_perimeter() << "cm\n" << endl;
			break;

		case 2:
			cout << "Please enter the diameter of the circle in cm: ";
			cin >> diameter;
			circle.set_data(diameter);

			circle.calc_area();

			cout << "The area of the circle is " << circle.get_area() << " square cm\n" << endl;
			break;

		case 3:
			system("cls");
			return;
		}
	}
}