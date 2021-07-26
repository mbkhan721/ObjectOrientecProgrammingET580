/*
// Muhammad B. Khan
// Quiz 1 - Question 1
// ET580 - Summer 2
#include <iostream>
using namespace std;

class Place {
public:
    string *name;
    Place(): Place("") {}
    Place(string n): name(new string(n)){}

    void setName(string n) {*name = n;}
    string getName() {return *name;}

    friend ostream& operator << (ostream& out, const Place &c);
    friend istream& operator >> (istream& in, const Place &c);

    Place(const Place &c);                 // Copy constructor
    Place& operator = (const Place &c);    // assignment operator overload
    ~Place();                              // destructor

};

Place::Place(const Place &c):               // Copy constructor
        name(new string(*(c.name))){        // initialize heap memory
    name = c.name;

}

Place& Place::operator=(const Place &c) {   // Assignment operator overload
    if (this != &c) {
        *name = *(c.name);                      // Deep copy the heap data member
    }
    return *this;                           // Return the calling object by reference
}

ostream& operator << (ostream& out, const Place &c) {
    out << *(c.name) << "\n";
    //out << &c << "\n";
    //out << c.name << "\n";
    return out;
}
istream& operator >> (istream& in, const Place &c) {
    //c.name;
    return in;
}
Place::~Place() {                           // Destructor
    delete name;                            // safely delete dynamic memory
}

// *********************************************************************************
// **************************      MAIN FUNCTION     *******************************
// *********************************************************************************

int main() {

    // 1) --------------------------------------------------------------------------
    cout << "\nMuhammad B. Khan\nQuiz 1\nET580 - Summer 2\n\n------------ Question 1: \n";

    // part 1
    Place a1,a2("Bookstore");
    cout<<"a1: "<<a1.getName()<<endl; // print "a1: TBD"
    a1.setName("Supermarket");
    cout<<"a1: "<<a1.getName()<<endl; // print "a1: Supermarket"
    cout<<"a2: "<<a2.getName()<<endl; // print "a2: Bookstore"
    // part 2
    Place b1("Bookstore");
    cout<<"b1: "<<b1.getName()<<endl; // print "b1: Bookstore"
    Place b2(b1),b3;
    cout<<"b2: "<<b2.getName()<<endl; // print "b2: Bookstore"
    b2.setName("Supermarket");
    cout<<"b1: "<<b1.getName()<<endl; // print "b1: Bookstore"
    cout<<"b2: "<<b2.getName()<<endl; // print "b2: Supermarket"
    b3 = b2;
    cout<<"b1: "<<b1.getName()<<endl; // print "b1: Bookstore"
    cout<<"b2: "<<b2.getName()<<endl; // print "b2: Supermarket"
    cout<<"b3: "<<b3.getName()<<endl; // print "b3: Supermarket"
    b3.setName("School");
    cout<<"b1: "<<b1.getName()<<endl; // print "b1: Bookstore"
    cout<<"b2: "<<b2.getName()<<endl; // print "b2: Supermarket"
    cout<<"b3: "<<b3.getName()<<endl; // print "b3: School"
    // part 3
    Place c("Bookstore");
    cout<<"c: "<<c; // print "c: School"
    cin>>c;
    cout<<c;


    cout << "\n";
    return 0;
}
*/