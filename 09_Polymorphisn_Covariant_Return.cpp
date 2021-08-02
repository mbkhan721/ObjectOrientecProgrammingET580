/*
#include <iostream>
using namespace std;

// Redefined function with child instead of parent return type

class Animal {
protected:
    string name;
public:
    Animal(string n): name(n) {}
    virtual void output() {cout << "Animal\n";}        // virtual
    virtual Animal* getThis() {return this;}
};

class Primate: public Animal {
public:
    Primate(string n): Animal(n) {}
    void output() override {cout << "Primate\n";}       // override
    Primate* getThis() override {return this;}          // override with covariant return
};

class Bird : public Animal {
public:
    Bird(string n): Animal(n) {}
    void output() override {cout << name << " Bird\n";}          // override
    Bird* getThis() override {return this;}             // override with covariant return
};


// *********************************************************************************
// **************************      MAIN FUNCTION     *******************************
// *********************************************************************************

int main() {
    cout << "\n";

    Animal *a;

    a = new Animal("Animal");                      // a points to parent object (Animal)
    a->getThis()->output();                           // executes the parent function
    delete a;
    cout << "\n";

    a = new Primate("Human");                       // a points to child object (Primate)
    a->getThis()->output();                             // executes the child function
    delete a;
    cout << "\n";

    a = new Bird("Eagle");                          // a points to child object (Bird)
    a->getThis()->output();                             // executes the child function
    delete a;

    cout << "\n";
    return 0;
}
//  a->getThis()->output();
// a.getThis, we dereference the pointer and then we call the get this function upon the object that this points to.
// In line 51, this object points to Bird so this is gonna call getThis function from line 27 in Bird. This function
// returns a pointer to object a because it returns the pointer to the calling object. From that, I dereference the
// pointer to get line 50 and then call the output function.
// It does a double arrow operation.
*/