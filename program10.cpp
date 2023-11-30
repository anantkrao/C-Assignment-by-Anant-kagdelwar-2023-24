#include<iostream>

int main() {
    // Step 1: Declare a variable to store the day of the week (1 to 7)
    int day;

    // Step 2: Prompt the user to enter a number representing the day of the week
    std::cout << "Enter a number (1 to 7) representing the day of the week: ";
    std::cin >> day;

    // Step 3: Use a switch statement to determine the day and print the corresponding name
    switch(day) {
        case 1:
            std::cout << "Sunday" << std::endl;
            break;
        case 2:
            std::cout << "Monday" << std::endl;
            break;
        case 3:
            std::cout << "Tuesday" << std::endl;
            break;
        case 4:
            std::cout << "Wednesday" << std::endl;
            break;
        case 5:
            std::cout << "Thursday" << std::endl;
            break;
        case 6:
            std::cout << "Friday" << std::endl;
            break;
        case 7:
            std::cout << "Saturday" << std::endl;
            break;
        default:
            // Step 4: Handle the case when the entered number is not in the valid range
            std::cout << "Invalid input. Please enter a number between 1 and 7." << std::endl;
    }

    // Step 5: End
    return 0;
}
