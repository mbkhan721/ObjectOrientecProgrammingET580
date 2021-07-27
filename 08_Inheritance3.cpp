/*
#include <iostream>
using namespace std;

class Vehicle {
public:
    Vehicle(string b): brand(b) {cout << "Vehicle constructor \n";}
    string getBrand() const {return brand;}
private:
    string brand;
};

class Car : public Vehicle {    // Derived or child or Vehicle
private:
    int numDoors;
public:
    Car(string b, int nd): Vehicle(b), numDoors(nd) {cout << "Car constructor \n";}
    int getNumDoors() const {return numDoors;}
};

class Boat : public Vehicle {       // Derived or child or Vehicle
public:
    Boat(string b, int len): Vehicle(b), hullLength(len) {cout << "Boat constructor \n";}
    int getHullLength() const {return hullLength;}
private:
    int hullLength;
};


// *********************************************************************************
// **************************      MAIN FUNCTION     *******************************
// *********************************************************************************

int main() {
    cout << "\n";

    Vehicle v("Acura");         // Only calls the vehicle constr
    cout << "\n";
    Car c("Lexus", 2);       // Calls both Veh and Car constrs
    cout << "\n";
    Boat b("Baja", 45);     // Calls both Veh and Boat constrs
    cout << "\n";


    cout << "v: " << v.getBrand() << "\n";
    cout << "c: " << c.getBrand() << " " << c.getNumDoors() << "-doors" << "\n";
    cout << "b: " << b.getBrand() << " " << b.getHullLength() << "ft" << "\n";

    cout << "\n";
    return 0;
}

// We have one parent class and two child classes.
// Car inherits getBrand() and brand brand and has its own accessor function getNumDoors()
// associated with its own data member.

// Boat inherits getBrand() and brand brand and has its own accessor function getHullLength()
// associated with its own data member hullLength.

// This means that we have three vehicle objects in memory, one car object and one boat. Both of the
// vehicle have nothing to do with the first vehicle object that was created. This means that
// inheritance requires additional memory over other types of structures using OOP.

*/