
#include<iostream>
#include<string>
using namespace std;

//
// Created by Muhammad B. Khan
// ET580 Summer2
// Homework 4 - Question 2
//
// 2) --------------------------------------------------------------------------
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

    void setName(string n) const {*name = n;}
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

class Dog : public Pet {
private:
    string *breed;
public:
    Dog(): Dog("", 0, 0, "") {}
    Dog(string n, int a, double w, string b): breed (new string(b)), Pet(n, a, w){}

    string getBreed() const {return *breed;}
    //string getName() const {return *name;}
    void setBreed(string b) {*breed = b;}
    void setName(string n) {*name = n;}

    string getLifespan() {
        if (weight < 100) {
            return "Approximately 7 years";
        }
        return "Approximately 13 years";
    }

    // Copy constructor
    Dog(const Dog &c): Pet(c), breed(new string(*(c.breed))) {
        cout << "==> (Dog) copy constructor was called\n";
        name = c.name;
        age = c.age;
        weight = c.weight;
        breed = c.breed;
    }

    // assignment operator overload
    Dog& operator = (const Dog &c) {
        cout << "==> (Dog) Assignment operator was called\n";
        if (this != &c) {
            Pet::operator=(c);
            *breed = *(c.breed);
        }
        return *this;
    }

    ~Dog() {
        cout << "==> (Dog) Destructor was called\n";
        delete breed;
    }
};


// *********************************************************************************
// **************************      MAIN FUNCTION    ********************************
// *********************************************************************************

int main() {

    // 2) --------------------------------------------------------------------------
    cout << "\nMuhammad B. Khan - Homework 4\nET580 - Summer\n\n------------ Problem 2: \n";

    Dog d("Doggy",2,10,"Boxer");
    cout<<d.getName()<<endl;
    cout<<d.getAge()<<endl;
    cout<<d.getWeight()<<endl;
    cout<<d.getBreed()<<endl;
    cout<<d.getLifespan()<<endl;
    Dog d1 = d,d2;
    d1.setBreed("Akita");
    cout<<d1.getName()<<endl;
    cout<<d1.getAge()<<endl;
    cout<<d1.getWeight()<<endl;
    cout<<d1.getBreed()<<endl;
    cout<<d1.getLifespan()<<endl;
    d2 = d1;
    d2.setName("King");
    cout<<d2.getName()<<endl;
    cout<<d2.getAge()<<endl;
    cout<<d2.getWeight()<<endl;
    cout<<d2.getBreed()<<endl;
    cout<<d2.getLifespan()<<endl;


    cout << endl;
    return 0;
}
