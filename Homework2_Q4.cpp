/*
#include<iostream>
#include<string>
using namespace std;

//
// Created by Muhammad B. Khan on 7/17/2021.
// ET580 Summer2
//
// 4) --------------------------------------------------------------------------

void print(const int *a, int size) {
    for (int i = 0; i < size; ++i) {
        cout << *(a + i) << " ";
    }
}
void print(int *a, int size, int index) {
    if (index >= 1 && index < size - 1) {
        cout << "\n\nValue at Index: " << *(a + index);
        cout << "\nValue at Previous Index: " << *(a + index - 1);
        cout << "\nNext Value after Index: " << *(a + index + 1);
    }
}
int sum(int *a, int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += *a;
        a++;
    }
    return sum;
}
int average(int *a, int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += *a;
        a++;
    }
    return sum / size;
}


// *********************************************************************************
// **************************      MAIN FUNCTION    ********************************
// *********************************************************************************

int main() {

    // 4) --------------------------------------------------------------------------
    cout << "Muhammad B. Khan - Homework 2\nET580 - Summer\n\n------------ Problem 4: \n";

    int *a = new int[5] {5, 15, 25, 35, 45};
    print(a, 5);
    print(a, 5, 2);
    cout << "\n\nSum = " << sum(a, 5) << "\n";
    cout << "Average = " << average(a, 5) << "\n";

    cout << endl;
    return 0;
}
*/