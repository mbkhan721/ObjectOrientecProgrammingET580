/*
#include<iostream>
#include<string>
using namespace std;

//
// Created by Muhammad B. Khan on 7/25/2021.
// ET580 Summer2
// Homework 3 - Question 2
//
// 2) --------------------------------------------------------------------------
class Food {
public:
    string name;
    Food() {}

    string getName() { return name; }

    void setName(string name) { this->name = name; }

    Food(Food &f) { this->name = f.name; }

    Food(string name) { this->name = name; }

    ~Food() { }
    void operator=(const Food &f ) { name = f.name; }

    virtual void output() { cout <<this->name << endl; }
};

class Cake : public Food {
public:
    string topping ;
    Cake(){}

    string getTopping () {
        return topping ;
    }
    void setTopping (string name) {
        this->topping = topping ;
    }

    Cake(Cake &c) {
        this->name = c.name;
        this->topping = c.topping ;
    }
    Cake(string food,string topping) {
        this->name = food;
        this->topping = topping ;
    }
    ~Cake() {}
    void operator=(const Cake &c ) {
        this->name = c.name;
        this->topping = c.topping;
    }
    void output() {
        cout << this -> name
        << this -> topping << endl;
    }
};

// *********************************************************************************
// **************************      MAIN FUNCTION    ********************************
// *********************************************************************************
int main() {

    // 2) --------------------------------------------------------------------------
    cout << "\nMuhammad B. Khan - Homework 3\nET580 - Summer\n\n------------ Problem 2: \n";

    Food f1("Bread");
    f1.output();
    cout << "\nf2: Copy Constructor" << endl;
    Food f2 = f1;
    f2.output();
    cout << "\nf3: Assignment Overload" << endl;
    Food f3;
    f3 = f2;
    f3.output();
    cout << "\nFood: Mutator" << endl;
    f1.setName("Pizza");
    f2.setName("Sandwich");
    f1.output();
    f2.output();
    f3.output();
    cout << "\nCake:\n" << endl;
    Cake c1("Ice Cream Cake", "Chocolate Icing");
    c1.output();
    cout << "\ns2: Copy Constructor" << endl;
    Cake c2(c1);
    c2.output();
    cout << "\ns3: Assignment Overload" << endl;
    Cake c3;
    c3 = c2;
    c3.output();
    cout << "\nCake: Mutator" << endl;
    c1.setName("Cheese cake");
    c1.setTopping("Strawberry");
    c2.setName("Potato Cake");
    c2.setTopping("Vanilla");
    c1.output();
    c2.output();
    c3.output();

    cout << endl;
    return 0;
}
*/