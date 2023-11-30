#include <iostream>
using namespace std;

int main() {
    // Declare variables to store user input and result
    double num1, num2, result;
    char op; // Operator (+, -, *, /)

    // Get user input
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;

    // Perform arithmetic operation based on the operator
    switch (op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            // Check if the divisor is not zero
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                cout << "Error: Division by zero is undefined." << endl;
                return 1; // Exit the program with an error code
            }
            break;
        default:
            cout << "Error: Invalid operator." << endl;
            return 1; // Exit the program with an error code
    }

    // Display the result
    cout << "Result: " << num1 << " " << op << " " << num2 << " = " << result << endl;

    return 0; // Exit the program successfully
}
