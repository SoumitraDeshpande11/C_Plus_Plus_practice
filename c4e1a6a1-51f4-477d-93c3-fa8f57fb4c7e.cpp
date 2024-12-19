// 5. WAP to demonstrate virtual function in C++
#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal makes a sound." << endl;
    }
    void eat() {
        cout << "Animal eats food." << endl;
    }
};

class Dog : public Animal {
public:
 
    void sound() override{
        cout << "Dog barks." << endl;
    }

 
    void eat() {
        cout << "Dog eats bones." << endl;
    }
};

int main() {
    Animal *animalPtr; 
    Dog dog;

     
    animalPtr = &dog;

    cout << "Using virtual function:" << endl;
    animalPtr->sound(); 
    cout << "Using non-virtual function:" << endl;
    animalPtr->eat(); 
    return 0;
}