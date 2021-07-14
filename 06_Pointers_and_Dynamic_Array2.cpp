#include<iostream>
using namespace std;


int main() {

    // -------------------------------------------------------- Memory

    // Code: code area memory where the program code is stored
    // Static: memory space for global variables

    // Stack: Automatic memory management.
    // This is the memory that we deal with when we create our program.
    // Stack: memory space for automatic variables, memory managed by the compiler
    // stack memory is finite. Any memory that we create is automatically destroyed
    // by the compiler whenever that memory goes out of scope.

    // Heap: Heap memory is where we have dynamic variables.
    // memory is not automatically managed by the compiler, it is managed by the programmer.
    // If you create memory on the heap, you have to manually deallocate or destroy that
    // memory after you're done because the compiler will not do it for you.
    // To use the heap, you have to use pointers.
    // We access, create, and delete heap memory by pointers.
    // It also requires the use of new and delete operators. New is used to create memory
    // on the heap, delete is used to delete memory on the heap.


    // -------------------------------------------------------- Heap
    cout << "\n---------------------- Heap:\n";

    // Pointer is required to access memory locations on the heap
    // new operator is used to allocate memory on the heap

    // new memory on the heap, type int with value of 5, and I'm pointing to it p.
    int *p = new int(5);    // allocate a dynamic variable on the heap
                            // which is accessed by a pointer p on the stack.

    cout << *p << "\n";     // access the dynamic variable
    *p = 10;                // modify the dynamic variable
    delete p;               // deallocate the variable pointed to by p
                            // does not deallocate the pointer p

    // Create a pointer on the stack (pointer s) and point to a dynamic variable on the heap.
    string *s = new string("Hello");        // This calls the string constructor, which
                                              // constructs a string object and the memory address
                                              // is returned from the new operator and stored inside s.
    cout << *s << "\n\n";
    delete s;               // The memory pointed to by s
                            // delete s or delete p does not delete the pointer, but it deletes
                            // the variable that the pointer points to.

    // Our pointers s and p lives on the stack and they points to a memory location that's on the heap.
    // The memory address of variables in the heap is the value of the pointer.
    // THE MEMORY LOCATION IN THE HEAP DOES NOT HAVE A NAME. But we can access it because
    // we have a pointer that points to that variable, whether it's pointer p or pointer s.
    // We can think of the name of this variable as *s or *p, but *s or *p is an operation upon
    // variable s or p.
    // The pointer lives on the stack, the pointing to memory is dynamic which lives on the heap.


    // -------------------------------------------------------- Dangling Pointer
    cout << "\n---------------------- Dangling Pointer:\n";

    // We created two dynamic memories:
    // int *p = new int(5);
    // string *s = new string("Hello");
    //      Stack       Heap
    // The memory address of variables in heap is the value of p and s in the stack

    // Then we said delete p and delete s
    // delete p;
    // delete s;
    // Now dynamic memory is gone, but both variables are still storing the memory addresses
    // of what used to be there in the heap. This is known as the Dangling Pointer.

    // Its a pointer that used to point to something, but because that resource was deleted,
    // it now points to nothing. But it still has the memory address of what it points to.

    // cout << *p << "\n";  // Prints garbage
    // cout << *s << "\n";  // Prints garbage

    // One way to resolve this is what we can reassign p and s to nullptr. This way, it's no
    // longer a dangling pointer, it's now a safe pointer.

    p = nullptr;            // p now points to nothing
    s = nullptr;            // s now points to nothing

    if (p == nullptr) {
        cout << "p points to nothing.\n";
    }
    if (s == nullptr) {
        s = new string("World!");
    }
    cout << *s << "\n";
    delete s;
    s = nullptr;


    // -------------------------------------------------------- Memory Leak
    cout << "\n---------------------- Memory Leak:\n";




    cout << endl;
    return 0;
}










