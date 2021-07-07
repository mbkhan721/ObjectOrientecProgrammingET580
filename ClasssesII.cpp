#include<iostream>
using namespace std;
/*
// 1.
class Course {                              // With default constructor
public:
    int number;
    string professor;

    // Default constructor initializes data member values with an initialization list
    // INITIALIZATION LIST starts after the (): and ends before the code block.
    // Course() is the default CONSTRUCTOR
    Course(): number(0), professor("Staff") {       // assigns the value 0 to number, "Staff" to professor
        // Code block will be used to do additional things rather than to assign variables.
        // The advantage of initialization before the code block is that the variables are
        // already initialized before the code here takes place.
    }
};
// ----------------------------------------------------------------------------------------

// 2.
class Course2 {                             // With no constructor
public:
    int number;
    string professor;

    // If the default constructor is missing, the compiler automatically creates one.
    // Whenever you explicitly do not code the default constructor, the compiler will
    // create one for you to automatically assign the variables the default values. This
    // way they don't have garbage.
};
// ----------------------------------------------------------------------------------------

// 3.
// It's possible to have more than one constructor(s) with different numbers of parameters

class Course3 {
public:
    int number;
    string professor;

    // 3a.
    // Default constructor
    Course3(): number(0), professor("Staff") {
        cout << "Default constructor\n";
    }

    // 3b.
    // One parameter constructor
    Course3(int n): number(n), professor("Staff") {    // Copy n to number
        cout << "One-parameter constructor\n";
    }

    // 3c.
    // Two-Parameter constructor
    Course3(int n, string p): number(n), professor(p) {     // Copy n to number, p to professor
        cout << "Two-Parameter constructor\n";
    }
};
// ----------------------------------------------------------------------------------------

// 4.
class Course4 {
public:
    int number = 5;                             // This is MEMBER INITIALIZATION - default data member
    string professor = "Staff";                 // values are assigned for all objects.

    Course4() {                                 // Default constructor that does nothing.
                                                // No values assigned, num & prof values set by
                                                // member initialization.
    }
    Course4(int n): number(n) {                 // One-parameter constructor that assigns one of
                                                // the two parameters.
                                                // number value set by initialization list.
                                                // professor value set by member initialization.
    }
};
// ----------------------------------------------------------------------------------------

// 5.
class Course5 {
public:
    int number;
    string professor;

    // Default constructor
    // default constructor is NOT automatically created if other constructors are coded.
    //Course5(): number(), professor(){             This would've been the default constructor.
    // }

    Course5(int n): number(n), professor("Staff") {
        cout << "One-parameter constructor\n";
    }
    Course5(int n, string p): number(n), professor(p) {
        cout << "Two-parameter constructor\n";
    }
};
// ----------------------------------------------------------------------------------------

// 6. CONSTRUCTOR DELEGATION
class Course6 {
public:
    int number;
    string professor;

    // CONSTRUCTOR DELEGATION: Constructors can call other constructors

    // Default constructor with 0 parameters.
    // number is set to 0, professor is set to "Staff".
    // Instead of having the variables in the Initialization List,
    // this Initialization List calls one of the other constructors.
    // What constructor does it call?
    // We are supplying two arguments, so this calls the two parameters constructor.
    Course6(): Course6(0, "Staff"){                     // Call the two-parameter constructor
        cout << "Default constructor\n";
    }
    Course6(int n): Course6(n, "Staff"){                   // Call the two-parameter constructor
        cout << "One-parameter constructor\n";
    }

    Course6(int n, string p): number(n), professor(p) {       // This is not using delegation
        cout << "Two-parameter constructor\n";                // This is a direct call
    }
};
// ----------------------------------------------------------------------------------------
*/
// 7. EXTERNALLY DEFINING CONSTRUCTORS
class Course7 {
public:
    int number;
    string professor;
                                                // Three constructors declared
    Course7();                                  // Default constructor
    Course7(int n);                             // one-parameter constructor
    Course7(int n, string p);                   // Two-parameter constructor
};
// Constructors externally defined
Course7::Course7(): Course7(0, "Staff") {                         // Default constructor
    cout << "Default constructor\n";
}
Course7::Course7(int n): Course7(n, "Staff") {                       // one-parameter constructor
    cout << "One-parameter constructor\n";
}
Course7::Course7(int n, string p): number(n), professor(p) {            // Two-parameter constructor
    cout << "Two-parameter constructor\n";
}
// ----------------------------------------------------------------------------------------

