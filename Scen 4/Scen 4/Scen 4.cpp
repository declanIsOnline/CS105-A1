// Scen 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include "Alien.h"

using std::cout;
using std::cin;
using std::endl;

Alien create_alien(int n);
void display_alien(Alien a);

int main()
{
    // initialise rng seed
    srand(time(NULL));

    cout << "**************" << endl;
    cout << "ALIEN CREATION" << endl;
    cout << "**************\n" << endl;

    //create 2 alien pairs using create alien function
    Alien alien1 = create_alien(1);
    cout << endl;
    Alien alien2 = create_alien(2);
    cout << endl;
    Alien alien3 = create_alien(3);
    cout << endl;
    Alien alien4 = create_alien(4);
    cout << endl;
    
    //create 2 alien offspring using overloaded + operator
    Alien alien5 = alien1 + alien2;
    Alien alien6 = alien3 + alien4;

    //display the attributes of all of the aliens created
    cout << "Alien 1: " << endl;
    display_alien(alien1);
    cout << "Alien 2: " << endl;
    display_alien(alien2);
    cout << "Alien 3: " << endl;
    display_alien(alien3);
    cout << "Alien 4: " << endl;
    display_alien(alien4);
    cout << "Alien 5: " << endl;
    display_alien(alien5);
    cout << "Alien 6: " << endl;
    display_alien(alien6);

    //compare the alien offspring using the overloaded comparitive operators
    cout << "Comparison of Alien 5 and Alien 6: " << endl;
    cout << "Alien 5 == Alien 6 ? ";
    if (alien5 == alien6) {
        cout << "True" << endl;
    }
    else {
        cout << "False" << endl;
    }
    cout << "Alien 5 != Alien 6 ? ";
    if (alien5 != alien6) {
        cout << "True" << endl;
    }
    else {
        cout << "False" << endl;
    }
    cout << "Alien 5 < Alien 6 ? ";
    if (alien5 < alien6) {
        cout << "True" << endl;
    }
    else {
        cout << "False" << endl;
    }
    cout << "Alien 5 <= Alien 6 ? ";
    if (alien5 <= alien6) {
        cout << "True" << endl;
    }
    else {
        cout << "False" << endl;
    }
    cout << "Alien 5 > Alien 6 ? ";
    if (alien5 > alien6) {
        cout << "True" << endl;
    }
    else {
        cout << "False" << endl;
    }
    cout << "Alien 5 >= Alien 6 ? ";
    if (alien5 >= alien6) {
        cout << "True" << endl;
    }
    else {
        cout << "False" << endl;
    }

    return 0;
}

//gets user inputs for object attribute values, and returns the object
Alien create_alien(int n) {
    int weight;
    int height;
    char gender;

    cout << "Please enter a weight value for Alien " << n << ": ";
    cin >> weight;
    cout << "Please enter a height value for Alien " << n << ": ";
    cin >> height;
    do {
        cout << "Please enter a gender value for Alien " << n << " (M/F): ";
        cin >> gender;
        gender = toupper(gender);
        if (gender != 'F' && gender != 'M') {
            cout << "Please enter a 'F' for female, or 'M' for male" << endl;
        }
    } while (gender != 'F' && gender != 'M');

    Alien alien(weight, height, gender);
    return alien;
}

//displays object attributes
void display_alien(Alien a) {
    cout << "Weight: " << a.get_weight() << endl;
    cout << "Height: " << a.get_height() << endl;
    cout << "Gender: " << a.get_gender() << endl;
    cout << "Prestige: " << a.get_prestige() << endl;
    cout << endl;
}