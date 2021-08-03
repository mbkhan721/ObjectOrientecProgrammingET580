
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

    Animal *a = new Animal("Zebra");
    Bird *b = new Bird("Vulture", 84);

    Animal *pAnimal;
    Bird *pBird;

    pAnimal = b;            // Implicit upcast from child to parent legal
    // pBird = a;           // compiler error: implicit downcast from parent to child not legal

    pBird = static_cast<Bird*>(a);      // explicit downcast from parent to child legal.
    pAnimal -> output();                // prints bird object using animal pointer - prints Vulture, 84"
    pBird -> output();                  // prints animal object using a bird pointer - prints Zebra
    cout << pBird->getWingSpan() << "\n";       // problem since bird points to an animal which lacks a wingspan.
                                                // - prints garbage

    cout << "\n";
    return 0;
}
