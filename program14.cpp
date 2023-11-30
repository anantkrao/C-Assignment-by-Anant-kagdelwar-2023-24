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

    // Use the conditional operator to find the largest number
    int largestNumber = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);

    // Display the result
    cout << "The largest number among " << num1 << ", " << num2 << ", and " << num3 << " is: " << largestNumber << endl;

    return 0; // Exit the program successfully
}
