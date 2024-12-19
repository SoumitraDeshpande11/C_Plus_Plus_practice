// 3. Create a class called Student, and create 2 member functions setData and printData, 
// take 3 data members name, roll _no and marks
#include <iostream>
#include <string>
using namespace std;
class Student {
private:
    string name;
    int roll_no;
    float marks;

public:
 
    void setData(string studentName, int rollNumber, float studentMarks) {
        name = studentName;
        roll_no = rollNumber;
        marks = studentMarks;
    }

    void printData() {
        cout << "Student Name: " << name << endl;
        cout << "Roll Number: " << roll_no << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student student;
    string name;
    int roll_no;
    float marks;

    cout << "Enter the student's name: ";
    getline(cin, name);
    cout << "Enter the roll number: ";
    cin >> roll_no;
    cout << "Enter the marks: ";
    cin >> marks;
 
    student.setData(name, roll_no, marks);
    cout << "\nStudent Details:\n";
    student.printData();

    return 0;
}
