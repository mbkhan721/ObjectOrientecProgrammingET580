
#include <iostream>
#include <time.h>
using namespace std;

class Course {
private:
    int *number;                            // dynamic data member
    string prof;                            // automatic data member
    int *studentIDs;                        // dynamic array
    int size;                               // size of the array
public:
    Course(): Course(0, "", 3) {}
    Course(int n, string p): Course(n, p, 3) {}
    Course(int n, string p, int s): number(new int(n)), prof(p), size(s), studentIDs(new int[s]) {
        for (int i = 0; i < size; ++i) {
            studentIDs[i] = rand() % 90 + 10 + 1;       // Store random values into array studentIDs for demo
        }
    }

    friend ostream& operator << (ostream& out, const Course &c);

    Course(const Course &c);                // Copy constructor
    Course& operator = (const Course &c);   // assignment operator overload
    ~Course();                              // destructor

};

Course::Course(const Course &c):            // Copy constructor
number(new int(*(c.number))),               // initialize heap memory
prof(c.prof),                               // Copy professor
size(c.size),                               // Copy size
studentIDs(new int[c.size])                 // Initialize a dynamic array with c.size
{
    for (int i = 0; i < c.size; ++i) {      // Copy array contents from c to *this
        studentIDs[i] = c.studentIDs[i];
    }
}

Course& Course::operator=(const Course &c) { // Assignment operator overload
    if (this != &c) {                       // Only copy if objects are different
        *number = *(c.number);              // Deep copy the heap data member
        prof = c.prof;                      // Shallow copy the stack data member

        if (size != c.size) {               // If arrays are different size, delete array
            delete [] studentIDs;           // delete original array
            size = c.size;                  // update size
            studentIDs = new int[c.size];   // create a new array of new size
        }
        for (int i = 0; i < size; ++i) {    // Copy the array contents from c to *this
            studentIDs[i] = c.studentIDs[i];
        }
    }
    return *this;                           // Return the calling object by reference
}

Course::~Course() {                         // Destructor
    delete number;                          // safely delete dynamic memory
    delete [] studentIDs;
}

ostream& operator << (ostream& out, const Course &c) {
    out << *(c.number) << " " << c.prof << "\n";
    out << "Object memory address: " << &c << "\n";
    out << "Member memory address: " << c.number << "\n";
    for (int i = 0; i < c.size; ++i) {
        out << c.studentIDs[i] << " ";
        out << &(c.studentIDs[i]) << "\n";
    }
    return out;
}


// *********************************************************************************
// **************************      MAIN FUNCTION     *******************************
// *********************************************************************************

int main() {
    cout << endl;
    srand(time(NULL));

    Course c1{580, "Trowbridge"};
    Course c2{575, "Sun"};

    cout << "C1: " << c1 << "\n\n";
    cout << "C2: " << c2 << "\n\n";

    // Copy constructor
    Course c3{c2};                      // New memory is created for c3 using deep copies
    cout << "C3: " << c3 << "\n\n";     // It will have separate memory addresses

    // Assignment operator overload
    c1 = c2;
    cout << "C1: " << c1 << "\n\n";     // The data got replaced but the memory address is unchanged.

    cout << "\n";
    return 0;
}
// The whole purpose of all these functions and deep copy is to ensure that each object memory is controlled
// and separate.
