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
    cout << *p << "\n\n";   // Prints 10

    // -------------------------------------------------------- NULLPTR
    // Pointer currently points to nothing.

    cout << "---------------------- nullptr:\n";
    // int *b;                              // p currently stores garbage

    int *b = nullptr;                       // initialize int pointer b with the value of nullptr
    cout << "b: " << b << "\n";             // prints b = 0
                                            //
                                            // if (b == nullptr) {      // can test if p points to nothing
                                            //      run some code
                                            // }
    if (b == nullptr) {
        cout << "b currently points to nothing.\n\n";
    }

    // -------------------------------------------------------- Pointer Syntax
    cout << "---------------------- Pointer Syntax:\n";

    int x = 5;
    int z = 20;
    int *y = nullptr;       // initialize the integer pointer y
    y = &x;                 // assign y to the memory address of x, will return the value of x
    *y = 10;                // dereferences y to access and modify the value of x

    cout << *y << "\n";     // Prints 10
    cout << x << "\n";      // Prints 10
    cout << y << "\n";      // Prints memory address of x
    cout << &x << "\n\n";   // Prints memory address of x

    // just like we can change the value of strings or ints, we can change the value of pointers.
    y = &z;                 // y no longer points to x, it returns z
    cout << z << "\n";      // Prints 20
    cout << *y << "\n\n";   // Prints 20

    //double *m, n;           // declare a double pointer m and a double n
    //double h, *i;           // declare a double h and a double pointer i
    //double *j, *k;          // declare two double pointer j and k


    // -------------------------------------------------------- Pointer Equivalence
    cout << "---------------------- Pointer Equivalence:\n";

    double q = 3.14;
    double *r = &q;         // initialize the double pointer r
    double *s = &q;         // initialize the double pointer s

    //if (&r == &s) {cout << "r & s are NOT the same variables, condition is always false";}
    if (r == s) {
        cout << "r & s point to the same variable.\n";
    }
    if (*r == *s) {
        cout << "r & s point to variables with the same value.\n\n";
    }

    cout << q << "\n";      // Prints 3.14
    cout << *r << "\n";     // Prints 3.14
    cout << *s << "\n\n";   // Prints 3.14

    cout << &q << "\n";     // Prints a different memory address
    cout << &r << "\n";     // Prints a different memory address
    cout << &s << "\n\n";   // Prints a different memory address

    cout << r << "\n";      // Prints the memory address of q
    cout << s << "\n\n";      // Prints the memory address of q

    double t = 3.14;
    s = &t;
    // The following condition is still true because s still points to 3.14 even though
    if (*r == *s) {
        cout << "r & s point to variables with the same value.\n\n";
    }


    // -------------------------------------------------------- Pointer and Constants
    cout << "---------------------- Pointer and Constants:\n";

    // const pointer: the pointer cannot be modified
    // pointer to a const variable: the variable pointed to cannot be modified
    // const pointer to a const variable: both variables cannot be modified
    int u = 5;
    const int v = 5;

    // Const pointer
    int *const w = &u;          // w cannot be modified, it will always point to variable u
                                // *w can be modified.
                                // variable pointed to by w can be modified.
    *w = 20;                    // value of u is now 20
    cout << u << "\n";
    // w = &x;                  // compiler error: w cannot be modified


    // Pointer to a constant variable
    const int *m = &v;          // the variable pointed to cannot be modified
    // m = &u;                  // m can point to a non-const or a const
    // *m = 10;                 // compiler error: but the value of *m cannot be modified
                                // because it's constant


    // const pointer to a const variable
    const int *const n = &v;    // both variables cannot be modified. The pointer cannot be modified nor
                                // can the pointer be used to modify u.

    // n = &u;                  // compiler error: n cannot be modified
    // *n = 25;                 // compiler error: *n cannot be modified







    cout << endl;
    return 0;
}
