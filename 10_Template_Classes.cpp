
#include <iostream>
using namespace std;

// a class which is not type specific due to the use of template
//
// a class contains data members of other types. So whatever data is gonna be
// stored inside our objects, that can be templatized. This will involve templatizing
// the class and all of the functions that exists in the class.
//
// a node is an object that's created to store data of other objects or variables.
// in data structures, we store nodes rather than storing the data directly. and the
// nodes actually store the data.

class Obj {                         // an example class
private:
    string name;
public:
    Obj(string n): name(n) {}
    string getName() const {return name;}
};

template<typename T>
class Node {                        // node objects store obj by value
public:
    Node(T e);
    T getElement() const;
    void setElement(T e);
private:
    T element;
};

template<typename T>    // This is only for external definitions
Node<T>::Node(T e): element(e) {}       // constructor
// it's Node<T> node of type T because we don't know what T is gonna be yet.

template<typename T>
T Node<T>::getElement() const { return element; }   // accessor of type T

template<typename T>
void Node<T>::setElement(T e) { element = e; }      // mutator of type T


// *********************************************************************************
// **************************      MAIN FUNCTION     *******************************
// *********************************************************************************

int main() {
    cout << "\n";

    int i = 5;
    char c = 'A';
    double d = 3.14;
    string s = "Hi";
    Obj o("Azeem");

    Node<int> n1(i);
    Node<char> n2(c);
    Node<double> n3(d);
    Node<string> n4(s);      // storing actual data from n1 to n4
                                // storing a pointer to data in n5
    Node<Obj*> n5(&o);          // can store an object or an object pointer

    cout << n1.getElement() << "\n";
    cout << n2.getElement() << "\n";
    cout << n3.getElement() << "\n";
    cout << n4.getElement() << "\n";
    cout << n5.getElement()->getName() << "\n";     // -> operator coz node contains a pointer
    // n5.getElement() returns a pointer to o from line 55.
    // then it says o.getName(), that's what the arrow operator does. It dereferences
    // what getElement() returns and then it calls the getName() and that returns
    // the name "Azeem".


    cout << "\n";
    return 0;
}
