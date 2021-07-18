/*
#include<iostream>
#include<string>
using namespace std;

//
// Created by Muhammad B. Khan on 7/17/2021.
// ET580 Summer2
//
// 3) --------------------------------------------------------------------------
void populate(int *a, int size) {
    for (int i = 0; i < size; ++i) {
        *(a + i) = i;
    }
}
void print(int *a, int size) {
    for (int i = 0; i < size; ++i) {
        cout << *(a + i) << " ";
    }
}
void printMemory(int *a, int size) {
    for (int i = 0; i < size; ++i) {
        cout << a + i << "\n";
    }
}
int* grow(int *a, int size, int newSize) {
    int *b = new int[newSize];
    cout << "Inside grow: " << endl;
    for (int i = 0; i < size; ++i) {
        *(b + i) = *(a + i);
    }
    print(b, newSize);
    cout << endl;
    printMemory(b, newSize);
    delete [] a;
    return b;
}

// *********************************************************************************
// **************************      MAIN FUNCTION    ********************************
// *********************************************************************************

int main() {

    // 3) --------------------------------------------------------------------------
    cout << "Muhammad B. Khan - Homework 2\nET580 - Summer\n\n------------ Problem 3: \n";

    int size, newSize;
    cout << "Enter a size: ";
    cin >> size;
    cout << endl;

    int *p = new int[size]();
    cout << "Original: " << endl;
    populate(p, size);
    print(p, size);
    cout << endl;
    printMemory(p, size);
    cout << endl;

    cout << "Enter a new size: ";
    cin >> newSize;
    cout << endl;

    p = grow(p, size, newSize);
    cout << "\nAfter grow: " << endl;
    print(p, newSize);
    cout << endl;
    printMemory(p, newSize);

    // delete array
    delete [] p;

    cout << endl;
    return 0;
}
*/