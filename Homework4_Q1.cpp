
#include<iostream>
#include<string>
using namespace std;

//
// Created by Muhammad B. Khan
// ET580 Summer2
// Homework 4 - Question 1
//
// 1) --------------------------------------------------------------------------
class Pet {
public:
    string *name;
    int age{};
    double weight{};

    Pet(): Pet("", 0, 0.0){}
    Pet(string n, int a, double w): name(new string(n)), age(a), weight(w) {}

    string getName() const {return *name;}
    int getAge() const {return age;}
    double getWeight() const {return weight;}

    string& setName(string n) const {*name = n;}
    static string getLifespan() {return "unknown lifespan";}

    // The big three
    Pet(const Pet &p);
    Pet& operator = (const Pet &p);
    ~Pet();

};
Pet::Pet(const Pet &p): name(new string(*(p.name))) {
    name = p.name;
    age = p.age;
    weight = p.weight;
    cout << "==> (Pet) copy constructor was called\n";
}

Pet& Pet::operator = (const Pet &p) {
    if (this != &p) {
        *name = *(p.name);
        age = p.age;
        weight = p.weight;
    }
    cout << "==> (Pet) Assignment operator was called\n";
    return *this;
}

Pet::~Pet() {
    delete name;
    cout << "==> (Pet) Destructor was called\n";
}


// *********************************************************************************
// **************************      MAIN FUNCTION    ********************************
// *********************************************************************************

int main() {

    // 1) --------------------------------------------------------------------------
    cout << "\nMuhammad B. Khan - Homework 4\nET580 - Summer\n\n------------ Problem 1: \n";

    Pet p("Kitty",2,10);
    cout<<p.getName()<<endl;
    cout<<p.getAge()<<endl;
    cout<<p.getWeight()<<endl;
    cout<<p.getLifespan()<<endl;
    Pet p1 = p, p2;
    p1.setName("Doggy");
    cout<<p1.getName()<<endl;
    cout<<p1.getAge()<<endl;
    cout<<p1.getWeight()<<endl;
    cout<<p1.getLifespan()<<endl;
    p2 = p1;
    p2.setName("Teddy");
    cout<<p2.getName()<<endl;
    cout<<p2.getAge()<<endl;
    cout<<p2.getWeight()<<endl;
    cout<<p2.getLifespan()<<endl;


    cout << endl;
    return 0;
}
