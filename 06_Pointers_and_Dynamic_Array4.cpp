
#include <iostream>
using namespace std;

// 3.
// -------------------------------------------------------- Type Decay

// int c[] is automatically converted to int *c
// We learned that it is a PASS BY REFERENCE but actually, it is PASS BY POINTER.
// But it works in a similar way. If it was PASS BY REFERENCE, we can directly
// access array c in this function.

void testPassByArray(int c[]) {
// void testPassByPointer(int *c) {                      // This is also acceptable due to type decay
    cout << "Size of c: " << sizeof(c) << "\n";          // Size of an array param will give you the size of a pointer
    cout << "Value of c: " << c << "\n";                 // Prints memory of the first element
}

// 4.
// -------------------------------------------------------- Dynamic Array
void populate(int *p, int size) {
    for (int i = 0; i < size; ++i) {
        p[i] = i + 1;
    }
}
void print(int *p, int size) {
    for (int i = 0; i < size; ++i) {
        cout << p[i] << " ";                            // Print value
        cout << &p[i] << "\n";                          // Print memory address (contiguous)
    }
}





// *********************************************************************************
// **************************      MAIN FUNCTION     *******************************
// *********************************************************************************


int main() {

    // 1.
    // -------------------------------------------------------- Static Arrays
    cout << "\n1. ---------------------- Static Arrays:\n";

    // Arrays stored on the stack using automatic variables
    int a[5] = {10, 20, 30, 40, 50};
    // Static array is a contiguous block of memory (a block of adjacent memory cells)

    cout << "Memory address of a: " << a << "\n";
    cout << "Memory address of a: " << &a << "\n\n";


    // 2.
    // -------------------------------------------------------- Pointers and Arrays
    cout << "\n2. ---------------------- Pointers and Arrays:\n";

    // int a[5] = {10, 20, 30, 40, 50};             // Initialized above
    int *b = a;                                     // Assign a pointer alias for the array

    // a is of type int[5] which is an integer array of size 5
    // b is of type int* which can point to any element of an integer array

    // I can have a and b both point to the first element of the array.
    cout << a[0] << " " << a[1] << "\n";
    cout << b[0] << " " << b[1] << "\n";
    cout << "Memory address of b: " << b << "\n\n";

    for (int i = 0; i < 5; ++i) {
        cout << "Memory of a: " << &a[i] << "\tMemory of b: " << &b[i] << "\n";
    }

    cout << "\nSize of a: " << sizeof(a) << "\n";       // Prints 20
    cout << "Size of b: " << sizeof(b) << "\n";         // Prints 4
                                                        // Because b is pointer type

    // Remember the value of b points to the first element of the array in a.


    // 3.
    // -------------------------------------------------------- Type Decay
    cout << "\n3. ---------------------- Type Decay:\n";

    // Type Decay is when a variable type automatically converts to another type

    // Equivalent function declarations:
    // void print(int b[], int size);
    // void print(int *b, int size);

    // The array parameters (int b[]) decay into pointers (int *b)
    // In other words, whenever you send an array to a function, what was originally an array
    // type decays into a pointer.

    // The type get CONVERTED from type ARRAY to type POINTER in a function.
    // WE CAN CONFIRM IT BY CHECKING THE SIZEOF(ARRAY) AND IT WILL PRINT 4.

    int c[5] = {7, 21, 4, 26, 34};
    testPassByArray(c);


    // 4.
    // -------------------------------------------------------- Dynamic Array
    cout << "\n4. ---------------------- Dynamic Array:\n";

    // Dynamic Array is an array stored on the heap instead of the stack.

    // The new operator is required to allocate dynamic memory.
    // A pointer *d is required to access this array.
    int *d = new int[5]{13, 14, 15, 16, 17};                        // Dynamic Array creation
    // Stack                Heap

    // The pointer (or name) of the array which is d is on the stack.
    // The memory inside the array is on the heap.

    cout << "Size of d: " << sizeof(d) << "\n\n";                     // Print sizeof d (pointer type)

    cout << "Original Array:\n";
    print(d, 5);
    cout << "\nModified Array:\n";
    populate(d, 5);
    print(d, 5);

    // Deallocate all heap memory in the array
    delete [] d;                                            // The pointer *d won't be deleted, the
                                                            // dynamic memory will be deleted.
    // delete d; if it was a single item.


    // 5.
    // -------------------------------------------------------- Initialize Dynamic Arrays
    cout << "\n5. ---------------------- Initialize Dynamic Arrays:\n";

    // For primitives, use () at the end to initialize with default values.
    int *e = new int[5]();                          // Array of default integers
    for (int i = 0; i < 5; ++i) {
        cout << e[i] << " ";
    }
    cout << "." << "\n";

    // For objects, the default constructor is called to initialize
    string *f = new string[5];                      // Array of empty strings
                                                    // Creates an array of 5 string variables
                                                    // Each of the string variables will use the
                                                    // default constructor to construct the object.
    for (int i = 0; i < 5; ++i) {
        cout << f[i] << " ";                        // Prints 5 spaces (empty strings)
    }
    cout << "." << "\n";

    int *g = new int[5]{10, 20};                    // Partial Initialization

    for (int i = 0; i < 5; ++i) {
        cout << g[i] << " ";
    }
    cout << "." << "\n";

    // Delete the arrays
    delete [] e;
    delete [] f;
    delete [] g;


    // 6.
    // -------------------------------------------------------- Return a Local Dynamic Array
    cout << "\n6. ---------------------- Return a Local Dynamic Array:\n";







    cout << "\n";
    return 0;
}

























