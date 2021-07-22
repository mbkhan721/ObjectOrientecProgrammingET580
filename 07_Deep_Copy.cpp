/*
#include <iostream>
using namespace std;

// Whenever we want to do a copy using an object that contains dynamic data, we have to do a deep copy.
// We have to dereference the pointer variables to make sure that the copy is occurring between the actual
// variables that store the data.
// Before we copy, we de-reference the variables.

// *c2.number = *(c1.number);

// c1.number returns the memory address and we de-reference it to get to the actual integer variable (or the value).
// Before we store it, we go to c2.number and we de-reference that to get to the actual value there, which is an
// integer variable.
// Therefore, the value of c1.number is coped to c2.number.
// Notice that we are copying data and not the memory addresses.

class Course {
private:
    int *number;        // Dynamic data member
public:
    Course(): Course(0) {}
    Course(int n): number(new int(n)) {}    // Initialize dynamic memory
    void deepCopy(const Course &c);
};
// Deep copy copies data from one object to another object, objects stay separate.
void Course::deepCopy(const Course &c) {
    cout << "\nDynamic memory address of this: " << this->number << "\n";
    cout << "Dynamic memory address of the calling object: "<< c.number << "\n";
    cout << "Value of the calling object: " << *number << "\n";
    cout << "Value of c2: " << *(c.number) << "\n";

    // Deep copy operation
    *number = *(c.number);              // dereference both pointers to copy the data
                                        // It gets the data pointed to by the number and stores it
                                        // at the location pointed to by the number because we
                                        // de-referenced both.

    cout << "\nDynamic memory address of this: " << this->number << "\n";
    cout << "Dynamic memory address of the calling object: "<< c.number << "\n";
    cout << "Value of the calling object: " << *number << "\n";
    cout << "Value of c2: " << *(c.number) << "\n";
}

// *********************************************************************************
// **************************      MAIN FUNCTION     *******************************
// *********************************************************************************

int main() {

    Course c1{580};
    Course c2{575};

    c1.deepCopy(c2);




    cout << "\n";
    return 0;
}
*/