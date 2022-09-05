//Scenario 2
//Suppose that you are part of a team which is creating a role - playing game(RPG).You have been asked to create the foundational classes to represent player characters, that is, the entity within the game that the user of the game software controls.

#include <iostream>
#include <string>
#include <vector>

#include "Player.h"
#include "Warrior.h"
#include "Priest.h"
#include "Mage.h"

//increase readability without using entire std namespace
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::getline;

//declare functions
void create_warrior();
void create_priest();
void create_mage();
void display_characters();

//declare global vectors
vector<Warrior> warriors;
vector<Priest> priests;
vector<Mage> mages;

int main() {
    
    int choice;
    //main menu infinitely loops until a user chooses to quit
    for (;;) {
        cout << "\n\n*CHARACTER CREATION*" << endl;
        cout << "--------------------\n" << endl;
        do {
            cout << "*CLASS SELECTION*" << endl;
            cout << "-----------------" << endl;
            cout << "1) Create a warrior" << endl;
            cout << "2) Create a priest" << endl;
            cout << "3) Create a mage" << endl;
            cout << "4) Quit" << endl << endl;
            cout << "Please enter your decision: ";
            cin >> choice;
            if (choice < 1 || choice > 4) {
                cout << "Please enter a valid option!\n" << endl;
            }
        } while (choice < 1 || choice > 4);

        switch (choice) {
        case 1:
            create_warrior();
            break;

        case 2:
            create_priest();
            break;

        case 3:
            create_mage();
            break;

        case 4:
            display_characters();
            return 0;
        }
    }
}

//define functions

//creates a warrior object and adds it to the warriors vector
void create_warrior() {
    string name;
    Race race;
    int hit_points = 200;
    int magic_points = 0;
    int choice;


    cout << "\nPlease enter a name for your character: ";
    cin >> name;
    //loops until the user enters a valid choice
    do {
        cout << "\n*RACE SELCTION*" << endl;
        cout << "---------------" << endl;
        cout << "1) Human" << endl;
        cout << "2) Elf" << endl;
        cout << "3) Dwarf" << endl;
        cout << "4) Orc" << endl;
        cout << "5) Troll" << endl;
        cout << "Please enter your decision: ";
        cin >> choice;
        if (choice < 1 || choice > 5) {
            cout << "Please enter a valid option!\n" << endl;
        }
    } while (choice < 1 || choice > 5);
    
    //sets the race variable to equal a corresponding value from the Race enum class.
    switch (choice) {
    case 1:
        race = Race::Human;
        break;

    case 2:
        race = Race::Elf;
        break;

    case 3:
        race = Race::Dwarf;
        break;

    case 4:
        race = Race::Orc;
        break;

    case 5:
        race = Race::Troll;
        break;
    }

    //create a temporary warrior object and add it to the end of the warriors vector
    Warrior temp(name, race, hit_points, magic_points);
    temp.set_name(name);
    temp.set_race(race);
    temp.set_hit_points(hit_points);
    temp.set_magic_points(magic_points);

    warriors.push_back(temp);
    //this prevents a potential memory leak by shrinking the size of the vector to the number of objects currently in it
    warriors.shrink_to_fit();
};

//see the create warrior function for a commented breakdown of this function
void create_priest() {
    string name;
    Race race;
    int hit_points = 100;
    int magic_points = 200;
    int choice;


    cout << "\nPlease enter a name for your character: ";
    cin >> name;
    do {
        cout << "\n*RACE SELCTION*" << endl;
        cout << "---------------" << endl;
        cout << "1) Human" << endl;
        cout << "2) Elf" << endl;
        cout << "3) Dwarf" << endl;
        cout << "4) Orc" << endl;
        cout << "5) Troll" << endl;
        cout << "Please enter your decision: ";
        cin >> choice;
        if (choice < 1 || choice > 5) {
            cout << "Please enter a valid option!\n" << endl;
        }
    } while (choice < 1 || choice > 5);


    switch (choice) {
    case 1:
        race = Race::Human;
        break;

    case 2:
        race = Race::Elf;
        break;

    case 3:
        race = Race::Dwarf;
        break;

    case 4:
        race = Race::Orc;
        break;

    case 5:
        race = Race::Troll;
        break;
    }

    Priest temp(name, race, hit_points, magic_points);
    temp.set_name(name);
    temp.set_race(race);
    temp.set_hit_points(hit_points);
    temp.set_magic_points(magic_points);
    priests.push_back(temp);
    priests.shrink_to_fit();
}

//see the create warrior function for a commented breakdown of this function
void create_mage() {
    string name;
    Race race;
    int hit_points = 200;
    //why would a mage have 0 magic points
    int magic_points = 0;
    int choice;


    cout << "\nPlease enter a name for your character: ";
    cin >> name;

    do {
        cout << "\n*RACE SELCTION*" << endl;
        cout << "---------------" << endl;
        cout << "1) Human" << endl;
        cout << "2) Elf" << endl;
        cout << "3) Dwarf" << endl;
        cout << "4) Orc" << endl;
        cout << "5) Troll" << endl;
        cout << "Please enter your decision: ";
        cin >> choice;
        if (choice < 1 || choice > 5) {
            cout << "Please enter a valid option!\n" << endl;
        }
    } while (choice < 1 || choice > 5);


    switch (choice) {
    case 1:
        race = Race::Human;
        break;

    case 2:
        race = Race::Elf;
        break;

    case 3:
        race = Race::Dwarf;
        break;

    case 4:
        race = Race::Orc;
        break;

    case 5:
        race = Race::Troll;
        break;
    }

    Mage temp(name, race, hit_points, magic_points);
    temp.set_name(name);
    temp.set_race(race);
    temp.set_hit_points(hit_points);
    temp.set_magic_points(magic_points);
    mages.push_back(temp);
    mages.shrink_to_fit();
}

//iterates through the warriors, priests and mages vectors if they have a size not equal to zero, and displays information about the characters created. the subsequent loops work the sme way.
void display_characters() {
    size_t i;

    if (warriors.size() != 0) {
        cout << "*WARRIORS*" << endl;
        cout << "----------\n" << endl;
        for (i = 0; i < warriors.size(); i++) {
            cout << "I am " << warriors[i].get_name() << ", the " << warriors[i].what_race() << " warrior!" << endl;
            cout << warriors[i].attack() << endl << endl;
        }
    }
    
    if (priests.size() != 0) {
        cout << "\n*PRIESTS*" << endl;
        cout << "---------\n" << endl;
        for (i = 0; i < priests.size(); i++) {
            cout << "I am " << priests[i].get_name() << ", the " << priests[i].what_race() << " priest!" << endl;
            cout << priests[i].attack() << endl << endl;
        }
    }
    

    if (mages.size() != 0) {
        cout << "\n*MAGES*" << endl;
        cout << "-------\n" << endl;
        for (i = 0; i < mages.size(); i++) {
            cout << "I am " << mages[i].get_name() << ", the " << mages[i].what_race() << " mage!" << endl;
            cout << mages[i].attack() << endl << endl;
        }
    }
}