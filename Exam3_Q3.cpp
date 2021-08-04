/*
// Muhammad B. Khan
// Exam 3 - Question 3
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
    string getBrand() const {return *brand;}

    virtual void output() const = 0;            // pure virtual function
};

class Car : public Vehicle {
private:
    int *weight;
public:
    Car(): Car("TBD", 0) {}
    Car(string b, int w): Vehicle(b), weight(new int (w)) {}
    void setWeight(int w) {*weight = w;}
    int getWeight() {return *weight;}

    void output() const override {
        cout << "Brand: " << getBrand() << " " << "Weight: " << *weight << "\n";
    }
};

class Boat : public Vehicle {
private:
    int *hullLength;
public:
    Boat(): Boat("TBD", 0) {}
    Boat(string b, int h): Vehicle(b), hullLength(new int (h)) {}
    void sethullLength(int h) {*hullLength = h;}
    int gethullLength() {return *hullLength;}

    void output() const override {
        cout << "Brand: " << getBrand() << " " << "hullLength: " << *hullLength << "\n";
    }
};

// *********************************************************************************
// **************************      MAIN FUNCTION    ********************************
// *********************************************************************************

int main() {
    // 3) --------------------------------------------------------------------------
    cout << "\nMuhammad B. Khan\nExam 3\nET580 - Summer 2\n\n------------ Question 3: \n";

    Vehicle *a;
    a = new Car("Honda",2000);
    a->output(); // Brand:Honda Weight: 2000
    a = new Boat("Baja",100);
    a->output(); // Brand:Baja hullLength: 100

    cout << endl;
    return 0;
}
*/