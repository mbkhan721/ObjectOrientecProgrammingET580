
#include <iostream>
using namespace std;

// template functions with support for multiple types in the same function
// this supports multiple types as well as same types for flexibility.

template<typename T>
T add(T a, T b) {
    return a + b;
}

// *********************************************************************************
// **************************      MAIN FUNCTION     *******************************
// *********************************************************************************

int main() {
    cout << "\n";

    cout << add(5, 7) << "\n";              // sum two ints
    cout << add(5.5, 3.2) << "\n";          // sum two doubles

    string s1 = "Hello ";
    string s2 = "World!";
    cout << add(s1, s2) << "\n";            // concatenate two strings



    cout << "\n";
    return 0;
}
