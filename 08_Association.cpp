/*
#include <iostream>
using namespace std;

// A uses B rather than A has-a B.
// B can associate with many instances of A.
// Scope and lifetime of A and B are independent.
// A and B unrelated aside from the association. Ex: A stores a pointer to B or A stores a pointer to B && B stores
// a pointer to A.
// A does not manage the lifetime memory of B (no big three).
// A doctor uses-a patient, patient uses-a doctor.

class Node {
private:
    string name;                            // data
    Node *next = nullptr;                   // link to another node
public:
    Node(string id): name(id) {}            // Constructor
    Node* getNext() const {return next;}    // get the next node
    void setNext(Node *n) {next = n;}       // set the next node

    friend ostream& operator << (ostream &out, const Node &c);
};

ostream& operator << (ostream &out, const Node &n) {
    return out << n.name;
}


// *********************************************************************************
// **************************      MAIN FUNCTION     *******************************
// *********************************************************************************

int main() {
    cout << "\n";

    Node *a = new Node("A");
    Node *b = new Node("B");
    Node *c = new Node("C");
    Node *d = new Node("D");

    // Create a "chain" of linked nodes
    a->setNext(b);  // associate a with b
    b->setNext(c);  // associate b with c
    c->setNext(d);  // associate c with d

    Node *n = a;                // create a pointer to point to the first node in the chain.
    while (n != nullptr) {      // iterate until the end of the chain
        cout << *n << " ";      // print the node that the n points to
        n = n->getNext();       // move the pointer to the next node in the chain
    }
    cout << "\n";

    a->setNext(c);              // change a.next to point to c
    delete b;                   // demonstrating independent lifetimes

    n = a;                      // Print n once again to teh first node in the chain
    while (n != nullptr) {
        cout << *n << " ";
        n = n->getNext();
    }

    cout << "\n";
    return 0;
}

// string name is the actual data that the node is storing.
// node pointer *next is part of the overhead that's going to be used to connect this node to other nodes. *next
// is the linking code that connects this node to other nodes inside a data structure.
// We have a simple constructor which sets the value of name.
// getNext() and setNext() functions that deal with interacting with *next variable.
// getNext() returns the pointer of the next element (or memory address of the next element).
// setNext() accepts a pointer to a node and it uses that to store the value of the memory address of the next node.
// in the cout, a points to b
// b points to c
// c points to d
// The way that they point to each other is from the *next variable.
// So we created a linked list.
// Each node is independent. If b is destroyed, that doesn't mean that c will be destroyed because c is what b
// points to.

// n = n->getNext(); means dereference n and then call the getNext() for n.
// Let's say n is currently a and we call its getNext(), this function returns the pointer to whatever its next
// variable is. It currently is pointing to b so it returns the memory address of b and it stores that back into n.

// In while loop, d doesn't point to anything so the loop ends.

*/