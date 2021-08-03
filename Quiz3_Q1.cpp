/*
// Muhammad B. Khan
// Quiz 3 - Part 1
// ET580 - Summer 2
#include <iostream>
using namespace std;

class Beverage {
private:
    string *name;
public:
    //Beverage(): Beverage("") {}
    Beverage(string n): name (new string(n)) {}
    virtual void output() const = 0;
    void setName(string n) {n = *name;}
    string getName() const {return *name;}

    virtual ~Beverage() {                                   // virtual destructor
        cout << "==> Beverage destructor\n";
        delete name;
    }
};

class Soda : public Beverage {
private:
    double *price;
public:
    Soda(string n, double p): Beverage(n), price (new double(p)) {}
    void output() const override {
        cout << "Name: " << this->getName() << ", Price: " << *price << "\n";
    }
    void setPrice(double p) {p = *price;}
    double getPrice() const {return *price;}

    ~Soda() {                                   // virtual destructor
        cout << "==> Soda destructor\n";
        delete price;
    }
    };

    class Beer : public Beverage {
    public:
        Beer(string n, double ap): Beverage(n), alcohol_percentage(new double(ap)) {}
        void setPercentage(double p) {p = *alcohol_percentage;}
        double getPercentage() const {return *alcohol_percentage;}
        void output() const override {
            cout << "Name: " << this->getName() << ", Alcohol Percentage: "
            << *alcohol_percentage << "\n";
        }

        ~Beer() {
            cout << "==> Beer destructor\n";
            delete alcohol_percentage;
        }
    private:
        double *alcohol_percentage;
    };


// *********************************************************************************
// **************************      MAIN FUNCTION     *******************************
// *********************************************************************************

    int main() {

        // 1) --------------------------------------------------------------------------
        cout << "\nMuhammad B. Khan\nQuiz 3\nET580 - Summer 2\n\n------------ Part 1: \n";

        Beverage *p, *q;
        p = new Soda("Gatorade", 1.99);
        p->output(); // print "Name: Gatorade, Price: 1.99"
        q = new Beer("Budweiser", 3.6);
        q->output(); // print "Name: Budweiser, Alcohol Percentage: 3.6"

        cout << "\nPart 2:\n";
        // part 2
        delete p;
        delete q;

        cout << "\n";
        return 0;
    }
*/