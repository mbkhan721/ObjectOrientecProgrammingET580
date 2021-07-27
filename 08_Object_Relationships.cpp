
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
    string getPosition() {return position;}
};
class Person {
private:
    string name;
    Arm left;
    Arm right;
public:
    Person(): Person("Anonymous") {}
    Person(string n): name(n), left("left arm"), right("right arm") {}

};



// *********************************************************************************
// **************************      MAIN FUNCTION     *******************************
// *********************************************************************************

int main() {



    cout << "\n";
    return 0;
}
