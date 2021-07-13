#include<iostream>
using namespace std;


int main() {

    int d = 5;
    int *p = &d;

    cout << d << "\n";      // Prints 5
    // *p dereferences p and returns the variable that p points to.
    cout << *p << "\n";     // Prints 5

    // The value of a pointer is a memory address of the pointer points to.
    cout << p << "\n";      // Prints the memory address of d
    cout << &d << "\n";     // Prints the memory address of d

    // *p can modify the value of d
    *p = 10;
    cout << d << "\n";      // Prints 10
    cout << *p << "\n";     // Prints 10

    // -------------------------------------------------------- NULLPTR




    cout << endl;
    return 0;
}
