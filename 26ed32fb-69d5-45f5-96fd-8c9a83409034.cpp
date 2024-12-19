// 2. Create a Rectangle class with attributes for length and width. Include methods to set dimensions, calculate the area, and display the dimensions.
#include <iostream>
using namespace std;
 
class Rectangle {
private:
    double length;
    double width;

public:
 
    void setDimensions(double l, double w) {
        length = l;
        width = w;
    }

    double calculateArea() {
        return length * width;
    }
 
    void displayDimensions() {
        cout << "Length: " << length << ", Width: " << width << endl;
    }
};

int main() {
    Rectangle rect;
    double length, width;
 
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;
 
    rect.setDimensions(length, width);
 
    rect.displayDimensions();
    cout << "The area of the rectangle is: " << rect.calculateArea() << " square units" << endl;

    return 0;
}