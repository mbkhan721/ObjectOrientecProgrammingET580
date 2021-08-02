
#include <iostream>
using namespace std;

// Abstract classes are incomplete classes.
// Abstract classes are only instantiated through derived classes.
// We can't create objects of the abstract class, but we can create objects of derived
// classes from the abstract class.
// To make a class abstract, we have to put one or more pure virtual functions in that class.
// A pure virtual function is a function that has no definition and this function must be
// redefined in derived classes with definitions.

class Animal {      // an abstract class
protected:
    string name;
public:
    Animal(): Animal("") {}
    Animal(string n): name(n) {}
    virtual void move() const = 0;        // pure virtual function, only derived in child classes
};

class Primate: public Animal {          // derived from an abstract class
public:
    Primate(string n): Animal(n) {}
    void move() const override {cout << name << " walks\n";}
};

class Bird: public Animal {             // derived from an abstract class
public:
    Bird(string n): Animal(n) {}
    void move() const override {cout << name << " flies\n";}

    ~Bird() {
        cout << "==> bird destructor\n";
        delete wingSpan;
    }
private:
    int *wingSpan;
};


// *********************************************************************************
// **************************      MAIN FUNCTION     *******************************
// *********************************************************************************

int main() {
    cout << "\n";

    // Animal animal;                       // compiler error: abstract class cannot be instantiated

    Animal *a;                              // abstract class pointer is ok
    Primate p("Humans");                // child class (Automatic variable)
    Bird *b = new Bird("Eagle");        // child class (Dynamic variable)

    p.move();                               // calls Primate move   -   prints Humans walks
    b->move();                              // calls Bird move  -   prints Eagle flies
    cout << "\n";

    a = &p;                                 // parent pointer to a child object - Animal *a pointer referring to Primate
    a->move();                              // Calls Primate move   -   prints Humans walks
    a = b;                                  // parent pointer to a child object (bird object) - a points to Bird object
    a->move();                              // calls bird move  -   prints Eagle flies

    cout << "\n";
    return 0;
}
// I can create objects from derived classes and point to it from using the pointer of the parent type. But I cannot
// create an object from type animal.
