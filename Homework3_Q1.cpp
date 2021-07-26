/*
#include<iostream>
using namespace std;

//
// Created by Muhammad B. Khan on 7/25/2021.
// ET580 Summer2
// Homework 3 - Question 1
//
// 1) --------------------------------------------------------------------------
class IntArr {
private:
    int capacity;
    int size;
    int *array;
    void grow();
public:
    IntArr();
    IntArr(int c);

    int& operator[](int index);
    const int& operator[](int index) const;

    IntArr(const IntArr &a);
    void operator = (const IntArr &a);
    ~IntArr();

    int getSize() const;
    int getCapacity() const;

    void push_back(int n);
    void pop_back();

};

// Default constructor
IntArr::IntArr() {
    capacity = 5;
    size = 0;
    array = new int[capacity];
}

// User defined constr
IntArr::IntArr(int c) {
    capacity = c;
    size = 0;
    array = new int[capacity];
}

// subscript operator overload
int& IntArr::operator[](const int index) {
    return array[index];
}

// Subscript operator overload for constant arrays (The big three)
const int& IntArr::operator[](const int index) const{
    return array[index];
}

// Copy constructor
IntArr::IntArr(const IntArr& a) {
    capacity = a.capacity;
    size = a.size;
    array = a.array;
}

// Assignment operator overload
void IntArr::operator=(const IntArr& a) {
    capacity = a.capacity;
    size = a.size;
    array = a.array;
}

// Destructor
IntArr::~IntArr() { delete [] array;}

// Accessors
int IntArr::getSize() const {return size;}
int IntArr::getCapacity() const {return capacity;}

// Grow func
void IntArr::grow() {
    capacity = capacity * 2 + 1;
}

void IntArr::push_back(int n) {
    if (size == capacity) grow();
        array[size] = n;
        size++;
}

void IntArr::pop_back() {
    if (size != 0) size--;
}


// *********************************************************************************
// **************************      MAIN FUNCTION    ********************************
// *********************************************************************************
int main() {

    // 1) --------------------------------------------------------------------------
    cout << "\nMuhammad B. Khan - Homework 3\nET580 - Summer\n\n------------ Problem 1: \n";

    IntArr a{5};
    for(int i=0; i<5; i++) { a.push_back((i+1)*5); }
    cout << "Array size: " << a.getSize() << endl;
    cout << "Array A: ";
    for(int i=0; i<a.getSize(); i++) { cout << a[i] << " "; }
    cout << endl << endl;
    a.push_back(30);
    a.push_back(35);
    cout << "Array size: " << a.getSize() << endl;
    IntArr b = a;
    cout << "Array A: ";
    for(int i=0; i<a.getSize(); i++) { cout << a[i] << " "; }
    cout << "\nPArray B: ";
    for(int i=0; i<b.getSize(); i++) { cout << b[i] << " "; }
    cout << endl << endl;
    a.pop_back();
    cout << "Array size: " << a.getSize() << endl;
    b = a;
    cout << "Array A: ";
    for(int i=0; i<a.getSize(); i++) { cout << a[i] << " "; }
    cout << "\nArray B: ";
    for(int i=0; i<b.getSize(); i++) { cout << b[i] << " "; }
    cout << endl << endl;


    cout << endl;
    return 0;
}
*/