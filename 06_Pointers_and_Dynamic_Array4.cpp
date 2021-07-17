/*
#include <iostream>
using namespace std;

// 3.
// -------------------------------------------------------- Type Decay

// int c[] is automatically converted to int *c
// We learned that it is a PASS BY REFERENCE but actually, it is PASS BY POINTER.
// But it works in a similar way. If it was PASS BY REFERENCE, we can directly
// access array c in this function.

//void testPassByArray(int c[]) {
void testPassByPointer(int *c) {                         // This is also acceptable due to type decay
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

// 6.
// -------------------------------------------------------- Return a Local Dynamic Array

// Return a pointer to the dynamic array
int* returnAnArray(int size) {
    int *a = new int[size];                             // Array is in the heap
    for (int i = 0; i < size; ++i) {
        a[i] = i;
    }
    return a;
}
void printRAA(int *p, int size) {
    for (int i = 0; i < size; ++i) {
        cout << p[i] << " ";                            // Print value
    }
}

// 7.
// -------------------------------------------------------- Return a Local Static Array
int* returnStaticArr(int size) {
    int b[5] = {1,2,3,4,5};                             // Array on the stack - only difference from #6
    for (int i = 0; i < size; ++i) {
        b[i] = i;
    }
    return b;                                           // array is recycled
}                                                       // When this function ends, all the memory on the stack
                                                        // disappears with it.
                                                        // Name b as well as data disappears.

// When I return memory address of the array and try to store it into pointer *i, I end up with a dangling pointer.
// because there is nothing to point to, the array is gone.
// DYNAMIC MEMORY allows us to write a function like this,
// STACK MEMORY does NOT because everything is created locally.


// 8b.
// -------------------------------------------------------- Dynamic Array Of Arrays: Printout
void printARR(int **arr, int arrays, int integers) {
    for (int i = 0; i < arrays; ++i) {
        for (int j = 0; j < integers; ++j) {
            cout << &arr[i][j] << " ";                  // Prints two separate blocks of memory (NOT contiguous)
        }
        cout << "\n";
    }
}
*/

// *********************************************************************************
// **************************      MAIN FUNCTION     *******************************
// *********************************************************************************

/*
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
    testPassByPointer(c);


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

    int size = 10;
    // h points to the returned heap array
    int *h = returnAnArray(size);
    cout << "Printing h: ";
    printRAA(h, size);
    cout << endl;
    delete [] h;

    // The value of pointer a from the function is store into h so array remains accessible.


    // 7.
    // -------------------------------------------------------- Return a Local Static Array
    cout << "\n7. ---------------------- Return a Local Static Array:\n";

    int size = 5;
    //int *i = returnStaticArr(size);                   // ERROR: This is a static array created on the stack
    //printRAA(i, size);                                // Local array won't return anything

    // KEY DIFFERENCE BETWEEN STATIC AND DYNAMIC ARRAY:
    //
    // Static Array:
    // Size must be known at compile time (before program runs EX: size = 5;)
    // Size cannot change during run time (while program runs)
    //
    // Dynamic Array:
    // Size can be decided during run time
    // Size can be modified (grow or shrink) during run time

    // 7b.
    // -------------------------------------------------------- Request Size for Dynamic Array
    cout << "\n7b. ---------------------- Request Size for Dynamic Array:\n";

    size = 0;
    cout << "Enter size: ";
    cin >> size;
    cout << "\n";

    int *j = new int[size];

    // Contiguous block of memory
    for (int i = 0; i < size; ++i) {
        cout << j[i] << "\t" << &j[i] << "\n";
    }

    // delete the array
    delete [] j;


    // 8.
    // -------------------------------------------------------- Dynamic Array Of Arrays: Create
    cout << "\n8. ---------------------- Dynamic Array Of Arrays:\n";

    int arrays = 2;
    int integers = 3;

    // Step 1
    // Create an array of pointers
    int **arr = new int*[arrays];           // Pointer to a pointer

    // Step 2
    // Point each pointer to a new array on the heap
    for (int i = 0; i < arrays; ++i) {
        arr[i] = new int[integers];
    }

    // int** is a pointer to an int* pointer or to an int array
    // A pointer points to a pointer which points to an array of data.
    // arr points to arrays. arrays point to integers


    // 8b.
    // -------------------------------------------------------- Dynamic Array Of Arrays: Delete

    // Step 1
    // Delete each integer array
    for (int i = 0; i < arrays; ++i) {
        delete [] arr[i];
    }

    // Step 2
    // Delete the array of integer pointers
    delete [] arr;

    // The same two steps but reversed


    // 8b.
    // -------------------------------------------------------- Dynamic Array Of Arrays: Printout
    cout << "\n8b. ---------------------- Dynamic Array Of Arrays:\n";

    int arrays;
    int integers;
    cout << "Enter both dimensions: ";
    cin >> arrays >> integers;
    cout << "\n";

    // Create an array of arrays, not a 2d array (not contiguous)
    // 1) Create the first dimension (array of int pointers)
    int **arr = new int*[arrays];

    // 2) Create a second dimension (array of integers)
    for (int i = 0; i < arrays; ++i) {
        arr[i] = new int[integers];
    }
    printARR(arr, arrays, integers);


    // 9.
    // -------------------------------------------------------- Pointer Arithmetic
    cout << "\n9. ---------------------- Pointer Arithmetic:\n";

    int k[4] = {10, 20, 30, 40};
    cout << *(k + 2) << "\n";                       // Prints 30
    cout << *(k + 0) << "\n\n";                     // Prints 10
    // Take the pointer and add or subtract specified elements, and
    // dereference that location to get the data at that location.

    cout << k + 2 << "\n";                       // Prints memory address of 30
    cout << k + 0 << "\n\n";                     // Prints memory address of 10

    // Be careful using the address of operator with array variables
    cout << &k << "\n";                       // Outputs the address of the first element in array
    cout << &k + 1 << "\n";                   // Outputs the address of the first element AFTER THE ARRAY


    // 10.
    // -------------------------------------------------------- Pointer Arithmetic: ID Array
    cout << "\n10. ---------------------- Pointer Arithmetic: 1D Array\n";

    int *l = new int[5] {1,2,3,4,5};

    for (int i = 0; i < 5; ++i) {
        cout << l[i] << " ";
    }
    cout << "\n";

    // Print value with pointer arithmetic
    for (int i = 0; i < 5; ++i) {
        cout << *(l + i) << " ";
    }
    cout << "\n";

    // Print memory with pointer arithmetic
    for (int i = 0; i < 5; ++i) {
        cout << l + i << " ";
    }
    cout << "\n";

    // Delete the array
    delete [] l;


    // 11.
    // -------------------------------------------------------- Pointer Arithmetic: Array of Arrays
    cout << "\n11. ---------------------- Pointer Arithmetic: Array of Arrays\n";

    // cout << a[0][1];                     // Print first array second value
    // cout << *(*(a+0)+1);                 // Print first array second value

    // cout << a[1][3];                     // Print second array third value
    // cout << *(*(a+1)+3);                 // Print second array third value




    cout << "\n";
    return 0;
}
*/











