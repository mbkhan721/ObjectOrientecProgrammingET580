/*
#include<iostream>
#include<string>
using namespace std;

// Created by Muhammad B. Khan
// ET580 Summer2
//
// 1) --------------------------------------------------------------------------

template < typename T >
class MyArray {
private:
    T * arr;
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
    void printArray() {
        for (int i = 0; i < currentSize; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    int & operator[](int index) {
        if (index >= currentSize) {
            cout << "Error: exiting";
            exit(0);
        }
        return arr[index];
    }
    ~MyArray() {
        delete[] arr;
    }
};



// *********************************************************************************
// **************************      MAIN FUNCTION    ********************************
// *********************************************************************************

int main() {

    // 1) --------------------------------------------------------------------------
    cout << "Muhammad B. Khan - Homework 5\nET580 - Summer\n\n------------ Problem 1: \n";

    MyArray<int> a(2);
    for(int i=0; i<20; i++) {
        a.add(i+1);
    }
    a.printArray();
    MyArray<char> c(20);
    for(int i=0; i<26; i++) {
        c.add(static_cast<char>(i+65));
    }
    c.printArray();


    cout << endl;
    return 0;
}
*/