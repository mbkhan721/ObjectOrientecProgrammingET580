#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
//
// Created by Muhammad B. Khan on 7/9/2021.
// ET580 Summer2
//
// 1) --------------------------------------------------------------------------
class Student {
public:
    Student(): name(), exam_1_grade(), exam_2_grade() {}
    void setName(string n) {name = n;}
    void setExam1Grade(int e1) {exam_1_grade = e1;}
    void setExam2Grade(int e2) {exam_2_grade = e2;}

    string getName() {return name;}
    int getExam1Grade() {return exam_1_grade;}
    int getExam2Grade() {return exam_2_grade;}

    char getGrade() {return calcGPA(exam_1_grade, exam_2_grade);}
private:
    string name;
    int exam_1_grade;
    int exam_2_grade;
    int calcGPA(int a, int b) {
        int temp = (a + b) / 2;
        if (temp > 89 && temp <= 100) {
            return 'A';
        }
        else if (temp > 79 && temp < 91) {
            return 'B';
        }
        else if (temp > 69 && temp < 81) {
            return 'C';
        }
        else if (temp > 59 && temp < 71) {
            return 'D';
        }
        else return 'F';
    }
};

// 2) --------------------------------------------------------------------------

int addStudent(Student students[], int& capacity, int& size, string name, int exam1, int exam2) {
    Student s;
    if (size < capacity) {
        for (int i = 0; i <= 5; i++) {
            s.setName(name);
            s.setExam1Grade(exam1);
            s.setExam2Grade(exam2);
        }
        students[++size] = s;
    }
    return size;
}
void output(Student students[], int size) {
    //Student s;
    for (int i = 1; i <= size; ++i) {
        cout << "Name: " << students[i].getName() << "\n";
        cout << "Exam 1: " << students[i].getExam1Grade() << "\n";
        cout << "Exam 2: " << students[i].getExam2Grade() << "\n";
        cout << "GPA: " << students[i].getGrade() << "\n\n";
    }
}

// 3) --------------------------------------------------------------------------
void print(int* q, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (q[i] == j) {
                cout << "Q  ";
            }
            else {
                cout << ".  ";
            }
        }
        cout << "\n";
    }
    cout << "\n";
};

bool queensAreSafe(int* q, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (q[i] == q[j]) {                     // If multiple queens share a column
                return false;
            }
            if (abs(i - j) == abs(q[i] - q[j])) {   // If multiple queens share a diagonal
                return false;
            }
        }
    }
    return true;
}

// 4) --------------------------------------------------------------------------
class Vehicle {
private:
    string brand;
    int number_of_doors;
public:
    // Default constructor
    Vehicle(): brand("TBD"), number_of_doors(0) {}
    // Two param constructor
    Vehicle(string make, int doors): brand(make), number_of_doors(doors) {}

    // Accessor functions
    string getBrand() {return brand;}
    int getNumOfDoors() {return number_of_doors;}

    // Mutators
    void setBrand(string make) {brand = make;}
    void setNumOfDoors(int doors) {number_of_doors = doors;}

    // Print member function
    void display() {
        cout << "Brand: " << brand << "\n";
        cout << "Number of Doors: " << number_of_doors << "\n";
    }

};

// 5) --------------------------------------------------------------------------
class Student2 {
private:

    // Inner function
    class GPA {
    private:
        double gpa;
    public:
        GPA() {gpa = 0.0;}
        GPA(double gpa) { this -> gpa = gpa;}
        void setGpa(double gpa) {this -> gpa = gpa;}
        double getGpa() {return gpa;}

        char getLetterGrade() {
            if (gpa >= 3.5) {
                return 'A';
            }
            else if (gpa >= 2.5) {
                return 'B';
            }
            else if (gpa >= 1.5) {
                return 'C';
            }
            else if (gpa >= 1) {
                return 'D';
            } else return 'F';
        }

    };
    // Outer function
    string name;
    string major;
    GPA grade;
public:
    Student2();
    Student2(string name, string major, double gpa);
    void setName(string name);
    void setMajor(string major);
    void setGrade(double gpa);
    string getName();
    string getMajor();
    double getGrade();
    void display();

};
Student2::Student2(string name, string major, double gpa) {
    this -> name = name;
    this -> major = major;
    grade.setGpa(gpa);
}
void Student2::setName(string name) {name = name;}
void Student2::setMajor(string major) {major = major;}
void Student2::setGrade(double gpa) {grade.setGpa(gpa);}
string Student2::getName() {return name;}
string Student2::getMajor() {return major;}
double Student2::getGrade() {return grade.getGpa();}
void Student2::display() {
    cout << "Name: " << name << "\n";
    cout << "Major: " << major << "\n";
    cout << "GPA: " << grade.getGpa() << "\n";
    cout << "Grade: " << grade.getLetterGrade() << "\n\n";
}

// *********************************************************************************
// **************************      MAIN FUNCTION    ********************************
// *********************************************************************************
int main() {

    // 1) --------------------------------------------------------------------------
    cout << "Muhammad B. Khan - Homework 1\nET580 - Summer\n\n------------ Problem 1: \n";
    Student a;
    a.setName("David");
    a.setExam1Grade(90);
    a.setExam2Grade(80);

    cout << "Name: " << a.getName() << "\n";
    cout << "Exam 1: " << a.getExam1Grade() << "\n";
    cout << "Exam 2: " << a.getExam2Grade() << "\n";
    cout << "GPA: " << a.getGrade() << "\n\n";


    // 2) --------------------------------------------------------------------------
    cout << "------------ Problem 2: \n";

    int capacity = 10;
    Student students[capacity];
    int num = 0;

    addStudent(students, capacity, num, "Amy", 95, 90);
    addStudent(students, capacity, num, "Bob", 74, 63);
    addStudent(students, capacity, num, "Charlie", 86, 80);
    addStudent(students, capacity, num, "Daisy", 75, 90);
    addStudent(students, capacity, num, "Edward", 24, 66);
    output(students, num);


    // 3) --------------------------------------------------------------------------
    cout << "------------ Problem 3: \n";
    // Array index represents rows
    // Array value represents columns

    int Queen[8];
    cout << "Enter 8 column values: ";
    for (int i = 0; i < 8; i++) {
        cin >> Queen[i];
    }

    cout << "\n";
    print(Queen, 8);

    if (queensAreSafe(Queen, 8)) {
        cout << "Queens are safe.";
    } else
        cout << "Queens are not safe.";


    // 4) --------------------------------------------------------------------------
    cout << "\n\n------------ Problem 4: \n";

    Vehicle x, y("BMW", 4);
    x.display();
    y.display();


    // 5) --------------------------------------------------------------------------
    cout << "\n\n------------ Problem 5: \n";
    cout.setf(ios::fixed);
    cout.precision(2);

    Student2 s1("John Williams", "Music", 4.0);
    Student2 s2("Isaac Asimov", "English", 2.53);
    s1.display();
    s2.display();


    cout << endl;
    return 0;
}

