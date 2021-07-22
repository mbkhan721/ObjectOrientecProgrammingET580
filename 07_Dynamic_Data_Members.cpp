/*
#include <iostream>
using namespace std;

// Automatic memory: the memory is destroyed when the variable goes out of scope.
// Dynamic memory: variable continues to live even when it goes out of scope. The lifetime is independent of
// the scope.
// But we have to make sure that when the object is destroyed, the memory that belongs to it also destroyed to
// prevent memory leak.

class Course {
private:
    int *number;                                                // Pointer to heap memory
    string prof;
public:
    Course(int n, string p): number(new int(n)), prof(p) {}     // Allocate heap memory
    void print();
};
void Course::print() {
    cout << "\nMemory address of dynamic variable: " << number << "\n";
    cout << "Value of dynamic variable: " << *number << "\n";
    cout << "Professor: " << prof << "\n\n";
}

// *********************************************************************************
// **************************      MAIN FUNCTION     *******************************
// *********************************************************************************

int main() {

    Course c1{7, "Khan"};
    c1.print();

    cout << "\n";
    return 0;
}
*/