#include <iostream>
using namespace std;
// 1.
// -------------------------------------------------------- Stack Function Return

// return a local variable by value
int f1() {
    int i = 10;                 // i is on the stack
    return i;                   // i goes out of scope, memory is recycled
}

// return a local variable by reference (NEVER DO THIS)
//int &f2() {
//    int i = 10;
//    return i;                   // WARNING: I am trying to return by reference a variable
//}                               // that will no longer exist after this function ends.
// YOU NEVER RETURN GLOBAL VARIABLES BY REFERENCE

// 2.
// -------------------------------------------------------- Function and Pointers

// update heap memory (pass pointer by value)
void f3(int *i) {
    *i = 100;                   // Update the value of variable pointed to by i
}

// return new heap memory (return pointer by value)
int* f4() {
    int *i = new int(721);      // assign new memory on the heap
    //Stack       Heap
    return i;                   // i goes out of scope, heap memory address returned
}

// replace heap memory (pass pointer by reference)
void f5(int *&i) {
    delete i;                   // delete original memory
    i = new int(10000);         // assign new memory
}

// 3.
// -------------------------------------------------------- Function: Dangling Pointers
int* f6() {
    int *i;
    int n = 5;                  // n is on the stack
    i = &n;                     // point i to n
    return i;                   // n and i go out of scope
}

int* f7() {
    int *i = new int(100);      // *i is on the heap
    return i;                   // i goes out of scope, but *i remains alive
}

// 4.
// -------------------------------------------------------- Function Pointers
int add(int a, int b) {
    return a + b;
}
int multiply(int a, int b) {
    return a * b;
}
void print(int a, int b, int(*f)(int, int)) {
    cout << (*f)(a, b) << "\n";
}

// 5.
// -------------------------------------------------------- TYPEDEF
typedef int* debit;
typedef int* credit;

// debit is easier to read and more descriptive than int*
void printLoss(debit d) {
    cout << *d << "\n";
}

// credit is easier to read and more descriptive than int*
void printGain(credit c) {
    cout << *c << "\n";
}

// 6.
// -------------------------------------------------------- TYPEDEF w/ Function Pointers

// typedef alias declaration for the function pointer named func
typedef int (*func)(int, int);

int sum(int a, int b) {
    return a + b;
}

int product(int a, int b) {
    return a * b;
}

void output(int a, int b, func f) {     // same as == output(int a, int b, int(*f)(int, int)) {
    cout << f(a , b) << "\n";           // same as == cout << (*f)(a, b)
}

// 7.
// -------------------------------------------------------- TYPEDEF w/ Function Pointers 2

// c++11 alias declaration for the function pointer named func (modern syntax)
using funct = int (*) (int, int);

int plusNums(int a, int b) {
    return a + b;
}

int mult(int a, int b) {
    return a * b;
}

void display(int a, int b, funct f) {
    cout << f(a, b) << "\n";
}



// *********************************************************************************
// **************************      MAIN FUNCTION     *******************************
// *********************************************************************************

int main() {

    // 1.
    // -------------------------------------------------------- Stack Function Return
    cout << "\n1. ---------------------- Stack Function Return:\n";

    int n = f1();
    cout << "n: " << n << endl;

    //n = f2();                       // reference means that n will be a reference or another name for i.
    //cout << "n: " << n << endl;     // But if i doesn't exists at the end of f2(), then n cannot be a
                                      // reference for it.


    // 2.
    // -------------------------------------------------------- Function and Pointers
    cout << "\n2. ---------------------- Function and Pointers:\n";

    int *p = new int{10};
    f3(p);                          // update *p
    cout << *p << "\n";

    int *q = f4();                  // assign new heap memory to q
    cout << *q << "\n";

    f5(p);                       // replace heap memory pointed to by p
    cout << *p << "\n";

    // In f3(), i is a different variable than p but they both point at the same value
    // because they are pass by value.
    // In f5(), i and p are the same pointer variable because they are pass by reference.


    // 3.
    // -------------------------------------------------------- Function: Dangling Pointers
    cout << "\n3. ---------------------- Function: Dangling Pointers:\n";

    int *r = f6();                  // r points to a memory address which is no longer valid.
    cout << *r << "\n";             // dangling pointer - prints garbage

    int *t = new int(10);           // Memory leak - t points to 10 in the heap
    t = f7();                       // now p points to another memory location.
    cout << *t << "\n";


    // 4.
    // -------------------------------------------------------- Function Pointers
    cout << "\n4. ---------------------- Function Pointers:\n";

    // Purpose: a variable which stores the address of a function
    int (*f)(int, int);             // Create a function pointer

    f = add;                        // Point to add()
    cout << (*f)(5, 6) << "\n";     // Explicitly dereference and call the sum function

    f = multiply;                   // point to multiply()
    cout << f(5, 6) << "\n\n";        // IMPLICITLY dereference and call the sum function

    print(5, 6, add);          // call print with add function pointer
    print(5, 6, multiply);     // call print with multiply function pointer


    // 5.
    // -------------------------------------------------------- TYPEDEF
    cout << "\n5. ---------------------- TYPEDEF:\n";

    // TYPEDEF is a simple way to create custom names or aliases for types.
    // instead of int, you can use some other name that suits you. That name will be of
    // type int, but in your program, it will appear something else.

    typedef int score;              // alias for the int type
    score u = 5;                    // declare an integer variable

    typedef int* data;              // alias for an int pointer type
    data v = new int(100);          // declare an integer pointer variable

    typedef int(*func)(int, int);   // alias for a function pointer
    func w;                         // declare a function pointer from typedef

    debit x = new int(5000);
    credit y = new int(10000);

    printLoss(x);
    printGain(y);


    // 6.
    // -------------------------------------------------------- TYPEDEF w/ Function Pointers
    cout << "\n6. ---------------------- TYPEDEF w/ Function Pointers:\n";

    output(5, 6, sum);              // call output() with sum() pointer
    output(5, 6, product);          // call output() with product() pointer


    // 7.
    // -------------------------------------------------------- TYPEDEF w/ Function Pointers 2
    cout << "\n7. ---------------------- TYPEDEF w/ Function Pointers 2:\n";

    display(5, 6, plusNums);
    display(5, 6, mult);            // call display with mult() pointer.




    cout << endl;
    return 0;
}





