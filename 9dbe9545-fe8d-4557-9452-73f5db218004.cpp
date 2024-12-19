// 4. WAP to demonstrate copy constructor in C++
#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
 
    Person(string n, int a) : name(n), age(a) {
        cout << "Constructor called for: " << name << endl;
    }

 
    Person(const Person &p) {
        name = p.name;
        age = p.age;
        cout << "Copy constructor called for: " << name << endl;
    }

 
    void display() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    cout << "Creating a person object..." << endl;
    Person person1("Raj", 18); 
    person1.display();

    cout << "Creating another object using copy constructor..." << endl;
    Person person2 = person1; 
    person2.display();

    return 0;
}