/*
// Muhammad B. Khan
// Exam 1 - Question 5
// ET580 - Summer 2
#include<iostream>
#include<string>
using namespace std;

// 5) --------------------------------------------------------------------------
class Vehicle {
private:
    string brand;
    string model;
    int price;
public:
    // Default constructor with constructor delegation
    Vehicle(): Vehicle("TBD", "TBD", 0) {}
    // Three param constructor
    Vehicle(string b, string m, int p): brand(b), model(m), price(p) {}

    // Accessor functions
    string getBrand() {return brand;}
    string getModel() {return model;}
    int getPrice() {return price;}

};

bool operator>(Vehicle &a, Vehicle &b) {
    return (a.getPrice() > b.getPrice());
}
bool operator<(Vehicle &a, Vehicle &b) {
    return (a.getPrice() < b.getPrice());
}
bool operator==(Vehicle &a, Vehicle &b) {
    return (a.getPrice() == b.getPrice());
}
bool operator!=(Vehicle &a, Vehicle &b) {
    return (a.getPrice() != b.getPrice());
}

// *********************************************************************************
// **************************      MAIN FUNCTION    ********************************
// *********************************************************************************

int main() {
    // 5) --------------------------------------------------------------------------
    cout << "\nMuhammad B. Khan\nExam 1\nET580 - Summer 2\n\n------------ Question 5: \n";

    //Vehicle a{"Tesla", "Model 3", 40000};
    Vehicle a("Tesla", "Model 3", 40000);
    Vehicle b("Tesla", "Model y", 60000);
    cout << "Is a greater than b? " << (a>b) << "\n";
    cout << "Is a less than b? " << (a<b) << "\n";
    cout << "Is a equal to b? " << (a==b) << "\n";
    cout << "Is a NOT equal to b? " << (a!=b) << "\n";

    cout << endl;
}

*/