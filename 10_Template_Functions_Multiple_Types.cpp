/*
#include <iostream>
using namespace std;

// template functions with support for multiple types in the same function
// this supports multiple types as well as same types for flexibility.

template<typename T1, typename T2>              // two types
void output(T1 a, T2 b) {
    cout << "Output two types: " << a << " " << b << "\n";
}

template<typename T, typename U, typename V>    // three types
V output(T a, U b, V c) {
    cout << "Output two types: " << a << " " << b << "\n";
    cout << "Return another: ";
    return c;                                   // return c which matches V in params and V which is the function type.
                                                // whatever
}

// *********************************************************************************
// **************************      MAIN FUNCTION     *******************************
// *********************************************************************************

int main() {
    cout << "\n";

    int i = 1;
    string s = "Hi";
    bool isSomething = true;

    output(i, s);
    output(s, i);
    cout << "\n";

    cout << output(i, s, isSomething) << "\n";

    cout << "\n";
    return 0;
}
*/