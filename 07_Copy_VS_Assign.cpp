/*
#include <iostream>
using namespace std;

class Course {
private:
    int number;
public:
    Course(): number(0) {
        cout << "def constructor.\n";
    }
    Course(const Course &c): number(c.number) {
        cout << "Copy constructor.\n";
    }
    Course& operator=(const Course &c) {
        cout << "Assignment operator overload.\n";
        number = c.number;
        return *this;
    }
};



// *********************************************************************************
// **************************      MAIN FUNCTION     *******************************
// *********************************************************************************

int main() {

    // Calling a constructor:
    // Course c1{};                 // Create object
    Course{};                       // Call the def constr
    Course c1{};                    // Call the def constr


    // Copy constructor
    // Course c2{c1};               // Create object from an object
    // Or
    // Course c2 = c1;              // Create object from an object
    Course c2{c1};                  // Call the copy constr / Construct c2 from c1
    Course c3 = c1;                 // Call the copy constr / Construct c3 from c1


    // Assignment Overload
    // c2 = c1;                     // Copy using existing objects
    c1 = c2;                        // Call the assignment overload operator


    // Copy constructors and assignment operator overload functions
    // are slower than regular constructors because they look up data
    // to copy, especially with dynamic memory (pointer overhead)
    //
    // Copy involves looking first at the source then moving the information over
    // to the destination and it can slow down the program if they're not well coded.



    cout << "\n";
    return 0;
}
*/