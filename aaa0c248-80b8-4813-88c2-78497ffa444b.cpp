// 3. WAP to demonstrate destructor in C++
#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string brand;
    string model;

public:
 
    Car(string b, string m) : brand(b), model(m) {
        cout << "Car object created: " << brand << " " << model << endl;
    }

 
    ~Car() {
        cout << "Car object destroyed: " << brand << " " << model << endl;
    }

 
    void displayDetails() {
        cout << "Car: " << brand << " " << model << endl;
    }
};

int main() {
    cout << "Entering main function..." << endl;

    {
        cout << "Creating a car object inside a block..." << endl;
        Car car1("Tesla", "Model S");
        car1.displayDetails();
        
    }

    cout << "Back to main function, block ended." << endl;

    return 0;
}