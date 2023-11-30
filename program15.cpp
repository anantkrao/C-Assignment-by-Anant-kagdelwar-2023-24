#include <iostream>
using namespace std;

int main() {
    // Declare variables to store three numbers
    int num1, num2, num3;

    // Get user input for three numbers
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Enter the third number: ";
    cin >> num3;

    // Using goto to find the greatest number
    int greatestNumber = num1;

    if (num2 > greatestNumber)
        greatestNumber = num2;

    if (num3 > greatestNumber)
        greatestNumber = num3;

    // Display the result
    cout << "The greatest number among " << num1 << ", " << num2 << ", and " << num3 << " is: " << greatestNumber << endl;

    return 0; // Exit the program successfully
}
