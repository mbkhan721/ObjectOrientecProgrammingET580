#include<iostream>
using namespace std;
/*
// Concept: an object that without a reachable memory address
// an object without a name

class Course{
public:
    Course(): number(20) {}
    Course(int n): number(n) {}
    int getNumber() const {return number;}

private:
    int number;
};
// return an object by value
Course f1() {
    Course o{5};        // o goes out of scope at end of function
    return o;              // returns a temporary copy of o
}
int main() {

    // Construct a temporary object
    Course{}; // After this line, object is out of scope

    // function that returns by value, returns a temporary object
    f1();
    // Copy temporary object contents to c1
    Course c1 = f1();
    cout << c1.getNumber() << "\n";


    cout << endl;
    return 0;
}
*/