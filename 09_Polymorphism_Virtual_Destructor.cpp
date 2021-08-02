/*
#include <iostream>
using namespace std;

// Redefined function with child instead of parent return type

class Animal {
private:
    string *name;
public:
    Animal(string n): name(new string(n)) {}
    virtual void output() {cout << *name << "\n";}        // virtual
    string getName() const {return *name;}

    virtual ~Animal() {                                   // virtual destructor
        cout << "==> animal destructor\n";
        delete name;
    }
};

class Bird: public Animal {
public:
    Bird(string n, int w): Animal(n), wingSpan(new int(w)) {}
    void output() override {cout << this->getName() << ", "
    << *wingSpan << "\"""\n";}       // override

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

    Animal *a;

    a = new Bird("Eagle", 72);         // instantiate a child object
    a->output();
    delete a;                               // calls the parent destructor
                                            // wingspan is not deleted (memory leak)

    cout << "\n";
    return 0;
}
*/