/*
#include <iostream>
using namespace std;

// The slicing problem: data is lost when child objects are copied to parent object.
// You slice off the child data to keep the parent data.

class Animal {
public:
    string name;
    Animal(): Animal("") {}
    Animal(string n): name(n) {}
    virtual void output() const {cout << name << "\n";}
};

class Bird: public Animal {
public:
    int wingSpan;
    Bird(): Bird("", 1) {}
    Bird(string n, int w): Animal(n), wingSpan(w) {}
    void output() const override {cout << name << ", " << wingSpan << "\"\n";}

    // object passed by value (argument is copied to a parent parameter object)
    void print(const Animal a) {
        a.output();
    }

};


// *********************************************************************************
// **************************      MAIN FUNCTION     *******************************
// *********************************************************************************

int main() {
    cout << "\n";

    Animal a;
    Bird b("Eagle", 72);

    a = b;                              // copy from child to parent
    b.output();                         // print a child object     -   prints Eagle, 72"
    a.output();                         // print a parent object (data lost)    -   prints Eagle
    cout << "\n";

    b.print(b);                       // prints Eagle

    cout << "\n";
    return 0;
}
*/