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

// 3.
// -------------------------------------------------------- Arrow Operator
class Course2 {
public:
    int number;                                                 // Data member
    Course2(): Course2(0) {}                                 // Default constructor
    Course2(int n): number(n) {}                                // Constructor with one parameter
    int getNumber() const {return number;}                      // Accessor function
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
    cout << (&c1 == &c2) << "\n";                                  // Compare memory addresses


    // 2.
    // -------------------------------------------------------- Equivalence: Dynamic Variables
    cout << "\n2. ---------------------- Equivalence: Dynamic Variables:\n";

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
    // -------------------------------------------------------- Arrow Operator
    cout << "\n3. ---------------------- Arrow Operator:\n";

    Course2 *c = new Course2{};                                    // Construct a new Course object with value 580.
                                                                   // Point to it a Course object pointer *c.

                                                                   // I want to access data member "number". It's public
                                                                   // so we can do so.

                                                                   // 580 is a dynamic variable, in order for me to access
                                                                   // it, I MUST GO THROUGH THE POINTER.
    // dereference c to access number
    cout << (*c).number << "\n";

    // alternative syntax
    cout << c -> number << "\n\n";                                  // The arrow operator combines the two operations
                                                                    // above. The arrow operator means dereference the
                                                                    // pointer c and then access the data member number
                                                                    // inside the course object.

    (*c).number = 580;                                              // Deref pointer to access object data
    cout << (*c).getNumber() << "\n";                               // Deref pointer to access object functions

    c ->number = 585;                                               // Deref pointer to access object data
    cout << c -> getNumber() << "\n";                               // Deref pointer to access object functions

    // The arrow operation is two operations: Dereference and dot. operations.


    // 4.
    // -------------------------------------------------------- This Pointer
    cout << "\n4. ---------------------- This Pointer:\n";







    cout << "\n";
    return 0;
}