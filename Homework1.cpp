#include<iostream>
#include<string>
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
void print(int* b, int size) {
    for (int i =0;i<size;i++) {
        cout << b[i] << " ";
    }
};





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

    int Queen[8];
    cout << "Enter 8 column values: ";
    cin >> Queen[7]; // Problem here
    print(Queen, 8);



    cout << endl;
    return 0;
}

