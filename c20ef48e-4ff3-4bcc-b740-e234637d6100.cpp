// 4. Create a class called AdditionClass, define data members num1, num2 and result, define member functions void read), void sum, void print respectively.
//  Create object objl and obj 2 in main method and show the
// execution.
#include <iostream>
using namespace std;
class AdditionClass {
private:
    int num1, num2, result;

public:
 
    void read() {
        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;
    }

 
    void sum() {
        result = num1 + num2;
    }

 
    void print() {
        cout << "The sum of " << num1 << " and " << num2 << " is: " << result << endl;
    }
};

int main() {
 
    AdditionClass obj1, obj2;
    cout << "For Object 1:" << endl;
    obj1.read();
    obj1.sum();
    obj1.print();

     
    cout << "\nFor Object 2:" << endl;
    obj2.read();
    obj2.sum();
    obj2.print();

    return 0;
}