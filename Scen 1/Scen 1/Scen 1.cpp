//Scenario 1
//The Ocean Race 2021-22 route is announced. Yachts are ready to sail and will visit 10 international cities, including the start port and the Grand Finale finish in Genoa, Italy. In ocean navigation, degrees and minutes (for latitude and longitude) are used to measure locations along with the direction. Degrees of latitude are either north (N) or south (S) measured from 0 to 90 degrees and degrees longitude are either east (E) or west (W) measured from 0 to 180.
//Example: 38�56�N, 71�0�W  is 38 degrees  56 minutes North and 71 degrees 0 minutes West.
//Your task is to create a class Yacht that includes the yacht's number and location.
//For Yacht's Number: You have to number each yacht object as it is created using a constructor. To do this, you will have a data member that holds a serial number for each object created from the class. Then you will need another data member that records a count of how many objects have been created so far.
//For Yachts Location: Create a class Location that has three member variables --
//i. int for degrees (explained above)
//ii. float for minutes (explained above)
//iii. Char for direction letters N,S,E,W
//Location class has variables like longitude and latitude. Location class includes one member getpos() which obtains a location value in degrees (between 0-180) and minutes (between 0 to 60) and direction (N,S,E,W) from the user.
//One member function [ get_pos() ] of the Yacht class should get a position from the user and store it in the object; Another member function [ display() ] should report the yacht number and location. display() use two variables from Location class to represent the yacht�s location, latitude and longitude. display() function will display the location latitude and longitude in 148�26� N format.
//The main() program creates three yachts, asks the user to input the location and then displays each yacht's number and location.
//Prepare the UML class diagram for the Location class.
//Clearly describe the process used to solve the problem with the help of appropriate comments that increases the readability of the program.

#include <iostream>
#include <cstdlib>

#include "Yacht.h"

//increase readability of code without using the entire namespace
using std::cout;
using std::cin;
using std::endl;

//initialise static object count variable that is used in the Yacht class constructor
int Yacht::obj_count;

int main() {
	Yacht boat_1, boat_2, boat_3;

	cout << "********* Ocean Race 2021-2022*********" << endl;
	cout << endl;

	//getpos requests input from the user to populate location objects within yacht objects

	cout << "Please enter the latitudinal position of boat #" << boat_1.serial_no << endl;
	cout << endl;
	boat_1.latitude.getpos();
	cout << "-------------------------------------------------------" << endl;
	cout << "Please enter the longitudonal position of boat #" << boat_1.serial_no << endl;
	cout << endl;
	boat_1.longitude.getpos();
	cout << "-------------------------------------------------------" << endl;

	cout << "Please enter the latitudinal position of boat #" << boat_2.serial_no << endl;
	cout << endl;
	boat_2.latitude.getpos();
	cout << "-------------------------------------------------------" << endl;
	cout << "Please enter the longitudonal position of boat #" << boat_2.serial_no << endl;
	cout << endl;
	boat_2.longitude.getpos();
	cout << "-------------------------------------------------------" << endl;

	cout << "Please enter the latitudinal position of boat #" << boat_3.serial_no << endl;
	cout << endl;
	boat_3.latitude.getpos();
	cout << "-------------------------------------------------------" << endl;
	cout << "Please enter the longitudonal position of boat #" << boat_3.serial_no << endl;
	cout << endl;
	boat_3.longitude.getpos();
	cout << "-------------------------------------------------------" << endl;
	
	
	boat_1.display();
	boat_2.display();
	boat_3.display();

	return 0;
};

//see Yacht.cpp for a detailed breakdown of the getpos function