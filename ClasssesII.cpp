#include<iostream>
using namespace std;

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
class Course2 {
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

int main() {

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
    cout << c3b.number << "\n";
    cout << c3b.professor << "\n\n";

    cout << "3c)\n";
    Course3 c3c{580, "Dr. Dre"};            // Call the two-parameter constructor
    cout << c3c.number << "\n";
    cout << c3c.professor << "\n\n";


    // ----------------------------------------------------------------------------------------
    cout << endl;
    return 0;
}

