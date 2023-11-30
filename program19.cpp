#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Declare variable to store the user input
    int num;

    // Get user input
    cout << "Enter a number: ";
    cin >> num;

    // Check if the number is less than 2
    if (num < 2) {
        cout << num << " is not a prime number." << endl;
        return 0; // Exit the program successfully
    }

    // Check for factors from 2 to the square root of the number
    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) {
            cout << num << " is not a prime number." << endl;
            return 0; // Exit the program successfully
        }
    }

    // If no factors were found, the number is prime
    cout << num << " is a prime number." << endl;

    return 0; // Exit the program successfully
}
