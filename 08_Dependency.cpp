/*
#include <iostream>
using namespace std;

// A relies upon B
// Person relies upon a street to drive to work.
// Scope and lifetime of A and B are independent
// Aside from the dependency, objects are unrelated.

class Person {
private:
    string name;
public:
    Person(): Person("Anonymous") {}
    Person(string n): name(n) {}
    friend ostream& operator << (ostream &out, const Person &c);
};

ostream& operator << (ostream &out, const Person &p) {
    return out << p.name;
}

// *********************************************************************************
// **************************      MAIN FUNCTION     *******************************
// *********************************************************************************

int main() {
    cout << "\n";

    Person c1{};
    Person c2{"John"};

    cout << c1 << "\n";
    cout << c2 << "\n";

    cout << "\n";
    return 0;
}

// Example of dependency is any class that implements the insertion overload.
// This Person class depends upon an ostream object to output person objects.
// There's reliance, however, there is no relationship between person and out. We're not storing out as a data member.

*/