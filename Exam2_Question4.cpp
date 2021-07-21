/*
// Muhammad B. Khan
// Exam 2 - Question 4
// ET580 - Summer 2
#include<iostream>
#include<string>
using namespace std;

// 4) --------------------------------------------------------------------------
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

    void addMember(string);
    void removeMember();
    void display();
};
void Team::addMember(string s) {members[size] = s; size++;}
void Team::removeMember() {
    string s;
    for (int i = 0; i < size; ++i) {
        if (members[i] == s) {
            break;
        }
        if (i != size) {
            for (; i < size; i++) {
                members[i] = members[i + 1];
            }
            size--;
        }
    }
}
void Team::display() {
    cout << "Members List: ";
    for (int i = 0; i < size; ++i) {
        cout << members[i] << " ";
    }
    cout << "\n";
}

// *********************************************************************************
// **************************      MAIN FUNCTION    ********************************
// *********************************************************************************

int main() {
    // 4) --------------------------------------------------------------------------
    cout << "\nMuhammad B. Khan\nExam 2\nET580 - Summer 2\n\n------------ Question 4: \n";

    Team a("Mets");
    a.removeMember(); //
    a.display();
    a.addMember("David");
    a.addMember("Steven");
    a.addMember("Sara");
    a.addMember("Tom");
    a.display();
    a.removeMember();
    a.display();
    a.removeMember();
    a.display();

    cout << endl;
    return 0;
}
*/