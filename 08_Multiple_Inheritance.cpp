
#include <iostream>
using namespace std;

// C is-a A and C is-a B
// Ex: an engineer is part mathematician and part physicist. So engineer inherits the both, two parents, one child.

// One of the issues is that if math and phys class has a data member or a func with the same name, and we try to
// access that func from engr, the access could lead to ambiguity.
// The 2nd problem when we create an engr, we have to create both math and phys objects which can lead to excessive
// memory usage. We create 3 objects everytime we need to create 1.

class Vehicle {
private:
    string motor;
public:
    Vehicle(string m): motor(m) {cout << "Vehicle" << "\n";}
    string getMotor() const {return motor;}
};

class Bike {
public:
    Bike(string t): type(t) {cout << "Bike" << "\n";}
    string getType() const {return type;}
private:
    string type;
};

class Motorcycle : public Bike, public Vehicle {
public:
    Motorcycle(string m, string t): Vehicle(m), Bike(t) {
        cout << "Motorcycle" << "\n";
    }
};


// *********************************************************************************
// **************************      MAIN FUNCTION     *******************************
// *********************************************************************************

int main() {
    cout << "\n";

    Vehicle v("4-Cylinder");
    Bike b{"Mountain Bike"};
    cout << "\n";

    Motorcycle m("Touring", "2-Cylinder");
    cout << "\n";
    return 0;
    cout << "v: " << v.getMotor() << endl;
    cout << "b: " << b.getType() << endl;
    cout << "m: " << m.getMotor() << " " << m.getType() << endl;


    cout << "\n";
    return 0;
}


