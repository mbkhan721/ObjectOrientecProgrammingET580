/*
#include <iostream>
using namespace std;

class Course {
private:
    int number;                                                 // Private Data member
public:
    Course(): Course(0) {}                                  // Default constructor
    Course(int n): number(n) {}                                // Constructor with one parameter

    bool operator == (const Course& c) {return this -> number == c.number;}
                                                                // The arrow operator is two operations, it
                                                                // de-reference the pointer and then a dot operation
                                                                // to access the number variable.
    friend ostream& operator << (ostream& out, const Course &c);

    // If I have any member functions, I'm always going to have a pointer called this. It points to
    // the calling object that called this function.


    // Member function
    void thisPrint() const {
        cout << this << "\n";                                   // Print the pointer to the calling object
        cout << *this << "\n\n";                                // Print the calling object (requires << overloading)
    }
    // Member function
    // Compare the calling object to an object that we send to the function by parameter.
    // We call the parameter object c.
    void thisCompare(Course &c) {
        if (this == &c ) {cout << "Same object \n";}            // Compare memory addresses of the calling object to
                                                                // the parameter object.

        if (*this == c ) {cout << "Equivalent object \n\n";}    // Comparing objects (requires == overload)
                                                                // *this means that we de-reference this and we get
                                                                // the actual calling object. So we compare the value
                                                                // of the calling object to the value of the parameter
                                                                // object. Both values are 575 so it will print
                                                                // "Equivalent object".
    }
    // Comparing objects requires an overloaded equivalence operator.
};

// Insertion operator overloaded
ostream& operator << (ostream& out, const Course &c) {return (out << c.number);}

// *********************************************************************************
// **************************      MAIN FUNCTION     *******************************
// *********************************************************************************

int main() {

    Course c1{575};
    Course c2{575};

    cout << &c1 << "\n";                                            // Print object memory address
    cout << c1 << "\n";                                             // Print object (requires << overload)

    c1.thisPrint();                                                 // Do the same thing using "this".

    // c1 is the calling object.
    // If I call thisPrint() from a course object, (in this case, c1), then this course object will be the
    // calling object of this print.
    // I can use the keyword "this" to access the calling object.
    // It will print the value of the pointer to the calling object (or memory address of &c1) because
    // it is coded in the function.
    // Then it will print *this, which de-references the pointer and returns the calling object itself. And
    // will print the value of the calling object.
    // Printing out the object of type Course (in this case, c1) I need to overload the insertion operator.

    c1.thisCompare(c1);                                         // Compare c6 with itself
    c1.thisCompare(c2);                                         // Compare c6 with c7

    cout << "\n";
    return 0;
}
*/