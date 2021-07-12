/*
// Muhammad B. Khan
// Exam 1 - Question 2
// ET580 - Summer 2
#include<iostream>
#include<string>
using namespace std;

// 2) --------------------------------------------------------------------------
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

// *********************************************************************************
// **************************      MAIN FUNCTION    ********************************
// *********************************************************************************

int main() {
    // 2) --------------------------------------------------------------------------
    cout << "\nMuhammad B. Khan\nExam 1\nET580 - Summer 2\n\n------------ Question 2: \n";

    Vehicle a, b{"Honda", "Civic", 25000};
    cout << "Brand: " << a.getBrand() << "\n";
    cout << "Model: " << a.getModel() << "\n";
    cout << "Price: " << a.getPrice() << "\n\n";

    cout << "Brand: " << b.getBrand() << "\n";
    cout << "Model: " << b.getModel() << "\n";
    cout << "Price: " << b.getPrice() << "\n";

    cout << endl;
}
*/
