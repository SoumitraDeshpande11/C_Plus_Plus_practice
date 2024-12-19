// WAP in C++ to calculate the sum of frist N natural number using recursion
#include <iostream>
using namespace std;
int sumOfNaturalNumbers(int n) {
    if (n == 0) { 
        return 0;
    }
    return n + sumOfNaturalNumbers(n - 1); 
}

int main() {
    int n;
    cout << "Enter a positive integer N: ";
    cin >> n;

    if (n < 0) {
        cout << "Please enter a positive integer." << endl;
    } else {
        int result = sumOfNaturalNumbers(n);
        cout << "The sum of the first " << n << " natural numbers is: " << result << endl;
    }

    return 0;
}