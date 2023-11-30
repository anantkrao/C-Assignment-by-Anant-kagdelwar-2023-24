#include <iostream>

using namespace std;

int main() {
    // Declare variables
    int n, sum = 0, i = 1;

    // Get user input for the value of n
    cout << "Enter the value of n: ";
    cin >> n;

    // Use a while loop to calculate the sum
    while (i <= n) {
        sum += i;  // Add the current value of i to the sum
        i++;       // Increment i for the next iteration
    }

    // Display the result
    cout << "The sum of the series 1 + 2 + 3 + ... + " << n << " is: " << sum << endl;

    return 0; // Exit the program successfully
}
