/*
#include <iostream>
using namespace std;

class Vehicle {
public:
    Vehicle(string b): brand(b) {}
    string getBrand() const {return brand;}
private:
    string brand;
};

class Car : public Vehicle {    // Derived or child
private:
    int numDoors;
public:
    Car(string b, int nd): Vehicle(b), numDoors(nd) {}
    int getNumDoors() const {return numDoors;}
};


// *********************************************************************************
// **************************      MAIN FUNCTION     *******************************
// *********************************************************************************

int main() {
    cout << "\n";

    Vehicle v("Acura");         // Only calls the vehicle constr
    cout << "\n";
    Car c("Lexus", 2);             // Calls both Veh and Car constrs

    cout << "v: " << v.getBrand() << "\n";
    cout << "c: " << c.getBrand() << " " << c.getNumDoors() << "-doors" << "\n";

    cout << "\n";
    return 0;
}

// We added a data member numDoor inside the Car class.
// We added an accessor function getNumDoors() to access that number (numDoor).
// This function and variable is exclusive to the Car class, Vehicle class doesn't have access to this.
// Because inheritance is one-way, we inherit FROM Vehicle TO Car only.
// So when I print out the Car ( c.getBrand() &&c.getNumDoors() ), it has that data which comes from the vehicle and
// some unique data which comes from car.

*/