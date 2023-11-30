#include <iostream>
using namespace std;

// Enumeration for weekdays
enum Weekday {
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};

int main() {
    // Declare a variable of type Weekday
    Weekday day;

    // Get user input for the day (assuming 0 for Monday, 1 for Tuesday, and so on)
    cout << "Enter a number (0-6) to represent a day of the week: ";
    int userInput;
    cin >> userInput;

    // Validate user input
    if (userInput < 0 || userInput > 6) {
        cout << "Invalid input. Please enter a number between 0 and 6." << endl;
        return 1; // Exit the program with an error code
    }

    // Assign the user input to the variable 'day'
    day = static_cast<Weekday>(userInput);

    // Print the corresponding weekday
    switch (day) {
        case MONDAY:
            cout << "The day is Monday." << endl;
            break;
        case TUESDAY:
            cout << "The day is Tuesday." << endl;
            break;
        case WEDNESDAY:
            cout << "The day is Wednesday." << endl;
            break;
        case THURSDAY:
            cout << "The day is Thursday." << endl;
            break;
        case FRIDAY:
            cout << "The day is Friday." << endl;
            break;
        case SATURDAY:
            cout << "The day is Saturday." << endl;
            break;
        case SUNDAY:
            cout << "The day is Sunday." << endl;
            break;
    }

    return 0; // Exit the program successfully
}
