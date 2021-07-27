
#include <iostream>
using namespace std;

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


