#include<iostream>
using namespace std;
/*

// Class Composition by Value
// Purpose: Classes can contain data of other classes types composition is a has-a object relationship.

// Ex: a course has-a professor
// a car has-an engine

// Here we have a course with two variables in it, one is an number, one is a professor.

// Professor must be declared first
class Professor {
private:
    string name;
public:
    Professor(): name("Staff") {}                       // Constructor 1
    Professor(string n): name(n) {}                        // Constructor 2 with single parameter
    string getName() const {return name;}                  // Accessor function
    void setName(string n) {name = n;}                     // Mutator function
};

// Course must be declared second, after Professor type is known
class Course {
private:
    int number;
    // Professor &prof;
    Professor prof;                                         // Course contains a member of type Professor
                                                            // Memory space for Course includes a professor
public:
    // The 1st constructor is default, initializes number with a value 0.
    // Then initializes a professor object
    // prof() calls constructor 1 for Professor which then initializes name with "Staff" inside
    // the Professor prof; object from line 27 inside our Course object.
    Course(): number(0), prof() {}                          // prof() calls Professor default constructor

    // Single parameter constructor works the same, except that number comes from n.
    Course(int n): number(n), prof() {}                     // prof() calls Professor default constructor

    // Dual parameter constructor accepts an int, and a string.
    // The int is used to populate the number, string p is sent ot professor.
    // This will call constructor 2 from Professor class with a single parameter.
    // Professor(string n): name(n) {}
    //
    // While in constructor 2, the value of p is copied to n,
    // the value of n is copied to name which is a private member.
    // And therefore, we populate the professor object from the variable p.
    //
    // "Dr. Smith" gets copied to p by value, p is sent to constructor 2 function, the value of p is copied
    // to name.
    Course(int n, string p): number(n), prof(p) {}       // prof(p) calls Professor 1-param constructor

    // This one accepts a Professor object by reference.
    // Then it calls a constructor. But we don't have a constructor that accepts a Professor object.
    // prof(o) calls something known as a copy constructor.
    // If you do not code a copy constructor, the compiler will code one for you.
    // Instead of creating a professor from a string, prof(o) creates an object from an existing professor object.
    //
    // It creates a clone and a new object is created with all the same details as Professor &o object.
    Course(int n, Professor &o): number(n), prof(o) {}      // Professor object is copied by value to prof
    int getNumber() const {return number;}                  // accessor
    string getProfessor() const {return prof.getName();}    // Call the professor name accessor

    Professor& getProfObj() {return prof;}                  // Included for demonstration purposes
};

int main() {
    Course c1{};
    cout << c1.getNumber() << "\n";
    cout << c1.getProfessor() << "\n\n";

    Course c2{580, "Dr. Smith"};
    cout << c2.getNumber() << "\n";
    cout << c2.getProfessor() << "\n\n";

    Professor p1{"Dr. Jones"};                          // Creates a Professor object p1
    cout << &p1 << "\n\n";                                 // Prints memory address of p1

    Course c3{574, p1};                              // Create c2 using object p1
    cout << c3.getNumber() << "\n";
    cout << c3.getProfessor() << "\n";

    cout << &(c3.getProfObj()) << "\n";

    cout << "\n";
}
*/