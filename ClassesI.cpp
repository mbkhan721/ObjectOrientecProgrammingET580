#include<iostream>
using namespace std;

int main() {

    // Review
    int i = 5;
    cout << "\ni = " << i << " Memory Address: " << &i << "\n";

    int &r = i;     // r is a reference or alias for i
    // r is a reference to i
    // they are different names for the same memory location

    cout << "i = " << i << " r = " << r << "\n";
    cout << "Memory address of i = " << &i << " Memory address of r = " << &r << "\n";




    cout << endl;
    return 0;
}

