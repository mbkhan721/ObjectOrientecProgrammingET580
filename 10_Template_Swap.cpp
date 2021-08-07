/*
#include <iostream>
using namespace std;

// The Need For Templates
//
// If I have multiple swap functions like strings, ints, and chars, I have to create a swap
// function for each type where each function will have to overload the other function by
// accepting different parameters of its own types.
// In other words, functions must be overloaded to support the same operation upon different types.
//
// The way around this is Template Functions.
// A Template Function is a function that can be applied to many different types.
// Type is decided by function call.
// Compiler converts the template function into a typed function before run time.

// T is a placeholder for type.

template<typename T>                    // T defines a type
void swapVal(T &a, T &b) {
    T temp;
    temp = a;
    a = b;
    b = temp;
}

// *********************************************************************************
// **************************      MAIN FUNCTION     *******************************
// *********************************************************************************

int main() {
    cout << "\n";

    int x = 1, y = 2;
    char v = 'V', w = 'W';

    cout << x << " " << y << "\n";
    swapVal(x, y);
    cout << x << " " << y << "\n\n";

    cout << v << " " << w << "\n";
    swapVal(v, w);
    cout << v << " " << w << "\n\n";


    cout << "\n";
    return 0;
}
*/