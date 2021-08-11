/*
#include <iostream>
using namespace std;

// combining templates with inheritance
// inheritance where polymorphism actually works

template<typename T>
class ID {                          // base class
protected:      // derived classes will be able to access it directly coz its protected / private means it wouldn't
    T idVal;    // data variable of type T
public:
    ID() = default;
    ID(T v): idVal(v) {}
    T getId() const {return idVal;}
    virtual void output() const {cout << idVal << "\n";}    // virtual needed for polymorphic effect
};

template<typename T>                // EmployeeID class is of type T
class EmployeeID : public ID<T> {   // derived class from ID of type T
public:
    // Two constructors below
    EmployeeID() = default;         // another way of writing default constructor
    EmployeeID(T n): ID<T>(n) {}    // constr stores data inside idVal / creates an id of type T object which will be associated with our EmployeeID object
};

template<typename T, typename U>
class ManagerID : public ID<T> {    // derived class
private:
    U title;                        // introduce a second template type
public:
    ManagerID() = default;          // default constr
    ManagerID(T n, U t): ID<T>(n), title(t) {}  // 2 param constr
    void output() const override {
        // cout below needs to know what idVal is so I have to
        // scope resolve it. In this case, I'm gonna resolve it
        // to ManagerID saying that it's part of this class, but
        // I can also resolve it to ID<T>
        // so im scoping it to ManagerID of type T and type U
        cout << ManagerID<T, U>::idVal << " " << title << "\n";
    }
};

template<typename T>                // non-member function
// Print function accepts objects of type T and accepts it by reference
// accepting it by reference will enable the polymorphism effect.
void print(const ID<T> &id) {       // polymorphism by passing ID by reference
    id.output();
}



// *********************************************************************************
// **************************      MAIN FUNCTION     *******************************
// *********************************************************************************

int main() {
    cout << "\n";

    ID<int> **ids = new ID<int>*[4];        // array of template ID objects
    // **ids is the pointer to the array of pointers

    ids[0] = new EmployeeID<int>(721);
    ids[1] = new EmployeeID<int>(4);
    ids[2] = new ManagerID<int, string>(123, "CEO");
    ids[3] = new ManagerID<int, string>(658, "CFO");

    for (int i = 0; i < 4; ++i) {
        print(*(ids[i]));           // iterate through the array & dereference each element
    }                               // next, the object is sent to the print()
                                    // because print() is passed by reference, it will call the
                                    // output() based upon the object type.


    cout << "\n";
    return 0;
}
*/