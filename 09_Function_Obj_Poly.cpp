/*
#include <iostream>
using namespace std;

class Math {        // abstract class
public:
    virtual int operator()(int n) = 0;      // pure virtual function
};

class Summation: public Math {              // child class implements a functor
public:
    int operator()(int n) override {        // calculate summation of n
        int s = 0;
        for (int i = 0; i < n; ++i) {
            s += 1;
        }
        return s;
    }
};

class Factorial: public Math {              // child class implements a functor
public:
    int operator()(int n) override {        // calculate n factorial
        if (n == 1) return 1;
        return (*this) (n-1)*n;          // recursive function call of a functor
    }
};

int math_function(int n, Math* m) {         // accepts a Math object
    return (*m)(n);                         // use the functor on parameter n
}


// *********************************************************************************
// **************************      MAIN FUNCTION     *******************************
// *********************************************************************************

int main() {
    cout << "\n";

    Factorial f{};
    Summation s{};

    cout << s(5) << "\n";       // call s() overload (behaves like a summation function)
    cout << f(5) << "\n\n";     // call f() overload (behaves like a factorial function)

    Math*m;
    m = new Summation();            // function object using polymorphism
    cout << math_function(5, m) << "\n";        // calculate summation of 5

    m = new Factorial();            // function object using polymorphism
    cout << math_function(5, m) << "\n";        // calculate 5 factorial


    cout << "\n";
    return 0;
}
*/