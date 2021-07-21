/*
// Muhammad B. Khan
// Exam 2 - Question 3
// ET580 - Summer 2
#include<iostream>
#include<string>
using namespace std;

// 3) --------------------------------------------------------------------------
class Team {
private:
    string name;
    string *members;
    int size;
public:
    Team() {name = "TBD", members = nullptr, size = 0;}
    Team(string Name) {name = Name; members = nullptr; size = 0;}

    void setName(string Name) {name = Name;}
    string getName() {return name;}
    int getSize() {return size;}
    
};

// *********************************************************************************
// **************************      MAIN FUNCTION    ********************************
// *********************************************************************************

int main() {
    // 3) --------------------------------------------------------------------------
    cout << "\nMuhammad B. Khan\nExam 2\nET580 - Summer 2\n\n------------ Question 3: \n";

    Team a,b("Mets");
    cout<<a.getName()<<endl; // print TBD
    a.setName("Yankee");
    cout<<a.getName()<<endl; // print Yankee
    cout<<b.getName()<<endl; // print Mets
    cout<<a.getSize()<<endl; // print 0

    cout << endl;
    return 0;
}
*/