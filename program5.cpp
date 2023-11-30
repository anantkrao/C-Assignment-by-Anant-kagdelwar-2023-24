#include<iostream>

// Step 2: Declare the Calculator class
class Calculator {
private:
    // a. Declare private member variables
    double num1, num2;

public:
    // b. Declare public member functions
    void addition() {
        std::cout << "Sum: " << num1 + num2 << std::endl;
    }

    void subtraction() {
        std::cout << "Difference: " << num1 - num2 << std::endl;
    }

    void multiplication() {
        std::cout << "Product: " << num1 * num2 << std::endl;
    }

    void division() {
        if (num2 != 0) {
            std::cout << "Quotient: " << num1 / num2 << std::endl;
        } else {
            std::cout << "Error: Division by zero." << std::endl;
        }
    }

    // c. Define the member functions inside the class
    void setNumbers(double a, double b) {
        num1 = a;
        num2 = b;
    }
};

int main() {
    // Step 3: Create an object of the Calculator class
    Calculator myCalculator;

    // Step 4: Display a menu
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

        // Step 5: Based on the user's choice
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

    // Step 7: End
    return 0;
}
