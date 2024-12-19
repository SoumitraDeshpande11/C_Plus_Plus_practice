// 5. Create a dynamic array for storing name of student
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of students: ";
    cin >> n;

    string* students = new string[n];

    cout << "Enter the names of " << n << " students:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> students[i];
    }

    cout << "The names of the students are:" << endl;
    for (int i = 0; i < n; i++) {
        cout << students[i] << endl;
    }
    delete[] students;

    return 0;
}