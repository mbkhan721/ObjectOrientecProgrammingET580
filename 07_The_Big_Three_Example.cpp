/*
#include <iostream>
using namespace std;
// THE BIG THREE OR THE RULE OF THREE

class Course {
private:
    int *number;                                                // Dynamic data member
    string prof;                                                // Automatic data member
public:
    Course(): Course(0, "") {}
    Course(int n, string p): number(new int(n)), prof(p) {}     // Constructor with two parameters
    // It uses n to store dynamic memory that is pointed to by number. Uses p to store data in prof
    // which is automatic memory.
    friend ostream& operator<<(ostream& out, const Course &c);  // Operator overload friend func for << insertion

    // The big three
    Course(const Course &c);                                    // Copy constructor declaration
    Course& operator=(const Course &c);                         // assignment operator overload declaration
    ~Course();                                                  // destructor declaration
};

Course::Course(const Course &c):                                // Copy constructor
number(new int(*(c.number))),                                   // Initialize dynamic memory - Initialize the number variable by copying the data from the Course object c
prof(c.prof)                                                    // Initialize automatic memory
{}                                                              // It copies dynamic memory using the deep copy and copies automatic memory using shallow copy.

Course& Course::operator=(const Course &c) {                    // Assignment operator overload
    if (this != &c) {                                           // Only copy if objects are different
        *number = *(c.number);                                  // Deep copy the heap data member
        prof = c.prof;                                          // Shallow copy the stack data member
    }
    return *this;                                               // return the calling object by reference
}

Course::~Course() {                                             // destructor
    delete number;                                              // Safely delete dynamic memory
}

ostream& operator<<(ostream& out, const Course &c) {
    out << *(c.number) << " " << c.prof << "\n";
    out << "Object address: " << &c << "\n";                                // Print object memory address
    out << "Number pointer address (dynamic): " << c.number << "\n";        // Print number memory address
    return out;
}


// *********************************************************************************
// **************************      MAIN FUNCTION     *******************************
// *********************************************************************************

int main() {

    Course c1{580, "Khan"};
    Course c2{575, "Python"};
    Course c3{574, "An"};

    cout << "C1: " << c1 << "\n";
    cout << "C2: " << c2 << "\n\n";

    c1 = c2;                                // Called the assignment overload operator.

    cout << "C1: " << c1 << "\n";
    cout << "C2: " << c2 << "\n\n";

    Course c4{c3};                          // Constructing a new object c4 from object c3.
                                            // This calls the copy constructor.

    cout << "C3: " << c3 << "\n";
    cout << "C4: " << c4 << "\n\n";

    // We have 4 objects are all objects are completely independent of each other. Each has a
    // unique memory address.

    cout << "\n";
    return 0;
}
*/