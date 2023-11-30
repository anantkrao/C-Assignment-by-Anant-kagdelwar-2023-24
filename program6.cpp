#include<iostream>

// Step 2: Declare the Calculator class
class Calculator {
private:
    // a. Declare private member variables
    double num1, num2;

public:
    // b. Declare public member functions without defining them inside the class
    void setNumbers(double a, double b);
    void addition();
    void subtraction();
    void multiplication();
    void division();
};

// Step 3: Define the member functions outside the class using the scope resolution operator (::)
void Calculator::setNumbers(double a, double b) {
    num1 = a;
    num2 = b;
}

void Calculator::addition() {
    std::cout << "Sum: " << num1 + num2 << std::endl;
}

void Calculator::subtraction() {
    std::cout << "Difference: " << num1 - num2 << std::endl;
}

void Calculator::multiplication() {
    std::cout << "Product: " << num1 * num2 << std::endl;
}

void Calculator::division() {
    if (num2 != 0) {
        std::cout << "Quotient: " << num1 / num2 << std::endl;
    } else {
        std::cout << "Error: Division by zero." << std::endl;
    }
}

int main() {
    // Step 4: Create an object of the Calculator class
    Calculator myCalculator;

    // Step 5: Display a menu
    int choice;
    do {
        std::cout << "\nCalculator Menu:\n";
        std::cout << "1. Addition\n";
        std::cout << "2. Subtraction\n";
        std::cout << "3. Multiplication\n";
        std::cout << "4. Division\n";
        std::cout << "5. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        // Step 6: Based on the user's choice
        switch (choice) {
            case 1:
            case 2:
            case 3:
            case 4:
                // a. Prompt the user to enter two numbers
                double a, b;
                std::cout << "Enter two numbers: ";
                std::cin >> a >> b;

                // b. Call the corresponding member function of the Calculator class
                myCalculator.setNumbers(a, b);
                switch (choice) {
                    case 1:
                        myCalculator.addition();
                        break;
                    case 2:
                        myCalculator.subtraction();
                        break;
                    case 3:
                        myCalculator.multiplication();
                        break;
                    case 4:
                        myCalculator.division();
                        break;
                }
                break;
            case 5:
                std::cout << "Exiting the program.\n";
                break;
            default:
                std::cout << "Invalid choice. Please enter a valid option.\n";
        }
    } while (choice != 5);

    // Step 8: End
    return 0;
}
