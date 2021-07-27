/*
#include <iostream>
using namespace std;

// Composition is a structure with two or more classes. Ex: Class A had a member of Class B.
// OR Class B is part of class A.
// OR we can say that we have a human class and a heart class.
// Human has-a heart or heart is part of human.
// This relationship is unique, if the heart dies, the human dies or vice versa.
// The scope and lifetime of both are linked.

class Arm {
private:
    string position;
public:
    Arm(): Arm(""){}
    Arm(string p): position(p) {}
    string getPosition() const {return position;}
};
class Person {
private:
    string name;
    Arm left;                   // Type Arm
    Arm right;                  // Type Arm
public:                         // Both arms are stored by value inside the person object. We can see that in constr below.
    Person(): Person("Anonymous") {}
    Person(string n): name(n), left("left arm"), right("right arm") {}
    friend ostream& operator << (ostream &out, const Person &c);
};

ostream& operator << (ostream &out, const Person &p) {
    out << p.name << " " << p.left.getPosition() << " " << p.right.getPosition();
    return out;
}


// *********************************************************************************
// **************************      MAIN FUNCTION     *******************************
// *********************************************************************************

int main() {
    cout << "\n";

    Person c1{};
    Person c2{"Khan"};

    cout << "c1: " << c1 << "\n";
    cout << "c2: "  << c2 << "\n";


    cout << "\n";
    return 0;
}
*/