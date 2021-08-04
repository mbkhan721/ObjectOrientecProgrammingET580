/*
#include<iostream>
#include<string>
using namespace std;

// Created by Muhammad B. Khan
// ET580 Summer2
// Question 2
// 2) --------------------------------------------------------------------------

template < typename T >
class MyArray {
private:
    T *arr;
    int size;
    int currentSize;
public:
    MyArray(int n): arr(nullptr), size(0) {
        if (n <= 1) {
            cout << "Error: short array of size " << n << endl;
            exit(EXIT_FAILURE);
        }
        size = n;
        currentSize = 0;
        arr = new T[n];
    }

//Copy constr
    MyArray(const MyArray & c): arr(new T[c.size]), size(c.size) {
        copy(c.arr, c.arr + c.size, arr);
    }

// assignment operator
    MyArray & operator = (const MyArray & c) {
        T * newArray = new T[c.size];
        copy(c.arr, c.arr + c.size, newArray);
        delete[] arr;
        arr = newArray;
        size = c.size;
        return *this;
    }

    void grow() {
        T * tmpArray = new T[size * 2];
        for (int i = 0; i < size; i++) {
            tmpArray[i] = arr[i];
        }
        arr = tmpArray;
        size *= 2;
    }

    void add(T data) {
        if (currentSize < size) {
            arr[currentSize] = data;
            currentSize++;
        } else {
            grow();
            arr[currentSize] = data;
            currentSize++;
        }
    }
    int getSize() {
        return currentSize;
    }
    T & operator[] (int index){
        return arr[index];
    }
    ~MyArray() {
        delete[] arr;
    }
};

class SomeObj{
private:
    int id;
public:
    SomeObj() {id = 0;}
    SomeObj(int x) {id = x;}
    void print() {
        cout << id << " ";
    }
};



// *********************************************************************************
// **************************      MAIN FUNCTION    ********************************
// *********************************************************************************

int main() {

    // 2) --------------------------------------------------------------------------
    cout << "Muhammad B. Khan - Homework 5\nET580 - Summer\n\n------------ Problem 2: \n";

    MyArray<SomeObj> a(5);
    SomeObj o1(1);
    SomeObj o2(2);
    SomeObj o3(3);
    SomeObj o4(4);
    SomeObj o5(5);
    SomeObj o6(6);
    SomeObj o7(7);
    SomeObj o8(8);
    SomeObj o9(9);
    SomeObj o10(10);
    a.add(o1);
    a.add(o2);
    a.add(o3);
    a.add(o4);
    a.add(o5);
    a.add(o6);
    a.add(o7);
    a.add(o8);
    a.add(o9);
    a.add(o10);

    for(int i=0; i<10; i++) {
        a[i].print();
    }

    cout << endl;
    return 0;
}
*/