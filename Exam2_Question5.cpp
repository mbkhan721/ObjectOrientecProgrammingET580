/*
// Muhammad B. Khan
// Exam 2 - Question 5
// ET580 - Summer 2
#include<iostream>
#include<string>
using namespace std;

// 5) --------------------------------------------------------------------------

long long g(long long n) {
    if (n == 1)
        return 1;
    else if (n == 2)
        return -2;
    else if (n == 3)
        return 3;
    else
        return (g(n-1) + (2* g(n - 2) + g(n - 3)));
}
void g2(int n)
{
    int arr[n];
    arr[0] = 1;
    arr[1] = -2;
    arr[2] = 3;
    for(int y = 3;y < (n + 1); y++)
    {
        arr[y] = arr[y - 1] + (2 * arr[y - 2]) + arr[y - 3];
    }
    cout << "Non Recursive: ";
    cout << arr[n-1];
}

// I didn't get to finish it..



// *********************************************************************************
// **************************      MAIN FUNCTION    ********************************
// *********************************************************************************

int main() {
    // 5) --------------------------------------------------------------------------
    cout << "\nMuhammad B. Khan\nExam 2\nET580 - Summer 2\n\n------------ Question 5: \n";

    cout<<g(10)<<endl; // print 208
    cout<<g(20)<<endl; // print 92301
    cout<<g(30)<<endl; // print 40897880
    cout<<g(40)<<endl; // print 18121545389
    cout<<g(50)<<endl; // print 8029521512708

    g2(10);
    g2(20);
    g2(30);


    cout << endl;
    return 0;
}
*/