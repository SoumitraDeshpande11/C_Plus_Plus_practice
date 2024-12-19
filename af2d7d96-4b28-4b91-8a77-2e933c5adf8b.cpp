// 1. WAP in C++ using class and object to calculate the area and volume of the room.
#include <iostream>
using namespace std;
class Room {
private:
    double length;
    double breadth;
    double height;

public:
 
    Room(double l, double b, double h) {
        length = l;
        breadth = b;
        height = h;
    }

    
    double calculateArea() {
        return length * breadth;
    }

    
    double calculateVolume() {
        return length * breadth * height;
    }
};

int main() {
    double length, breadth, height;
    cout << "Enter the length of the room: ";
    cin >> length;
    cout << "Enter the breadth of the room: ";
    cin >> breadth;
    cout << "Enter the height of the room: ";
    cin >> height;
    Room room(length, breadth, height);

    cout << "The area of the room is: " << room.calculateArea() << " square units" << endl;
    cout << "The volume of the room is: " << room.calculateVolume() << " cubic units" << endl;

    return 0;
}