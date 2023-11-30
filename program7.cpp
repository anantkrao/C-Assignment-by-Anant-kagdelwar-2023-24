#include<iostream>

// Step 2: Declare the function calculateSimpleInterest
float calculateSimpleInterest(float principal, float rate, float time) {
    // a. Declare a variable simpleInterest to store the result of the calculation.
    float simpleInterest;

    // b. Calculate simple interest using the formula
    simpleInterest = (principal * rate * time) / 100;

    // c. Return the value of simpleInterest.
    return simpleInterest;
}

int main() {
    // Step 3: In the main function
    // a. Declare variables principal, rate, time, and result
    float principal, rate, time, result;

    // b. Prompt the user to enter the principal amount, rate of interest, and time
    std::cout << "Enter the principal amount: ";
    std::cin >> principal;

    std::cout << "Enter the rate of interest: ";
    std::cin >> rate;

    std::cout << "Enter the time (in years): ";
    std::cin >> time;

    // c. Call the calculateSimpleInterest function with the user-input values
    //    and store the result in the result variable.
    result = calculateSimpleInterest(principal, rate, time);

    // d. Display the calculated simple interest.
    std::cout << "Simple Interest: " << result << std::endl;

    // Step 4: End
    return 0;
}
