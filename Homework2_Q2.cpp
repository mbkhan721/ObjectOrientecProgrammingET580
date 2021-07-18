/*
#include<iostream>
#include<string>
using namespace std;

//
// Created by Muhammad B. Khan on 7/17/2021.
// ET580 Summer2
//
// 2) --------------------------------------------------------------------------
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

    // 2) --------------------------------------------------------------------------
    // Unary - operator
    friend RatNum& operator -(RatNum& ratNum);

    //overloading operator <<
    friend ostream& operator <<(ostream& os, RatNum& ratNum);

    // overloading >> operator
    friend ostream& operator >>(ostream& os, RatNum& ratNum);

    // Binary
    friend RatNum& operator -(RatNum& r1, RatNum& r2);
    friend RatNum& operator +(RatNum& r1, RatNum& r2);
    friend RatNum& operator *(RatNum& r1, RatNum& r2);
    friend RatNum& operator /(RatNum& r1, RatNum& r2);

    // Boolean or relational operators
    friend bool operator !=(RatNum& r1, RatNum& r2);
    friend bool operator >(RatNum& r1, RatNum& r2);
    friend bool operator <(RatNum& r1, RatNum& r2);
    friend bool operator ==(RatNum& r1, RatNum& r2);

    // overloading operator []
    int operator [](int i){
        if(i == 1)
            return num;
        else
            return den;
    }
    // overloading operator =
    void operator = (RatNum& r2){
        setNum(r2.getNum());
        setDen(r2.getDen());
    }


};
RatNum ratNum;

//operator << overloading
ostream& operator <<(ostream& os, RatNum& ratNum){
    os << ratNum.num << "/" << ratNum.den;
    return os;
}
//operator >> overloading
istream& operator >>(istream& is, RatNum& ratNum){
    int n, d;
    is >> n;
    is >> d;
    ratNum.setNum(n);
    ratNum.setDen(d);
    return is;
}
// - overloading
RatNum& operator - (RatNum& ratNum) {
    ratNum.setNum(-ratNum.getNum());
    return ratNum;
}
//operator + overloading
RatNum& operator +(RatNum& r1, RatNum& r2){
    RatNum* ratNum = new RatNum(r1.getNum() * r2.getDen() + r2.getNum() * r1.getDen(), r1.getDen() * r2.getDen());
    ratNum->reduce();
    return *ratNum;
}
//operator - binary overloading
RatNum& operator -(RatNum& r1, RatNum& r2){
    RatNum* ratNum = new RatNum(r1.getNum() * r2.getDen() - r2.getNum() * r1.getDen(), r1.getDen() * r2.getDen());
    ratNum->reduce();
    return *ratNum;
}
//operator * overloading
RatNum& operator *(RatNum& r1, RatNum& r2){
    RatNum* ratNum = new RatNum(r1.getNum() * r2.getNum(), r1.getDen() * r2.getDen());
    ratNum->reduce();
    return *ratNum;
}
//operator / overloading
RatNum& operator /(RatNum& r1, RatNum& r2){
    RatNum* ratNum = new RatNum(r1.getNum() * r2.getDen(), r1.getDen() * r2.getNum());
    ratNum->reduce();
    return *ratNum;
}
//operator == overloading
bool operator ==(RatNum& r1, RatNum& r2){
    r1.reduce();
    r2.reduce();
    if(r1.getNum() == r2.getNum() && r1.getDen() == r2.getDen())
        return true;
    else
        return false;
}
//operator != overloading
bool operator !=(RatNum& r1, RatNum& r2){
    r1.reduce();
    r2.reduce();
    if(r1.getNum() == r2.getNum() && r1.getDen() == r2.getDen())
        return false;
    else
        return true;
}
//operator > overloading
bool operator >(RatNum& r1, RatNum& r2){
    int lcm = RatNum::LCM(r1.getDen(), r2.getDen());
    if((r1.getNum() * (lcm / r1.getDen())) > ((r2.getNum() * (lcm / r2.getDen()))))
        return true;
    else
        return false;
}
//operator < overloading
bool operator <(RatNum& r1, RatNum& r2){
    int lcm = RatNum::LCM(r1.getDen(), r2.getDen());
    if((r1.getNum() * (lcm / r1.getDen())) < ((r2.getNum() * (lcm / r2.getDen()))))
        return true;
    else
        return false;
}

// *********************************************************************************
// **************************      MAIN FUNCTION    ********************************
// *********************************************************************************

int main() {

    // 2) --------------------------------------------------------------------------
    cout << "Muhammad B. Khan - Homework 2\nET580 - Summer\n\n------------ Problem 2: \n";

    RatNum r1(1,2), r2(1,6), r3(2,5);

    cout << "\nInput/Output Stream operators: " << endl;
    RatNum r4;
    cout << "Enter a relational number: ";
    cin >> r4;
    cout << r4 << endl;
    cout << "Negation Operation: " << endl;
    cout << -r4 << endl;

    cout << "\nArithmetic Operators: " << endl;
    RatNum r5 = r1 + r2;
    cout << r1 << " + " << r2 << " = " << r5 << endl;
    RatNum r6 = r1 - r2;
    cout << r1 << " - " << r2 << " = " << r6 << endl;
    RatNum r7 = r1 * r2;
    cout << r1 << " * " << r2 << " = " << r7 << endl;
    RatNum r8 = r1 / r2;
    cout << r1 << " / " << r2 << " = " << r8 << endl;

    cout << "\nArithmetic Chaining: " << endl;
    RatNum r9 = r5 + r6 - r7 * r8;

    cout << r5 << " + " << r6 << " - " << r7 << " * " << r8 << " = " << r9 << endl;

    cout << "\nRelational Operators: " << endl;
    cout << r5 << " == " << r6 << " ? " << (r5 == r6) << endl;
    cout << r5 << " != " << r6 << " ? " << (r5 != r6) << endl;
    cout << r5 << " > " << r6 << " ? " << (r5 > r6) << endl;
    cout << r5 << " < " << r6 << " ? " << (r5 < r6) << endl;

    cout << "\nSubscript Operator: " << endl;
    cout << r5 << "\tnum = " << r5[1] << " den = " << r5[2] << endl << endl;


    cout << endl;
    return 0;
}
*/