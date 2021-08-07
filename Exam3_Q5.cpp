/*
// Muhammad B. Khan
// Exam 3 - Question 5
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

class VehicleList {
private:
    Vehicle **vehicles;
    int size;
    int capacity;
public:
    VehicleList() {capacity = 5; size = 0; vehicles = new Vehicle *[capacity];}

    void add(Vehicle *v) {
        if( size >= capacity ) {
            cout << "The vehicle list is full." << endl;
            return;
        }
        vehicles[size] = v;
        size++;
    }

    void remove(){
        // remove last element
        if( size <= 0 ) {
            cout << "The vehicle list is empty."  << endl;
            return;
        }
        size--;
        delete vehicles[size];
        vehicles[size] = nullptr;
    }

    void output() {
        for(int i = 0; i < size; i++)
            vehicles[i]->output();
    }

    ~VehicleList() {
        delete [] vehicles;
    }
};

// *********************************************************************************
// **************************      MAIN FUNCTION    ********************************
// *********************************************************************************

int main() {
    // 5) --------------------------------------------------------------------------
    cout << "\nMuhammad B. Khan\nExam 3\nET580 - Summer 2\n\n------------ Question 5: \n";

    VehicleList list;
    list.add(new Car("Honda",1000));
    list.add(new Car("BMW",2000));
    list.add(new Boat("Baja",100));
    list.add(new Car("Tesla",3000));
    list.add(new Boat("Bertram",60));
    list.add(new Car("Toyota",4000));
    list.output();
    list.remove();
    list.remove();
    list.remove();
    list.output();
    list.remove();
    list.remove();
    list.remove();
    list.output();

    cout << endl;
    return 0;
}
*/