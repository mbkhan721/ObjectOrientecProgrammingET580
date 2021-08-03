/*
#include <iostream>
using namespace std;

// The slicing problem: data is lost when child objects are copied to parent object

class Animal {      // an abstract class
protected:
    string name;
public:
    Animal(): Animal("") {}
    Animal(string n): name(n) {}
    virtual void output() const {cout << name << "\n";}        // virtual
};

class Primate: public Animal {
public:
    Primate(): Primate("", 0) {}
    Primate(string n, int f): Animal(n), numFingers(f) {}
    void output() const {cout << name << ", " << numFingers << "\"\n";}
    int getNumFingers() const {return numFingers;}
private:
    int numFingers;
};

class Bird: public Animal {
private:
    int wingSpan;
public:
    Bird(): Bird("", 1) {}
    Bird(string n, int w): Animal(n), wingSpan(w) {}
    void output() const {cout << name << ", " << wingSpan << "\"\n";}

    int getWingSpan() const {return wingSpan;}

};


// *********************************************************************************
// **************************      MAIN FUNCTION     *******************************
// *********************************************************************************

int main() {
    cout << "\n";

    // These are animal pointers
    Animal **a = new Animal*[5];
    a[0] = new Animal("Zebra");
    a[1] = new Bird("Vulture", 84);
    a[2] = new Primate("Human", 5);
    a[3] = new Bird("Eagle", 60);
    a[4] = new Primate("Monkey", 4);

    // converting Animal pointers to Bird pointers
    for (int i = 0; i < 5; ++i) {
        if (dynamic_cast<Bird*>(a[i])) {                // Check if a[i] is-a Bird
            Bird *b = dynamic_cast<Bird*>(a[i]);        // if so, cast then run a bird function
            cout << b->getWingSpan() << "\n";
        }
        // converting Animal pointers to Primate pointers
        else if (dynamic_cast<Primate*>(a[i])) {        // Check if a[i] is-a primate
            Primate *p = dynamic_cast<Primate*>(a[i]);  // if so, cast then run a primate function
            cout << p->getNumFingers() << "\n";
        }
    }
    cout << "\n";

    a[1]->output();                 // Works because output() is in all classes
    a[2]->output();                 // Works because output() is in all classes

    // a[1]->getWingSpan();         // compiler error: requires bird pointer
    // a[2]->getNumFingers();       // compiler error: requires primate pointer

    cout << "\n";
    return 0;
}
*/