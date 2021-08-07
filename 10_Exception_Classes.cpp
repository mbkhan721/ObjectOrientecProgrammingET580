/*
#include <iostream>
using namespace std;

class DivByZero {                                           // exception class
private:
    const char* message;                                    // error message (const char array)
public:
    DivByZero(): DivByZero("") {}
    DivByZero(const char* msg): message(msg) {}             // store a message in the object
    const char* getMessage() const {return message;}        // return the stored message
};
double divide(double a, double b) {
    if (b == 0) {
        throw DivByZero("Cannot divide by zero.");      // end function and throw exception
    }
    return a / b;                                            // if no exception, run this
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
    try {                                                       // code to try
        answer = divide(n, d);                                  // code to test for an exception
        cout << "The answer is: " << answer << "." << "\n";     // code to run if no exception is thrown
    }
    catch (const DivByZero &e) {                                // code to run if there is a caught exception
        cerr << "Error: " << e.getMessage() << "\n";
    }

    cout << "\nProgram Continues to Run" << "\n";


    cout << "\n";
    return 0;
}
*/