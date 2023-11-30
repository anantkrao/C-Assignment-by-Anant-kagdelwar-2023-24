#include<iostream>

int main() {
    // Step 1: Declare a variable to store the day of the week (1 to 7)
    int day;

    // Step 2: Prompt the user to enter a number representing the day of the week
    std::cout << "Enter a number (1 to 7) representing the day of the week: ";
    std::cin >> day;

    // Step 3: Use if-else statements to determine the day and print the corresponding name
    if (day == 1) {
        std::cout << "Sunday" << std::endl;
    } else if (day == 2) {
        std::cout << "Monday" << std::endl;
    } else if (day == 3) {
        std::cout << "Tuesday" << std::endl;
    } else if (day == 4) {
        std::cout << "Wednesday" << std::endl;
    } else if (day == 5) {
        std::cout << "Thursday" << std::endl;
    } else if (day == 6) {
        std::cout << "Friday" << std::endl;
    } else if (day == 7) {
        std::cout << "Saturday" << std::endl;
    } else {
        // Step 4: Handle the case when the entered number is not in the valid range
        std::cout << "Invalid input. Please enter a number between 1 and 7." << std::endl;
    }

    // Step 5: End
    return 0;
}
