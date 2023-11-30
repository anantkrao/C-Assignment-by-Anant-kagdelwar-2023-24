#include<iostream>

// Step 1: Declare a class named SimpleInterestCalculator
class SimpleInterestCalculator {
private:
    // Step 2: Declare private member variables for principal, rate, and time
    float principal;
    float rate;
    float time;

public:
    // Step 3: Declare public member functions for input, calculation, and output
    void inputValues() {
        // a. Prompt the user to enter the principal amount, rate of interest, and time
        std::cout << "Enter the principal amount: ";
        std::cin >> principal;

        std::cout << "Enter the rate of interest: ";
        std::cin >> rate;

        std::cout << "Enter the time (in years): ";
        std::cin >> time;
    }

    float calculateSimpleInterest() {
        // b. Calculate simple interest using the formula
        return (principal * rate * time) / 100;
    }

    void displayResult(float simpleInterest) {
        // c. Display the calculated simple interest
        std::cout << "Simple Interest: " << simpleInterest << std::endl;
    }
};

// Step 4: In the main function
int main() {
    // a. Create an object of the SimpleInterestCalculator class
    SimpleInterestCalculator calculator;

    // b. Call the inputValues function to get user input
    calculator.inputValues();

    // c. Call the calculateSimpleInterest function to perform the calculation
    float result = calculator.calculateSimpleInterest();

    // d. Call the displayResult function to display the result
    calculator.displayResult(result);

    // Step 5: End
    return 0;
}
