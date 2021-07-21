/*
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
    Course2(): Course2(0) {}                                  // Default constructor
    Course2(int n): number(n) {}                                // Constructor with one parameter
    int getNumber() const {return number;}                      // Accessor function
};

// 4.
// -------------------------------------------------------- This Pointer
class Course3 {
private:
    int number;                                                 // Private Data member
public:
    Course3(): Course3(0) {}                                  // Default constructor
    Course3(int n): number(n) {}                                // Constructor with one parameter

    bool operator == (const Course3& c) {return this -> number == c.number;}
    friend ostream& operator << (ostream& out, const Course3 &c);

    void thisPrint() const {
        cout << this << "\n";                                   // Print the pointer to the calling object
        cout << *this << "\n\n";                                // Print the calling object (requires << overloading)
    }
    void thisCompare(Course3 &c) {
        if (this == &c ) {cout << "Same object \n";}            // Compare memory addresses
        if (*this == c ) {cout << "Equivalent object \n\n";}    // Comparing objects (requires == overload)
    }
};

ostream& operator << (ostream& out, const Course3 &c) {return (out << c.number);}


// 5.
// -------------------------------------------------------- Shallow Copy
class Course4 {
private:
    int *number;                                // Dynamic Data member
                                                // It points to dynamic memory created in the
                                                // constructor.
public:
    Course4(): Course4(0) {}
    Course4(int n): number(new int(n)) {}       // Initialize dynamic memory
    void shallowCopy(const Course4 &c);
};

// Shallow copy copies pointers from one object to another object, objects share data
void Course4::shallowCopy(const Course4 &c) {
    //
    // We print the memory addresses of the dynamic variables stored in C8 and C9.
    // And we print the values of the dynamic variables stored in c8 and c9.
                                                // number is a pointer so it prints memory address
                                                // of the variable THAT THESE POINTERS POINT TO.
    cout << number << "\n";                     // Prints memory address of number variable in c8.
    cout << c.number << "\n";                   // Prints memory address of number variable in c9.

    cout << *number << "\n";                    // I'm de-referencing the pointer and accessing the
    cout << *(c.number) << "\n\n";              // dynamic memory. Prints 580, 575

    // *c.number can be read as de-referencing c only. c.number gives me the value of number inside
    // the course object which is a memory address. The I de-reference that memory address to get
    // the actual data.

    // Shallow Copy
    number = c.number;                          // copy pointer values (memory address of data)
    //  c8 = c9
    // Copies the memory address of number in c9 into the pointer variable from c8.

    cout << number << "\n";                     // Prints memory address of number variable in c9.
    cout << c.number << "\n";                   // Prints memory address of number variable in c9.
    cout << *number << "\n";                    // I'm de-referencing the pointer and accessing the
    cout << *(c.number) << "\n";                // dynamic memory. Both prints 575, 575
}
// The problem is that both variables are now sharing the same dynamic location. Originally, we had
// an independent memory, now we also lost access to memory of c8 because of line 82. And now we
// have a memory leak in addition to c8 and c9 sharing the same memory on the heap.


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

    Course3 c6{575};
    Course3 c7{575};

    cout << &c6 << "\n";                                            // Print object memory address
    cout << c6 << "\n";                                             // Print object (requires << overload)

    c6.thisPrint();                                                 // Do the same thing using "this"

    c6.thisCompare(c6);                                         // Compare c6 with itself
    c6.thisCompare(c7);                                         // Compare c6 with c7


    // 5.
    // -------------------------------------------------------- Shallow Copy
    cout << "\n5. ---------------------- Shallow Copy:\n";

    Course4 c8{580};                    // Two automatic variables c8 & c9.
    Course4 c9{575};                    // Both contains pointer which points to dynamic memory.

    c8.shallowCopy(c9);                     // call shallowCopy by c8 and send c9 as a param.


    cout << "\n";
    return 0;
}
*/