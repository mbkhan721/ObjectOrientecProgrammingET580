#include <iostream>
using namespace std;

int main() {
    cout << endl;

    // l-value simple definition:
    // an expression that can resolve to a memory address
    int a;                  // a variable
    string s;               // an object with a reachable name/memory address
    const double d = 5;     // a non-modifable l-value (reachable object that is const)

    // r-value simple definition:
    // any expression that is not an l-value
    5;                      // a literal
    string();               // a temporary/anonymous object lacks an id/memory address
    // functions often return temporary/anonymous objects

    // l-value reference:
    int &b = a;             // &b is an l-value reference
    const double &c = d;    // &c is a non-modifable l-value reference

    // r-value reference (c++11 and later):
    int &&e = 5;            // &&e is a reference that stores a literal
    string &&g = string();  // &&g can be used to extend the lifetime of a temporary object

    cout << endl;
    return 0;
}