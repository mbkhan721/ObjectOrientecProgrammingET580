/*
// Muhammad B. Khan
// Exam 3 - Question 1
// ET580 - Summer 2
#include<iostream>
#include<string>
using namespace std;

class Vehicle {
private:
    string *brand;
public:
    Vehicle(): Vehicle("TBD"){}
    Vehicle(string n): brand(new string(n)){}
    void setBrand(string b) {*brand = b;}
    string getBrand() {return *brand;}

    void output() {
        cout << "Brand: " << *brand << "\n";
    }
};

// *********************************************************************************
// **************************      MAIN FUNCTION    ********************************
// *********************************************************************************

int main() {
    // 1) --------------------------------------------------------------------------
    cout << "\nMuhammad B. Khan\nExam 3\nET580 - Summer 2\n\n------------ Question 1: \n";

    Vehicle a,b("BMW");
    a.output(); // Brand:TBD
    b.output(); // Brand:BMW
    a.setBrand("Tesla");
    cout<<a.getBrand()<<endl; // Tesla

    cout << endl;
    return 0;
}
*/