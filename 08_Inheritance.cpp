/*
#include <iostream>
using namespace std;

// One class inherits from another class. Parent/child relationship.
// It's a one-way down (hierarchy). A child does not give to the parent, parent give to the child.
// When creating child classes, you're gonna automatically initialize a parent object.

class Vehicle {
public:
    Vehicle(string b): brand(b) {   // Base or parent
        cout << "Vehicle constructor called. " << "\n";
    }
    string getBrand() const {return brand;}
private:
    string brand;
};

class Car : public Vehicle {    // Derived or child
public:
    Car(string b): Vehicle(b) {
        cout << "Car constructor called. " << "\n";
    }
};


// *********************************************************************************
// **************************      MAIN FUNCTION     *******************************
// *********************************************************************************

int main() {
    cout << "\n";

    Vehicle v("Acura");         // Only calls the vehicle constr
    cout << "\n";
    Car c("Lexus");             // Calls both Veh and Car constrs

    cout << "v: " << v.getBrand() << "\n";
    cout << "c: " << c.getBrand() << "\n";

    cout << "\n";
    return 0;
}


// class Person {                       Base
//      Person() {}
// };

// class Student : public Person {      This means that Student inherits from Person. Or Student is-a Person.
//      Student(): Person() {}          When we construct a student object, we must also construct a person object.
// };                                   So the student constr calls the person constr

// Whenever the student is created, we're also creating a person object and they're related to each other by
// inheritance.
// In this situation, we can call Person the parent class and Student the child class.
// Or we call Person as the base class and Student the derived class.



// output for above program:
// Vehicle constructor called.

// Vehicle constructor called.
// Car constructor called.
// v: Acura
// c: Lexus

// Inside Vehicle class, constr populates the value of data member brand.
// Accessor function gets the value of brand and returns it.

// In Car class, the only code I have is the constructor.
// However, when we create a Car object, we also create a Vehicle object utilizing the string in Car class.
// So Car is Creating the Vehicle.

// Vehicle v("Acura");         // Only calls the vehicle constr

// Car c("Lexus");             // Calls both Veh and Car constrs

// Vehicle is called first because any code that's in the initialization list runs before what's in the parentheses.
// When we create a Car object, the first thing it does is it calls Vehicle. Vehicle runs and print out "Vehicle
// constructor called." Now the code inside the parentheses runs and prints out the second statement.

// Car class inherited the getBrand function and getBrand data from Vehicle class.

*/