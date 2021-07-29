/*
// Muhammad B. Khan
// Quiz 2 - Part 2
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

class Soda : public Beverage {
private:
    double price;
public:
    Soda(): price(0) {}
    Soda(string n, double p): Beverage(n), price(p) {}
    void setPrice(double p) {price = p;}
    double getPrice() {return price;}
};


// *********************************************************************************
// **************************      MAIN FUNCTION     *******************************
// *********************************************************************************

int main() {

    // 2) --------------------------------------------------------------------------
    cout << "\nMuhammad B. Khan\nQuiz 2\nET580 - Summer 2\n\n------------ Part 2: \n";

    // part 2
    Soda s1("Cola",2.99),s2;
    cout<<"s1: "<<s1.getName()<<" "<<s1.getPrice()<<endl; // print "s1: Gatorade 2.99"
    cout<<"s2: "<<s2.getName()<<" "<<s2.getPrice()<<endl; // print "s2: TBD 0"
    s2.setName("Fanta");
    s2.setPrice(1.99);
    cout<<"s2: "<<s2.getName()<<" "<<s2.getPrice()<<endl; // print "s2: Fanta 1.99"


    cout << "\n";
    return 0;
}
*/