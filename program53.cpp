#include <iostream>

using namespace std;

class FactorialCalculator {
private:
    int number;
    unsigned long long result; // To handle larger factorials

public:
    // Parameterized constructor
    FactorialCalculator(int num) : number(num), result(1) {}

    // Copy constructor
    FactorialCalculator(const FactorialCalculator& other) : number(other.number), result(other.result) {}

    // Function to calculate factorial
    void calculateFactorial() {
        for (int i = 1; i <= number; ++i) {
            result *= i;
        }
    }

    // Function to display the result
    void displayResult() const {
        cout << "Factorial of " << number << " is: " << result << endl;
    }
};

int main() {
    // Get input from the user
    int inputNumber;
    cout << "Enter a number to calculate factorial: ";
    cin >> inputNumber;

    // Create an object of FactorialCalculator
    FactorialCalculator calculator(inputNumber);

    // Use copy constructor to create another object
    FactorialCalculator copyCalculator = calculator;

    // Calculate factorial for the original object
    calculator.calculateFactorial();

    // Display the result for the original object
    calculator.displayResult();

    // Display the result for the object created using the copy constructor
    copyCalculator.displayResult();

    return 0; // Exit the program successfully
}
