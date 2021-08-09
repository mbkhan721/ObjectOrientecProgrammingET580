/*
#include <iostream>
using namespace std;

template<typename T>
void swapVal(T &a, T &b) {
    T temp;
    temp = a;
    a = b;
    b = temp;
}

// *********************************************************************************
// **************************      MAIN FUNCTION     *******************************
// *********************************************************************************

int main() {
    cout << "\n";

    int x = 1;
    double y = 5.4;

    cout << x << " " << y << "\n";
    swapVal(x, y);                      // compiler error: template cannot auto typecast
    cout << x << " " << y << "\n";      // arguments must be of the same type


    cout << "\n";
    return 0;
}
*/