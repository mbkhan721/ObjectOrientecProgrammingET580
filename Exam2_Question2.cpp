/*
// Muhammad B. Khan
// Exam 2 - Question 2
// ET580 - Summer 2
#include<iostream>
#include<string>
using namespace std;


// *********************************************************************************
// **************************      MAIN FUNCTION    ********************************
// *********************************************************************************

int main() {
    // 2) --------------------------------------------------------------------------
    cout << "\nMuhammad B. Khan\nExam 2\nET580 - Summer 2\n\n------------ Question 2: \n";

    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};

    cout << sizeof(a) << endl;              // 1: 36 bytes
    cout << sizeof(a + 0) << endl;          // 2: 4 bytes
    cout << sizeof(*(a + 0)) << endl;       // <==> a[0]    3: 12 bytes
    cout << sizeof(**a) << endl;            //<==> a[0][0]  4: 4 bytes
    cout << sizeof(&a) << endl;             // 5: 4 bytes

    // Assume the address of "a" is 0x7ffee2fef9e0
    cout << a + 1 << endl;                  // 6: 0x7ffee2fef9e0 + 12 = 0x7ffee2fef9ec
    cout << *a + 1 << endl;                 // 7: 0x7ffee2fef9e0 + 4 = 0x7ffee2fef9e4
    cout << **a + 1 << endl;                // 8: 2
    cout << &a << endl;                     // 9: 0x7ffee2fef9e0
    cout << &a + 1 << endl;                 // 10: 0x7ffee2fef9e0 + 36 = 0x7ffee2fef904


    cout << endl;
    return 0;
}
*/