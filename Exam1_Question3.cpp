/*
// Muhammad B. Khan
// Exam 1 - Question 3
// ET580 - Summer 2
#include<iostream>
#include<string>
using namespace std;

// 3) --------------------------------------------------------------------------
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
    int getPrice() const {return price;}

};

void output(Vehicle &r) {
    cout << "Brand: " << r.getBrand() << "\n";
    cout << "Model: " << r.getModel() << "\n";
    cout << "Price: " << r.getPrice() << "\n\n";
}

// *********************************************************************************
// **************************      MAIN FUNCTION    ********************************
// *********************************************************************************

int main() {
    // 3) --------------------------------------------------------------------------
    cout << "\nMuhammad B. Khan\nExam 1\nET580 - Summer 2\n\n------------ Question 3: \n";

    Vehicle a{"Ford", "Focus", 25000};
    output(a);

    cout << endl;
}

*/