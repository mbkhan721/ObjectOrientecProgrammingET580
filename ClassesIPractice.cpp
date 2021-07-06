#include<iostream>
using namespace std;
/*
// 1. Create a Rational Number Class.
// a) data members: numerators and denominators
// b) implement number accessors and mutators
// c) implement a non-member output function which displays the number as a fraction such as 5/7
// d) instantiate and print the Rational Number 5/7

class RatNum {                              // This is our class 'RatNum'
public:                                     // accessible by any function
    void setNum(int n) {num = n;}           // Mutator setNum accepts an int n
                                            // it assigns that n to the num data member
                                            // It returns nothing, so it's a void
                                            // The type of the param matches the type of the data member
    void setDen(int d) {den = d;}

    int getNum() {return num;}              // Accessors
                                            // getNum returns the value num with a data member num
    int getDen() {return den;}
private:                                    // only accessible by member functions
    int num;                                // Accessors & Mutators are used to interact with private data members.
    int den;
};

void output(RatNum &r) {                    // Since output is a non-member function,
                                            // it need to accept the RatNum by parameter,
                                            // so it does by reference.
    cout << r.getNum() << "/" << r.getDen() << endl;

                                            // Since our class has been setup with encapsulation,
                                            // the function cannot directly access the data members.
                                            // Therefore, it has to use accessor functions for each
                                            // of the two data members to get the values.
}

int main() {
    RatNum r1;                              // RatNum r1; || RatNum r1{}; with braces is same thing.
                                            // RatNum r1 creates an object r1 of type RatNum.
                                            // We then call two member functions.
    r1.setNum(5);                           // Our rational number is populated with two values.
    r1.setDen(7);
    output(r1);                             // There's no calling object for the non-member function
                                            // Instead, we send the object by parameter

 return 0;
}


// --------------------------------------------------------------------------
// 2. Modify the Rational Number class.
// a) Define accessors and mutators externally from the class.

class RatNum {
public:
    void setNum(int n);                     // Only declarations
    void setDen(int d);
    int getNum();
    int getDen();
private:
    int num;
    int den;
};
                                                // Definitions
                                                //External definitions require the :: scope resolution operator
void RatNum::setNum(int n) {num = n;}           // Specify the class and scope resolution operator
void RatNum::setDen(int d) {den = d;}
int RatNum::getNum() {return num;}
int RatNum::getDen() {return den;}

void output(RatNum &r) {
    cout << r.getNum() << "/" << r.getDen() << endl;
}

int main() {
    RatNum r1{};
    r1.setNum(5);
    r1.setDen(7);
    output(r1);

    cout << endl;
    return 0;
}


// --------------------------------------------------------------------------
// 3. Calculate the GCD of a Rational Number.
// a) implement a non-member recursive GCD function that:
// 1) accepts two integers as input parameters
// 2) returns the GCD of the input parameters
// b) instantiate the Relational Number 40/24 and output its GCD

class GCDRatNum{
public:
    void setNum(int n);
    void setDen(int d);
    int getNum();
    int getDen();

private:
    int num;
    int den;
};
void GCDRatNum::setNum(int n) {num = n;}
void GCDRatNum::setDen(int d) {den = d;}
int GCDRatNum::getNum() {return num;}
int GCDRatNum::getDen() {return den;}

void output(GCDRatNum &r) {
    cout << r.getNum() << "/" << r.getDen() << endl;
}

int euclid(int n, int d) {                          // non-member function
    if (d == 0) {                                   // Base Case
        return n;
    }
    return euclid(d, n % d);                  // GCD(a, b) = GCD(b, a % b)
}                                                   // GCD(a, 0) = a

int main() {
    GCDRatNum r2;                                   // We create the RatNum object r2
    r2.setNum(40);                               // set the numerator to 40 using a member function
    r2.setDen(24);                               // denominator to 24 using a member function
    output(r2);
    cout << euclid(r2.getNum(), r2.getDen()) << endl;
                                                    // To call the euclid function which has two ints,
                                                    // and out RatNum function has two ints, so we call
                                                    // the euclid func and we send our numerator to n
                                                    // and denominator to d.
                                                    //
                                                    // r2.getNum returns num from private data members,
                                                    // that'll get sent to n in euclid function.
                                                    // r2.getDen which returns den and gets sent to d.

    cout << endl;
    return 0;
}
*/

// --------------------------------------------------------------------------
// 4. Modify the Rational Number class.
// a) Convert the GCD function to a member GCD function which:
// 1) Does not require input parameters
// 2) Does not alter the original values of the numerator and denominator
// b) Instantiate the Rational Number 40/24 and output its GCD

class GCDRatNum{
public:
    void setNum(int n);
    void setDen(int d);
    int getNum();
    int getDen();
    int altEuclidIter();
    int gcd();                               // We are controlling access to the private func gcdRec()
private:                                     // ABSTRACTION
    int gcdRec(int n, int d);                // We don't want people to use this func coz its called by gcd()
    int num;
    int den;
};

void GCDRatNum::setNum(int n) {num = n;}
void GCDRatNum::setDen(int d) {den = d;}
int GCDRatNum::getNum() {return num;}
int GCDRatNum::getDen() {return den;}

void output(GCDRatNum &r) {
    cout << r.getNum() << "/" << r.getDen() << endl;
}
// solution 1
int GCDRatNum::altEuclidIter() {
    int temp, a = num, b = den;                     // 2. Variables are backed up from being overwritten
    while (b != 0) {                                // Repeat as long as b is not = 0
        temp = b;                                   // Swap algorithm / backup b
        b = a % b;                                  // New b is a % b
        a = temp;                                   // Replace a with original b
    }
    return a;                                       // When b is 0, return a  ||   GCD(a, 0) = a
}
// solution 2
int GCDRatNum::gcd() {                              // 3. gcd() calls the private function
    return gcdRec(num, den);                        // All this function does is call the gcdRec() function
}                                                   // It gets the num and den values from when its called.
                                                    // num from gcd function goes to int n
int GCDRatNum::gcdRec(int n, int d) {               // den from gcd func goes to int d
    if (d == 0)
        return n;
    return gcdRec(d, n % d);                        // When the answer is returned, it will appear in gcd()
                                                    // gcd() function will return the value of gcd
}

int main() {
    GCDRatNum r1{};

    r1.setNum(40);
    r1.setDen(24);
    output(r1);
    cout << r1.altEuclidIter() << endl;              // 1. When you call r1.altEuclidIter, its gonna
                                                     // get the num/den of r1 from above the while loop
    cout << "\nSolution 2:\n";
    cout << r1.gcd() << endl;                        // This func calls gcdRec() func to get the GCD / THIS IS AN EXAMPLE OF ABSTRACTION
    output(r1);

    cout << endl;
    return 0;
}
