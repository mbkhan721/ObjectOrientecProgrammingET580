/*
#include <iostream>
using namespace std;

// Function objects aka functors

class Add {
public:
    int operator() (int x, int y) {return x + y;}
};

class Multiply {
private:
    int count = 0;          // Track number of function calls (state example)
public:
    int operator() (int x, int y) {
        count++;            // Increment number of function calls
        return x * y;
    }
    int getCount() const {return count;}
};

void print(int a, int b, Add *obj) {
    cout << (*obj)(a, b) << "\n";
}
void print(int a, int b, Multiply *obj) {
    cout << (*obj)(a, b) << "\n";
}


// *********************************************************************************
// **************************      MAIN FUNCTION     *******************************
// *********************************************************************************

int main() {
    cout << "\n";

    Add *f = new Add();
    Multiply *m = new Multiply();

    print(5, 6, f);
    print(5, 6, m);

    cout << m->getCount() << "\n";      // find out the number of function calls



    cout << "\n";
    return 0;
}
*/