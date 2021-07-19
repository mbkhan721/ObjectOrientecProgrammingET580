#include <iostream>
using namespace std;

// 1 & 2.
// -------------------------------------------------------- Equivalence:
class Course {
private:
    int number;
public:
    Course(): Course(0) {}
    explicit Course(int n): number(n) {}
    bool operator ==(const Course& c) const {return number == c.number;}
};









// *********************************************************************************
// **************************      MAIN FUNCTION     *******************************
// *********************************************************************************


int main() {

    // 1.
    // -------------------------------------------------------- Equivalence: Automatic Variables
    cout << "\n1. ---------------------- Equivalence: Automatic Variables:\n";
    //
    Course c1{575};                                             // Automatic Objects
    Course c2{575};                                             // Automatic Objects
    //
    // Test if equivalent objects (requires overload)
    cout << (c1 == c2) << "\n";                                    // Check if equivalent object
    //
    // Test if same object (check memory addresses)
    cout << (&c1 == &c2) << "\n\n";                                // Compare memory addresses


    // 2.
    // -------------------------------------------------------- Equivalence: Dynamic Variables

    Course *c3 = new Course{575};                                // with pointer *c1, we use the "new" operator to
                                                                    // create a dynamic memory.
    Course *c4 = new Course{575};                                // with pointer *c2, we use the "new" operator to
                                                                    // create a dynamic memory.
    Course *c5 = c4;    // c4 & c5 points to the same objects.
                                                                    // Three pointers, three dynamic objects.

    cout << c3 << "\n";                                             // Print pointer value
    cout << c4 << "\n";                                             // Print pointer value
    cout << c5 << "\n\n";                                           // Print pointer value

    // Test if equivalent objects (requires overload)
    cout << (*c3 == *c4) << "\n";                                   // Deference *c1, which means that I go the pointer
    cout << (*c4 == *c5) << "\n\n";                                 // and I get the object that it points to.
                                                                    // Same for c2.
    // Test if same object (check address)
    cout << (c3 == c4) << "\n";                                     // In this situation, I'm comparing the pointers
    cout << (c4 == c5) << "\n";                                     // c1 and c2. Not the objects that they point to.
                                                                    // Im comparing the values, what is the values?
                                                                    // They are the memory addresses.


    // 3.
    // -------------------------------------------------------- Equivalence: Dynamic Variables







    cout << "\n";
    return 0;
}