int main() {
    /*
    cout << "\n1)\n";
    // class Course with default constructor
    Course c1{};                                // Call the default constructor
    cout << c1.number << "\n";                  // Prints the value assigned by the default constructor
    cout << c1.professor << "\n";               // Prints the value assigned by the default constructor
    // ----------------------------------------------------------------------------------------

    cout << "\n2)\n";
    cout << "class Course2 with NO constructor\n";
    Course2 c2{};                               // Call the default constructor
    cout << c2.number << "\n";                  // Prints 0, the default value for integers
    cout << c2.professor << "\n";               // Prints "", the default value for strings
    // ----------------------------------------------------------------------------------------

    cout << "3a)\n";
    Course3 c3a{};                              // Call the default constructor
    cout << c3a.number << "\n";
    cout << c3a.professor << "\n\n";

    cout << "3b)\n";
    Course3 c3b{580};                         // Call the one-parameter constructor
    cout << c3b.number << "\n";                  // Prints 580
    cout << c3b.professor << "\n\n";

    cout << "3c)\n";
    Course3 c3c{580, "Dr. Dre"};           // Call the two-parameter constructor
    cout << c3c.number << "\n";
    cout << c3c.professor << "\n\n";

    // ----------------------------------------------------------------------------------------

    cout << "4a)\n";
    Course4 c4{};                                // Call the default constructor
    cout << c4.number << "\n";                   // Prints the value assigned by MEMBER INITIALIZATION
    cout << c4.professor << "\n\n";              // Prints the value assigned by MEMBER INITIALIZATION

    cout << "4b)\n";
    Course4 c4b{580};                         // Call one-parameter constructor
    cout << c4b.number << "\n";                  // Prints the value assigned by one-parameter constructor
    cout << c4b.professor << "\n\n";             // Prints the value assigned by MEMBER INITIALIZATION

    // ----------------------------------------------------------------------------------------

    cout << "5a)\n";
    //Course5 c5a{};                            // Error because no default constructor was created.
    //cout << c5a.number << "\n";               // This object is looking for a default constructor,
    //cout << c5b.professor << "\n\n";          // but there is none.
                                                // Once you create constructors with parameters, the
                                                // compiler no longer creates a default constructors.
    cout << "Course5 c5a{}; will generate a compiler error.\n\n";

    cout << "5b)\n";
    Course5 c5b{580};                           // Call the one-parameter constructor
    cout << c5b.number << "\n";
    cout << c5b.professor << "\n\n";

    cout << "5c)\n";
    Course5 c5c{580, "Dr. Smith"};              // Call the two-parameter constructor
    cout << c5c.number << "\n";
    cout << c5c.professor << "\n\n";

    // ----------------------------------------------------------------------------------------

    cout << "6a)\n";
    Course6 c6a{};                              // Calls the default constructor.
                                                // The default constructor will then call the
                                                // two-parameter constructor.
                                                // You end up with two functions calls to initialize
                                                // this object.
    cout << c6a.number << "\n";
    cout << c6a.professor << "\n\n";

    cout << "6b)\n";
    Course6 c6b{580};                        // Calls the one-parameter constructor
                                                // This will again constructor will then call the
                                                // two-parameter constructor.
                                                // number gets populated with n which is 580.
                                                // professor gets populated with staff.
    cout << c6b.number << "\n";
    cout << c6b.professor << "\n\n";

    cout << "6c)\n";
    Course6 c6c{580, "Dr. Smith"};         // This is a direct call to two-parameter constructor
    cout << c6c.number << "\n";                 // This is not using delegation
    cout << c6c.professor << "\n\n";

    // ----------------------------------------------------------------------------------------
    */
    cout << "7a)\n";
    Course7 c7a{};                                    // Calling the default constructor
    cout << c7a.number << "\n";
    cout << c7a.professor << "\n\n";

    cout << "7b)\n";
    Course7 c7b{580};                              // Calling the one-parameter constructor
    cout << c7b.number << "\n";
    cout << c7b.professor << "\n\n";

    cout << "7c)\n";
    Course7 c7c{580, "Dr. Smith"};               // Calling the two-parameter constructor
    cout << c7c.number << "\n";
    cout << c7c.professor << "\n\n";





    cout << endl;
    return 0;
}

