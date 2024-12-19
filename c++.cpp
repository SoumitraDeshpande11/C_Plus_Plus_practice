#include <iostream>

using namespace std;

int main() {
  // Declare variables to store the numbers and the user's choice
  int num1, num2;
  char choice;

  // Get the user's choice
  cout << "Enter your choice (+, -, *, /): ";
  cin >> choice;

  // Get the two numbers from the user
  cout << "Enter the first number: ";
  cin >> num1;
  cout << "Enter the second number: ";
  cin >> num2;

  // Perform the calculation based on the user's choice
  switch (choice) {
    case '+':
      cout << "The sum is: " << num1 + num2 << endl;
      break;
    case '-':
      cout << "The difference is: " << num1 - num2 << endl;
      break;
    case '*':
      cout << "The product is: " << num1 * num2 << endl;
      break;
    case '/':
      // Check if the denominator is zero
      if (num2 == 0) {
        cout << "Error: Division by zero" << endl;
      } else {
        cout << "The quotient is: " << num1 / num2 << endl;
      }
      break;
    default:
      cout << "Invalid choice" << endl;
  }

  return 0;
}
