
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    // l-value simple definition:
    // an expression that can resolve to a memory address
    int a;                  // a variable
    string s;               // an object with a reachable name/memory address
    const double d = 5;     // d itself is a non-modifable l-value (reachable object that is const)

    // L-Values are typically on the left hand side of the operator
    // R-Value are typically on the right hand side of the operator
    //   d     =    10;
    // l-value   r-value

    // r-value simple definition:
    // any expression that is not an l-value
    5;                      // a literal
    string();               // a temporary object lacks an id/memory address
    // functions often return temporary/anonymous objects

    // l-value reference:
    int &b = a;             // &b is an l-value reference
    const double &c = d;    // &c is a const l-value reference

    // r-value reference (c++11 and later):
    int &&e = 5;            // &&e is a reference that stores a literal
    string &&g = string();  // &&g is a reference that can extend the lifetime of a temporary object

    cout << endl;
    return 0;
}

