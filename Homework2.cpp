#include<iostream>
#include<string>
using namespace std;
/*
//
// Created by Muhammad B. Khan on 7/17/2021.
// ET580 Summer2
//
// 1) --------------------------------------------------------------------------
class RatNum {
    int num;
    int den;
public:
    RatNum() {num = 0; den = 1;}
    RatNum(int n) {num = n; den = 1;}
    RatNum(int n, int d) {num = n; den = d;}

    void setNum(int n) {num = n;}
    void setDen(int d) {den = d;}

    int getNum() {return num;}
    int getDen() {return den;}

    static int GCD(int a, int b) {
        if (b == 0)
            return a;
        else
            return GCD(b, a % b);
    }

    static int LCM(int a, int b) {
        return (a * b) / GCD(a, b);
    }

    void reduce() {
        int g = GCD(num, den);
        num /= g;
        den /= g;
    }

};

// *********************************************************************************
// **************************      MAIN FUNCTION    ********************************
// *********************************************************************************

int main() {

    // 1) --------------------------------------------------------------------------
    cout << "Muhammad B. Khan - Homework 2\nET580 - Summer\n\n------------ Problem 1: \n";

    // Test constructors, accessors, mutators:
    cout << "Default Constructor: ";
    RatNum r1;
    cout << r1.getNum() << "/" << r1.getDen() << "\n";

    cout << "Single Parameter Constructor: ";
    RatNum r2(2);
    cout << r2.getNum() << "/" << r2.getDen() << "\n";

    cout << "Dual Parameter Constructor: ";
    RatNum r3(1, 3);
    cout << r3.getNum() << "/" << r3.getDen() << "\n";

    cout << "Accessors / Mutators: ";
    r3.setNum(3);
    r3.setDen(12);
    cout << r3.getNum() << "/" << r3.getDen() << "\n";

    // Test GCD:
    cout << "\nGCD of the last fraction: "
    << RatNum::GCD(r3.getNum(), r3.getDen()) << "\n";
    cout << "GCD of 40 and 24: " << RatNum::GCD(40, 24) << "\n";

    // test lcm
    cout << "\nLCM of the last fraction: "
    << RatNum::LCM(r3.getNum(),r3.getDen()) << endl;
    cout << "LCM of 3 and 5: " << RatNum::LCM(3,5) << endl;

    // test reduce
    cout << "\nReducing the last fraction: ";
    r3.reduce();
    cout << r3.getNum() << "/" << r3.getDen() << endl;


    cout << endl;
    return 0;
}
*/