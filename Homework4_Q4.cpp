/*
#include<iostream>
#include<string>
using namespace std;

//
// Created by Muhammad B. Khan
// ET580 Summer2
// Homework 4 - Question 4
//
// 4) --------------------------------------------------------------------------
class Person {
public:
    string *name;

    Person(): Person(""){}
    Person(string n): name(new string(n)) {}

    string getName() const {return *name;}
    void setName(string n) const {*name = n;}

    // The big three
    Person(const Person &p);
    Person& operator = (const Person &p);
    ~Person();

    void output() {
        cout << "Name: " << *name << "\n";
    }

};
Person::Person(const Person &p): name(new string(*(p.name))) {
    name = p.name;
    cout << "==> (Person) copy constructor was called\n";
}

Person& Person::operator = (const Person &p) {
    if (this != &p) {
        *name = *(p.name);
    }
    cout << "==> (Person) Assignment operator was called\n";
    return *this;
}

Person::~Person() {
    delete name;
    cout << "==> (Person) Destructor was called\n";
}

// *********************************************************************************
// **************************      MAIN FUNCTION    ********************************
// *********************************************************************************

int main() {

    // 4) --------------------------------------------------------------------------
    cout << "\nMuhammad B. Khan - Homework 4\nET580 - Summer\n\n------------ Problem 4: \n";

    Person *p = new Person("David");
    p->output();
    Person p1(*p),p2;
    p1.output();
    p2 = p1;
    p2.output();
    delete p;

    cout << endl;
    return 0;
}
*/