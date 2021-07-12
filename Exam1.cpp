/*
// Muhammad B. Khan
// Exam 1 - Question 1
// ET580 - Summer 2
#include<iostream>
#include<string>
using namespace std;

// 1) --------------------------------------------------------------------------
class Vehicle {
private:
    string brand;
    string model;
    int price;
public:
    // Default constructor
    Vehicle(): brand(), model(), price() {}

    // Accessor functions
    string getBrand() {return brand;}
    string getModel() {return model;}
    int getPrice() {return price;}

    // Mutators
    void setBrand(string make) {brand = make;}
    void setModel(string Model) {model = Model;}
    void setPrice(int p) {price = p;}

};

// *********************************************************************************
// **************************      MAIN FUNCTION    ********************************
// *********************************************************************************

int main() {
    // 1) --------------------------------------------------------------------------
    cout << "\nMuhammad B. Khan\nExam 1\nET580 - Summer 2\n\n------------ Question 1: \n";

    Vehicle a{};
    a.setBrand("BMW");
    a.setModel("X5");
    a.setPrice(60000);
    cout << "Brand: " << a.getBrand() << "\n";
    cout << "Model: " << a.getModel() << "\n";
    cout << "Price: " << a.getPrice() << "\n";

    cout << endl;
}
*/