/*
#include <iostream>
using namespace std;

class Course {
private:
    int number;
public:
    Course(): number(0) {                               // Constr
        cout << "def constructor.\n";
    }
    Course(const Course &c): number(c.number) {         // Copy constr
        cout << "Copy constructor.\n";
    }
    Course& operator=(const Course &c) {                // Assignment operator overload
        cout << "Assignment operator overload.\n";
        number = c.number;
        return *this;
    }
};

// Function 1:
void passByValue(Course c) {}       // Accepts an object by pass by value

// Function 2:
Course returnByValue() {            // Returns a course object by value
    return Course{};
}

// *********************************************************************************
// **************************      MAIN FUNCTION     *******************************
// *********************************************************************************

int main() {

    cout << "\nConstruct Objects: \n";

    Course c1{};                    // Call the def constr


    Course c2 = c1;                 // Call the copy constr / New object from existing object
    // Or
    // Course c2{c1};

    Course c3 = Course{};           // Memory optimization / c3 = temporary object
                                    // Call the def constr
                                    // the temp

    cout << "\nPass by Value: \n";

    passByValue(c1);                // Call the copy constructor
    // c1 is an object with its own memory space and the new object c in function 1 is an object
    // with its own memory space. So when we pass an object by value, a copy constr will be
    // called. Because we have to copy from c1 to the new object of type Course c in function 1.


    passByValue(Course{});       // Memory Optimization
                                   // Call the def constr
    // This is sending a temporary object.
    // The temp object gets created in the memory in the memory space that will be known as c
    // inside function 1. Therefore, it only calls the default constr to create the object c
    // using the data specified from this temporary object.

    cout << "\nReturn by Value: \n";

    c3 = returnByValue();           // Call the def constr
    // returnByValue() creates a course object, returns it and then we store that data inside c3.
    // TWO FUNCTIONS ARE CALLED
    // The default constr is called to construct the temporary object that gets returned by value.
    // That temporary object sits to the right of the assign = operator.
    // Then the assignment operator overload is called to copy that temp obj to c3.

    cout << "\n";
    Course c4 = returnByValue();    // Memory Optimization
                                    // Call the def constr
    // c4 is constructed with data returned by function 2 returnByValue().
    // The difference between line 66 and 74 is that we can't create the temporary object in c3
    // because c3 already exists.
    // Line 74 we are creating a new obj so the obj is created in func 2 and it is returned to the
    // new location c4.


    cout << "\n";
    return 0;
}
*/