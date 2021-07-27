
#include <iostream>
using namespace std;

// The sum of all parts of A will include B.
// However, B can belong to many instances of A. The scope and lifetime of A and B are independent.
// Ex: Person has-a address
// If you have a Person class and an Address object, Person can contain an address object.
// person has-a address. However, that address can be shared by multiple persons.
// Additionally, a person might have one address and move to another address, at which point the original link
// between them is severed and this address is available for another person object to associate with it.

class Address {
private:
    string location;
public:
    Address(): Address("") {}
    Address(string l): location(l) {}

    string getLocation() const {return location;}
};

class Person {
private:
    string name;
    Address *home; // Pointer to an external object (can use dynamic or automatic memory)
public:
    Person(): Person("Anonymous", "homeless") {}
    Person(string n): Person(n, "homeless") {}
    Person(string n, string a): name(n), home(new Address(a)) {}    // Creates a dynamic address object
                                                                      // Address object is pointed to by *home.
                                                                      // 2 param constr
    // We created the Address when we created the Person class, this Address object is independent of Person in
    // terms of scope and lifetime. That is because it uses dynamic memory.


    Person(string n, Address &h): name(n), home(&h) {}                // Accepts an address object
                                                                      // 2 param constr
    // Home will point to the object that was sent by reference to this function. This is an example of using an
    // external object to create our Person object.
    // We link to an external address object that already exists when we create our person.


    void setHome(Address &h) {home = &h;}                             // Assigns an address object
    // If a person moves from current address to another address, we use this to point home to a new address object.
    // We don't delete what home originally points to, because this home object is supposed to be managed elsewhere
    // in out program.


    Address& getHome() const {return *home;}                          // Returns the address object by reference
    friend ostream& operator << (ostream &out, const Person &c);
    // The big three is typically not included (external objects manage their own lifetime)
};

ostream& operator << (ostream &out, const Person &p) {
    out << p.name << " " << p.home -> getLocation();                  // Arrow operator used to dereference the pointer
    return out;
}

// *********************************************************************************
// **************************      MAIN FUNCTION     *******************************
// *********************************************************************************

int main() {
    cout << "\n";

    Address *a1 = new Address{"4545 Center Blvd."};

    Person p1{"Kim"};              // Calls the 1 param constr on line 29. It generates an address object which
    // is just set to homeless.
    Person p2{"Kanye", *a1};    // Kanye is associated with this. This is the address object that we created
    // on line 67. By sending the actual object, we dereference a1 to send the actual object by reference. We end
    // up calling 4th constructor on line 37.
    p1.setHome(p2.getHome());      // Kim moves in with Kanye, a1 belongs to multiple people.

    cout << p1 << "\n";
    cout << p2 << "\n";

    cout << "\n";
    return 0;
}
