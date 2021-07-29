/*
// Muhammad B. Khan
// Quiz 2 - Part 1
// ET580 - Summer 2
#include <iostream>
using namespace std;

class Beverage {
private:
    string name;
public:
    Beverage(): name("TBD") {}
    Beverage(string n): name(n) {}
    void setName(string n) {name = n;}
    string getName() {return name;}
};

// *********************************************************************************
// **************************      MAIN FUNCTION     *******************************
// *********************************************************************************

int main() {

    // 1) --------------------------------------------------------------------------
    cout << "\nMuhammad B. Khan\nQuiz 2\nET580 - Summer 2\n\n------------ Part 1: \n";

    // part 1
    Beverage b1("Gatorade"),b2;
    cout<<"b1: "<<b1.getName()<<endl; // print "b1: Gatorade"
    cout<<"b2: "<<b2.getName()<<endl; // print "b2: TBD"
    b2.setName("Vitamin water");
    cout<<"b2: "<<b2.getName()<<endl; // print "b2: Vitamin water"


    cout << "\n";
    return 0;
}
*/