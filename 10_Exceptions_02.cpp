
#include <iostream>
using namespace std;

double divide(double a, double b) {
    if (b == 0) {
        throw "Cannot divide by zero.";
    }
    return a / b;
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

        try {                                           // code to try
            answer = divide(n, d);                      // code to test for an exception
            cout << "The answer is: " << answer << "." << "\n";     // code to run if no exception is thrown
        }
        catch (const char* e) {                         // code to run if there is a caught exception
            cerr << "Error: " << e << "\n";
        }

        cout << "\nProgram Continues to Run" << "\n";


        cout << "\n";
        return 0;
    }
