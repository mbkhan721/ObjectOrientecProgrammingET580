#include<iostream>
#include<time.h>
using namespace std;
/*
int getNumber(){
    int n = 721;
    return n;
}

void printArray(int a[], int size){
    if (size == 0) {
        return;
    }
    cout << a[size - 1] << " ";
    printArray(a, size - 1);
    //cout << a[size - 1] << " ";
}
/*
 * array = {7, 21, 4, 36, 12}
 *
 * a[4] print 12
 *      a[3] print 36
 *          a[2] print 4
 *              a[1] print 21
 *                  a[0] print 7
 *               a[1]
 *           a[2]
 *       a[3]
 *  a[4]
 */
/*
int recurFact(int n) {
    if (n == 1) {                       // Base case
        return 1;
    }
    return n * recurFact((n-1));    // Iterative step
}

void initGrades(string a[], int size){
    for (int i = 0; i < size; i++) {
        a[i] = "grades";
    }
}
void initScore(double a[][8], int d1, int d2){
    for (int i=0; i< d1; i++) {
        for (int j=0;j<d2;j++) {
            a[i][j] = rand() % 41 + 60;
        }
    }
}
void print(string grades[], double score[][8]) {
    for (int i =0; i< 4; i++){
        cout << grades[i] << ": ";
        for (int j=0;j<8;j++){
            cout << score[i][j] << " ";
        }
        cout << "\n";
    }
}

int main() {

    cout << "\n";
    // --------------------------------------------- Data type
    int a;
    cout << "Size of int: " << sizeof(a) << endl;
    long long c;
    cout << "Size of long long: " << sizeof(c) << endl;
    a = 1234567890123;          // Will not hold the value because it's too long || OVERFLOW
    c = 1234567890123;
    cout << "a = " << a << "\n";
    cout << "c = " << c << "\n\n";


    // --------------------------------------------- While loop
    int i = 0;
    while (i++ < 10) {
        cout << i << " ";
    }
    cout << "\n";

    int k =1;
    while (k <= 10) {         // While true, keep repeating
        cout << k << " ";
        k++;
    }
    cout << "\nWhat is k? " << k << "\n\n";


    // --------------------------------------------- For loop
    // for(initialize, comparison, update) {
    //      statement;
    // }
    for (int j = 1; j <= 10; j++) {
        cout << j << " ";
    }
    cout << "\n\n";

    // --------------------------------------------- Functions
    // Function is a group of code that carries a single task
    // Why use functions?
    // Because a big task may break into several smaller tasks
    // A function may be called from another function

    // When creating a function, we need to think about 3 things
    // return_type f_name (arg);

    int n = getNumber();
    cout << "Number = " << n << endl << endl;


    // --------------------------------------------- Recursive functions
    // Recursive function is a function that calls itself to finish a repeated task
    // It asks itself to do a smaller portion of the task (Recursive call)
    // Iterative steps
    // Base case

    int arr[5] = {7, 21, 4, 36, 12};
    cout << "Printing array in a recursive func:\n";
    printArray(arr, 5);

    cout << "\n";

    cout << "5 factorial = " << recurFact(5) << "\n\n";

    // --------------------------------------------- Arrays

    const int D1 = 4;
    const int D2 = 8;

    string grades[D1];       // There are 4 rows of grades
    initGrades(grades, D1);

    double score[D1][D2];   // There are 4 rows of score
    srand(time(NULL));
    initScore(score, D1, D2);


    print(grades, score);   // Combining the two arraysK


    return 0;
}
*/