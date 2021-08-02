/*
#include <iostream>
using namespace std;

// In Late/Dynamic Binding, the type is determined at runtime instead or compile time.
// (Polymorphic effect)

// Late/Dynamic BINDING
class Parent {
protected:
    string name;
public:
    Parent(string n): name(n) {}
    virtual void output() const {cout << name << " (Parent)\n";}
};
class Child: public Parent {
public:
    Child(string n): Parent(n) {}
    void output() const override {cout << name << " (Child)\n";} // (Override)
};                                                      // override means that we're redefining a virtual function.
// If you write the word virtual to virtualize a function in the parent, you dont have to write the word override for
// the child redefined function. However, if you write override in the child function, you must virtual in the parent
// version or you'll have a compiler error.

// *********************************************************************************
// **************************      MAIN FUNCTION     *******************************
// *********************************************************************************

int main() {
    cout << "\n";

    Child c1("Fatima");
    c1.output();            // calls the child function
    cout << "\n";

    // The object decides which output function to call
    Parent &p2 = c1;        // parent reference to a child object
    Child &c2 = c1;         // child reference to a child object
    p2.output();            // calls the child function
    c2.output();            // calls the child function
    cout << "\n";

    // The object decides which output function to call
    Parent *p3 = &c1;       // Parent pointer to a child object
    Child *c3 = &c1;        // Parent pointer to a child object
    p3->output();           // calls the child function
    c3->output();           // calls the child function

    // In the static version, the reference or pointer type, which in that case was parent was dictating which
    // version of the function to run.
    //
    // In dynamic or late binding, it's the object itself which determines which version of the function to run.

    cout << "\n";
    return 0;
}
*/