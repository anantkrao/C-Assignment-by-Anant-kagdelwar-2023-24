#include <iostream>

using namespace std;

// Inline function to find the minimum of two values
inline int findMinimum(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    // Declare variables to store two values
    int num1, num2;

    // Get input from the user
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Call the inline function to find the minimum of the two numbers
    int minimum = findMinimum(num1, num2);

    // Display the result
    cout << "The minimum of " << num1 << " and " << num2 << " is: " << minimum << endl;

    return 0; // Exit the program successfully
}
