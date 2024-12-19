#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, reversedStr;

 
    cout << "Enter a string: ";
    cin >> str;

 
    reversedStr = string(str.rbegin(), str.rend());
    cout << "Reversed string: " << reversedStr << endl;

 
    if (str == reversedStr) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}