#include <iostream>
#include <cstdlib>
#include "Yacht.h"


//increase readability without using the entire name space
using std::cout;
using std::cin;
using std::endl;


//sets serial number to equal incremented static object count variable so that each new yacht object has a sequintially increasing serial number
Yacht::Yacht() {
	serial_no = ++obj_count;
};

//displayes information collected using the getpos function
void Yacht::display() {
	cout << "Yacht #" << serial_no << "'s latitudinal position is: " << latitude.degrees << "\xF8" << latitude.minutes << "\"" << latitude.direction << endl;
	cout << "Yacht #" << serial_no << "'s longitudinal position is: " << longitude.degrees << "\xF8" << longitude.minutes << "\"" << longitude.direction << endl;
};

//requests input from users to populate location objects within yacht objects
void Yacht::Location::getpos() {
	//all of the below loops iterate at least once, and then reiterate if an invalid input is given
	do {
		cout << "Please enter a direction Value (N/E/W/S): ";
		cin >> direction;
		//converts direction to uppercase if it isn't already
		direction = toupper(direction);
		//tests if the direction value is valid, displays a error if not
		if (direction != 'N' && direction != 'E' && direction != 'W' && direction != 'S') {
			cout << "Please enter a valid direction" << endl;
		}
	} while (direction != 'N' && direction != 'E' && direction != 'W' && direction != 'S');

	do {
		cout << "Please enter a degree value between 0 and 180: ";
		cin >> degrees;
		if (degrees < 0 || degrees > 180) {
			cout << "Please enter a valid degree value" << endl;
		}
	} while (degrees < 0 || degrees > 180);

	do {
		cout << "Please enter a minute value between 0 and 59: ";
		cin >> minutes;
		if (minutes < 0 || minutes >= 60) {
			cout << "Pleas enter a valid minute value" << endl;
		}
	} while (minutes < 0 || minutes >= 60);
};