/*
// Muhammad B. Khan
// Exam 3 - Question 2
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

class Car : public Vehicle {
private:
    int *weight;
public:
    Car(): Car("TBD", 0) {}
    Car(string b, int w): Vehicle(b), weight(new int (w)) {}
    void setWeight(int w) {*weight = w;}
    int getWeight() {return *weight;}

    void output() {
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

    void output() {
        cout << "Brand: " << getBrand() << " " << "hullLength: " << *hullLength << "\n";
    }
};

// *********************************************************************************
// **************************      MAIN FUNCTION    ********************************
// *********************************************************************************

int main() {
    // 2) --------------------------------------------------------------------------
    cout << "\nMuhammad B. Khan\nExam 3\nET580 - Summer 2\n\n------------ Question 2: \n";

    Car a,b("Honda",2000);
    a.output(); // Brand:TBD Weight: 0
    b.output(); // Brand:Honda Weight: 2000
    b.setBrand("Tesla");
    b.setWeight(3000);
    b.output(); // Brand:Tesla Weight: 3000
    Boat c,d("Baja",100);
    c.output(); // Brand:TBD hullLength: 0
    d.output(); // Brand:Baja hullLength: 100
    d.setBrand("Bertram");
    d.sethullLength(60);
    d.output(); // Brand:Bertram hullLength: 60


    cout << endl;
    return 0;
}
*/