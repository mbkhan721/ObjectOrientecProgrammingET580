/*
#include <iostream>
using namespace std;

// In Late/Dynamic Binding, the type is determined at runtime instead or compile time.
// (Polymorphic effect)

// Late/Dynamic BINDING
class Animal {
protected:
    string name;
public:
    Animal(): Animal("") {}
    Animal(string n): name(n) {}
    virtual void move() {cout << name << " moves\n";}       // virtual
};

class Primate: public Animal {
public:
    Primate(string n): Animal(n) {}
    void move() override {cout << name << " walks\n";}      // override
};

class Bird : public Animal {
public:
    Bird(string n): Animal(n) {}
    void move() override {cout << name << " flies\n";}      // override
};


// *********************************************************************************
// **************************      MAIN FUNCTION     *******************************
// *********************************************************************************

int main() {
    cout << "\n";

    Animal *a = new Animal[5];              // dynamic array of animal objects
    // It creates a new array of Animal objects in the heap which is pointed to by a.
    a[0] = Primate("Human");            // object is an animal
    a[1] = Bird("Eagle");               // object is an animal
    a[2] = Primate("Gorilla");          // object is an animal
    a[3] = Bird("Hawk");                // object is an animal
    a[4] = Bird("Falcon");              // object is an animal

    // This is an array of animal objects even though we assign values to this array using Primate or Bird objects.
    // Since these are animal objects, when we call the move function, it's going to call the Animal version of the
    // move() function.

    for (int i = 0; i < 5; ++i) {           // calls parent version of move()
        a[i].move();
    }
    cout << "\n";

    Animal **b = new Animal*[5];            // dynamic array of pointers to animals
    // this is not an array of Animal objects, this is an array of Animal pointers.
    // the first * in **b indicates that this is a pointer and this will point to Animals, but the 2nd * indicates
    // that this is not a pointer to Animals, it's a pointer to Animal pointers.
    b[0] = new Primate("Human");        // object is a Primate (child of Animal)
    b[1] = new Bird("Eagle");           // object is a Eagle (child of Animal)
    b[2] = new Primate("Gorilla");      // object is a Primate (child of Animal)
    b[3] = new Bird("Hawk");            // object is a Bird (child of Animal)
    b[4] = new Bird("Falcon");          // object is a Bird (child of Animal)

    for (int i = 0; i < 5; ++i) {           // calls child version of move()
        b[i] ->move();
    }

    cout << "\n";
    return 0;
}
*/