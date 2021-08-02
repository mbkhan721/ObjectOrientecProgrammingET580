/*
#include <iostream>
using namespace std;

// OOP core feature review:
// Encapsulation is controlling access to object data and object behavior. We do so by public, private, and
// protected access modifiers.

// Abstraction is only exposing relevant object data and behavior per interaction. We should hide the data
// members under the private access modifiers but provide accessors and mutators to interact with them.
// Encapsulation and Abstraction work together. One provides control and the other suggests we only expose
// what we need to.

// Inheritance is sharing object data and behavior to eliminate code repetition.

// Polymorphism is sharing a common interface for related object types. In polymorphism, we create a common
// interface for a family of classes using inheritance. Many classes can share this common interface while
// maintaining access to unique behaviors that are derived at runtime.
//
// Requires inheritance
// Requires virtual functions
// Base reference or pointer used to access derived objects
//
// Virtual function is a redefined function where the calling object determines if the base or derived version of
// the function is called during runtime.


// STATIC OR EARLY BINDING
class Parent {
protected:
    string name;
public:
    Parent(string n): name(n) {}
    void output() const {cout << name << " (Parent)\n";}
};
class Child: public Parent {
public:
    Child(string n): Parent(n) {}
    void output() const {cout << name << " (Child)\n";} // Redefined
};

// *********************************************************************************
// **************************      MAIN FUNCTION     *******************************
// *********************************************************************************

int main() {
    cout << "\n";

    Child c1("Fatima");
    c1.output();            // calls teh child function
    cout << "\n";

    // The reference decides which output function to call
    Parent &p2 = c1;        // parent reference to a child object
    Child &c2 = c1;         // child reference to a child object
    p2.output();            // calls the parent function
    c2.output();            // calls the child function
    cout << "\n";

    // The pointer type decides which output function to call
    Parent *p3 = &c1;       // Parent pointer to a child object
    Child *c3 = &c1;        // Parent pointer to a child object
    p3->output();           // calls the parent function
    c3->output();           // calls the child function

    // Illegal: a child cannot reference or point to parent, only a parent can point to a child.
    // Child &c4 = p1;          reference
    // Child *c5 = &p1;         point

    cout << "\n";
    return 0;
}
*/