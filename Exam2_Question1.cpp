/*
// Muhammad B. Khan
// Exam 2 - Question 1
// ET580 - Summer 2
#include<iostream>
#include<string>
using namespace std;

// 1) --------------------------------------------------------------------------
int* return_an_array(int n) {
    int i = 4;
    int* a;
    a = new int[5];
    if (n == 0) {
        return nullptr;
    }
    while (n > 0) {
        a[i] = n % 10;
        i--;
        n /= 10;
    }
    return a;
}
void print (const int *a, int size) {
    for (int i = 0; i < size; ++i) {
        cout << *(a + i) << " ";
    }
}

// *********************************************************************************
// **************************      MAIN FUNCTION    ********************************
// *********************************************************************************

int main() {
    // 1) --------------------------------------------------------------------------
    cout << "\nMuhammad B. Khan\nExam 2\nET580 - Summer 2\n\n------------ Question 1: \n";

    int *a = return_an_array(56789); //array of size 5
    print(a,5); // print 5 6 7 8 9
    delete []a;


    cout << endl;
    return 0;
}
*/