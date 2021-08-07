/*
#include <iostream>
using namespace std;

double dividePositive(double a, double b) {                     // only divide positive nums
    if (b == 0) { throw "Cannot divide by zero."; }             // first possible exception
    if (b < 0 || a < 0) {throw "Values must be positive.";}     // second possible exception
    return a / b;                                               // if no exception, run this
}


// *********************************************************************************
// **************************      MAIN FUNCTION     *******************************
// *********************************************************************************

int main() {

    double n, d, answer;
    cout << "Enter a numerator: ";
    cin >> n;
    cout << "Enter a denominator: ";
    cin >> d;

    // in the try block, we have a function call
    try {                                           // code to try
        answer = dividePositive(n, d);                      // code to test for an exception
        cout << "The answer is: " << answer << "." << "\n";     // code to run if no exception is thrown
    }
    catch (const char* d) {                         // code to run if there is a caught exception
        cerr << "Error: " << d << "\n";
    }

    cout << "\nProgram Continues to Run" << "\n";


    cout << "\n";
    return 0;
}
*/