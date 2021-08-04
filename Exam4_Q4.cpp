/*
// Muhammad B. Khan
// Exam 3 - Question 4
// ET580 - Summer 2
#include<iostream>
#include<string>
using namespace std;

class Vehicle {
private:
    string *brand;
public:
    Vehicle(): Vehicle("TBD"){}
    explicit Vehicle(string n): brand(new string(n)){}
    void setBrand(string b) {*brand = b;}
    string getBrand() const {return *brand;}

    virtual void output() const = 0;            // pure virtual function

    // destructor
    virtual ~Vehicle() {
        cout << "==> Vehicle Destructor.\n";
        delete brand;
    }
    // assignment operator overload
    Vehicle& operator = (const Vehicle &c) {
        if (this != &c) {
            *brand = *(c.brand);
        }
        cout << "==> Vehicle assignment operator.\n";
        return *this;
    }
};

class Car : public Vehicle {
private:
    int *weight;
public:
    Car(): Car("TBD", 0) {}
    Car(string b, int w): Vehicle(b), weight(new int (w)) {}
    void setWeight(int w) {*weight = w;}
    int getWeight() const {return *weight;}

    void output() const override {
        cout << "Brand: " << getBrand() << " " << "Weight: " << *weight << "\n";
    }
    // destructor
    ~Car() override {
        cout << "==> Car Destructor.\n";
        delete weight;
    }
    // assignment operator overload
    Car& operator = (const Car &c) {
        cout << "==> Car assignment operator.\n";
        if (this != &c) {
            *weight = *(c.weight);
        }
        return *this;
    }
};

class Boat : public Vehicle {
private:
    int *hullLength;
public:
    Boat(): Boat("TBD", 0) {}
    Boat(string b, int h): Vehicle(b), hullLength(new int (h)) {}
    void sethullLength(int h) {*hullLength = h;}
    int gethullLength() const {return *hullLength;}

    void output() const override {
        cout << "Brand: " << getBrand() << " " << "hullLength: " << *hullLength << "\n";
    }
    // destructor
    ~Boat() override {
        cout << "==> Boat Destructor.\n";
        delete hullLength;
    }
    // assignment operator overload
    Boat& operator = (const Boat &c) {
        cout << "==> Boat assignment operator.\n";
        if (this != &c) {
            *hullLength = *(c.hullLength);
        }
        return *this;
    }
};

// *********************************************************************************
// **************************      MAIN FUNCTION    ********************************
// *********************************************************************************

int main() {
    // 4) --------------------------------------------------------------------------
    cout << "\nMuhammad B. Khan\nExam 3\nET580 - Summer 2\n\n------------ Question 4: \n";

    Car a("Honda",2000),b;
    a.output(); // Brand: Honda Weight: 2000
    b.output(); // Brand: TBD Weight: 0
    b = a;
    b.output(); // Brand: Honda Weight: 2000
    b.setBrand("Tesla");
    b.setWeight(3000);
    b.output(); // Brand: Tesla Weight: 3000
    a.output(); // Brand: Honda Weight: 2000
    Boat c("Baja",100),d;
    c.output(); // Brand: Baja hullLength: 100
    d.output(); // Brand: TBD hullLength: 0
    d = c;
    d.output(); // Brand: Baja hullLength: 100
    d.setBrand("Bertram");
    d.sethullLength(60);
    d.output(); // Brand: Bertram hullLength: 60
    c.output(); // Brand: Baja hullLength: 100

    cout << endl;
    return 0;
}
*/