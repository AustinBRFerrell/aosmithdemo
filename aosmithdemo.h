#pragma once

#include <iostream>
using namespace std;

class Animal {
  public:
	string name;

	void set_name();
	Animal(){}  //default constructor

};

class Mammal : public Animal {
  public:
	string greeting;
	string species;
	Mammal(string x, string y) {
		species = x;
		greeting = y;
	}
};

class Bird : public Animal {
public:
	string greeting;
	string species;
	Bird(string x, string y) {
		species = x;
		greeting = y;
	}
};

void Animal::set_name() {
	cout << "Please enter a name: ";
	cin >> name;
}
