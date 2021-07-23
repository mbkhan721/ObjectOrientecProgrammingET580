
#include <iostream>
using namespace std;

// DYNAMIC ARRAY: accessible by pointer
// Constructor initialization requires new to allocate memory
// [] delete used to deallocate memory when object is destroyed

class Course {
private:
    int *studentIDs;                        // Pointer to dynamic array
    int size;                               // Size of the array
public:
    Course(int s): size(s), studentIDs(new int[s]) {}       // allocate dynamic memory
    // Constructor above accepts one variable which is the size of the array.
    // Size is populated just like any other automatic variable.
    // studentIDs is the new dynamic array of size s.
    // We generated dynamic by our constructor which is pointed to by the pointer studentIDs.


    // Copy Constructor
    Course(const Course &c): size(c.size), studentIDs(new int[c.size]) {
        for (int i = 0; i < c.size; ++i) {
            studentIDs[i] = c.studentIDs[i];
        }
    }
    // The copy constructor starts with a class name and accepts a single param which is an object of type
    // Course by reference and it's a constant object.
    // First I copy the size from c to our new object. This is a shallow copy, size = c.size;
    // studentIDs(new int[c.size]) creates a new array. For the studentIDs pointer, inside the new object,
    // I create a new array and that array is of c.size.
    // Now I've allocated dynamic memory pointed to by studentIDs in our new object.
    // I have empty array of the same size as the array that's in c, so I used a for loop to copy all the
    // data from the array in object c to the array in our new object.
    // At the end of this function, we have two objects that are equivalent that both store dynamic array
    // of equivalent size with equivalent data.

    // This array stores data, it doesn't store pointers. If this array stored pointers like an array or arrays,
    // then this would have to be a deep copy.

    // The purpose of the copy constructor is to create a new object from an existing object. In the copy constructor
    // we have to create a new memory.
    // The purpose of the assignment overload is to copy from one object that exists to another object that exists. We
    // are going to update the memory that exists.


    // Assignment operator overload
    Course& operator=(const Course &c) {
        if (this != &c) {                               // are objects different or same
            if (this != c.size) {                       // are the arrays of same size
                delete [] studentIDs;                   // Delete original array
                size = c.size;                          // Update size
                studentIDs = new int[c.size];           // Create new array of size
            }
            for (int i = 0; i < c.size; ++i) {
                studentIDs[i] = c.studentIDs[i];        // Copy array
            }
            return *this;                               // Return the modified calling object
        }

    }

};




// *********************************************************************************
// **************************      MAIN FUNCTION     *******************************
// *********************************************************************************

int main() {



    cout << "\n";
    return 0;
}
