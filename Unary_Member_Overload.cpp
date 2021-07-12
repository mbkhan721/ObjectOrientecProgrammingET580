#include<iostream>
using namespace std;
/*
// --------------------------------------- Unary Member Overload
// Operator with one operand.

// -(minus) unary operator negates a single operand
// Number a{3.5};
// cout << -a; prints -3.5
// cout << a;  prints 3.5

// In Unary Overload, you don't modify the calling object, instead you return a negated equivalent.

class Number {
public:
    Number(): Number(0) {}          // 1st constructor
    Number(double n): num(n) {}        // 2nd Constructor
    void output() const {cout << num << "\n";}

    // unary - member operator overload
    // return a temporary object which is a negated copy of the calling object
    Number operator-() const { // This is the overloaded negation operator. Operator followed by the symbol.
        return Number(-num);   // Temporary object - by end of this line, it goes out of scope.
            // Calling 2nd constructor Number()
    }
private:
    double num;
};

int main() {
    // negation upon integer, note that the original integer is not modified.
    int x = 5;
    cout << -x << "\n";
    cout << x << "\n\n";

    // a is the calling object, note that a is not modified.
    Number a{3.25};
    (-a).output();  // negating because we have one operand and a negation symbol.
    a.output();
}
 */