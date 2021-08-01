
#include<iostream>
#include<string>
using namespace std;

//
// Created by Muhammad B. Khan
// ET580 Summer2
// Homework 4 - Question 6
//
// 6) --------------------------------------------------------------------------
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

    virtual void output() {
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
// --------------------------------------------------------------------------

class Student : public Person {
private:
    int *id;
public:
    Student(): Student("", 0){}
    Student(string n, int i): Person(n), id(new int(i)){}

    // Copy constructor
    Student(const Student &c): id(new int(*(c.id))) {
        cout << "==> (Student) copy constructor was called\n";
        name = c.name;
        id = c.id;
    }

    // assignment operator overload
    Student& operator = (const Student &c) {
        cout << "==> (Student) Assignment operator was called\n";
        if (this != &c) {
            Student::operator=(c);
            *id = *(c.id);
        }
        return *this;
    }

    // destructor
    ~Student() {
        cout << "==> (Student) Destructor was called\n";
        delete id;
    }

    void output() override {
        cout << "Name: " << *name << "\n";
        cout << "ID: " << *id << "\n";
    }
};
// --------------------------------------------------------------------------
class Instructor : public Person {
private:
    string *department;
public:
    Instructor(): Instructor("", 0){}
    Instructor(string n, string d): Person(n), department(new string (d)){}

    void output() override {
        cout << "Name: " << *name << "\n";
        cout << "Department: " << *department << "\n";
    }
};

// *********************************************************************************
// **************************      MAIN FUNCTION    ********************************
// *********************************************************************************

int main() {

    // 6) --------------------------------------------------------------------------
    cout << "\nMuhammad B. Khan - Homework 4\nET580 - Summer\n\n------------ Problem 6: \n";

    Person **a = new Person*[4];
    a[0] = new Student("David",1212);
    a[1] = new Instructor("Sam","Math");
    a[2] = new Student("Tom",2345);
    a[3] = new Instructor("Jack","History");
    for(int i=0; i<4; i++) {
        a[i]->output();
        cout<<endl;
    }

    cout << endl;
    return 0;
}
