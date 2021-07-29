/*
// Muhammad B. Khan
// Quiz 2 - Part 3
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

    friend ostream& operator << (ostream &out, const Beverage &b) {
        out << "Name: " << b.name << "\n";
        return out;
    }
    friend istream& operator >> (istream &in, Beverage &n) {}

};

class Soda : public Beverage {
private:
    double price;
public:
    Soda(): price(0) {}
    Soda(string n, double p): Beverage(n), price(p) {}
    void setPrice(double p) {price = p;}
    double getPrice() {return price;}

    friend ostream& operator << (ostream &out, const Soda &s) {
        out << "Price: " << s.price << "\n";
        return out;
    }

    friend istream& operator >> (istream &in, Soda &n) {}

};


// *********************************************************************************
// **************************      MAIN FUNCTION     *******************************
// *********************************************************************************

int main() {

    // 2) --------------------------------------------------------------------------
    cout << "\nMuhammad B. Khan\nQuiz 2\nET580 - Summer 2\n\n------------ Part 3: \n";

    // part 3
    Beverage b3("Poland Spring");
    cout<<b3; // print "Name: Poland Spring"
    cin>>b3;
    cout<<b3;
    Soda s3("Diet Coke",3.99);
    cout<<s3;
    // print Name: Diet Coke
    // Price: 3.99

    cin>>s3;
    cout<<s3;


    cout << "\n";
    return 0;
}
*/