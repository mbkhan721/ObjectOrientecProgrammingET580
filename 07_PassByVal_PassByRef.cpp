/*
#include <iostream>
using namespace std;

// Pass by Value: Make a copy of data
// Pass by pointer: Make a copy of pointer value, which is the memory address of data.
// Pass by Reference: Send the memory address of data. It's a copy.

// Pass by ref and pass by Pointer are the same thing, we send a memory address to a function.
// They are both faster than pass by value except when we're dealing with very small values like
// integers. Because an integer pointer takes up 8 bytes, where an int only takes up 4 bytes.
// So if you're dealing with very simple primitive types, it's faster to pass by value. But aside
// from that, in most cases, it's faster to pass by pointer and pass by ref than pass by value.

// So which one to choose between pointers and reference?
// If you can avoid pointers, avoid it to prevent memory leaks and dangling pointers. Only use
// manual if you have to.
// The preferred way to pass info is generally pass by ref. It's just as fast as pass by pointer,
// but you dont have the complexity of managing memory issues that you do with pointers.


class Course {
public:
    int number;                                         // Public data member
    Course(): Course(0) {}
    Course(int n): number(n) {}
    int getNumber() const {return number;}
};

// To print out the number inside this course object and it's a pointer, it must say x->number
// because I dereference x to get the course object, then I access number.
void output(Course *x) {cout<< x -> number << "\n";}    // Pass object by pointer (increased chance of memory errors)

// If it's pass by reference, then I can just say x.number.
void output(Course &x) {cout<< x.number << "\n";}       // Pass object by reference (optimal)


// *********************************************************************************
// **************************      MAIN FUNCTION     *******************************
// *********************************************************************************

int main() {

    // Here I create dynamic object *c1 and I send this dynamic memory to the two functions
    // below it.
    Course *c1 = new Course{};                         // Heap object

    // Since *c1 is a pointer, if I send c1 to the function, then it's just passing a pointer
    // by value.
    output(c1);                                        // Pass heap object by pointer

    // If I want to send a pointer which is pass by reference, I have to dereference the
    // pointer to get the object which is then sent by reference to output function.
    output(*c1);                                    // Pass heap object by reference





    // Here I create an automatic variable c2.
    Course c2;                                         // Stack object

    // If I want to send c2 to a function that expects a pointer, I have to get the memory
    // address of c2. And that's what get sent to the function.
    output(&c2);                                       // Pass stack object by pointer

    // If I want to send c2 to a function accessed by reference, then I just send c2.
    output(c2);                                     // Pass stack object by ref



    cout << "\n";
    return 0;
}
*/