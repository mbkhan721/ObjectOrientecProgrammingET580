/*
// Muhammad B. Khan
// Exam 1 - Question 4
// ET580 - Summer 2
#include<iostream>
#include<string>
using namespace std;

// 4) --------------------------------------------------------------------------
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

    friend ostream& operator<<(ostream &out, Vehicle &a);
    friend istream& operator>>(istream &in, Vehicle &a);

};

ostream& operator<<(ostream& out, Vehicle &a) {
    out << "Brand: " << a.getBrand() << "\n";
    out << "Model: " << a.getModel() << "\n";
    out << "Price: " << a.getPrice() << "\n";

    return out;
}

istream& operator>>(istream& in, Vehicle &a) {
    cout << "Enter the brand: ";
    in >> a.brand;
    cout << "Enter the model: ";
    in >> a.model;
    cout << "Enter the price: ";
    in >> a.price;
    cout << "\n";
    return in;
}

// *********************************************************************************
// **************************      MAIN FUNCTION    ********************************
// *********************************************************************************

int main() {
    // 4) --------------------------------------------------------------------------
    cout << "\nMuhammad B. Khan\nExam 1\nET580 - Summer 2\n\n------------ Question 4: \n";

    //Vehicle a{"Tesla", "Model 3", 40000};
    Vehicle a("Tesla", "Model 3", 40000);
    cout << a << "\n";

    cin >> a;
    cout << a << "\n";

    cout << endl;
}

*/