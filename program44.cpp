#include <iostream>

using namespace std;

int main() {
    // Declare variables
    int n, i = 1, sum = 0;

    // Get the value of n from the user
    cout << "Enter the value of n: ";
    cin >> n;

    // Use a while loop to calculate the sum of the series
    while (i <= n) {
        sum += i;
        i++;
    }

    // Display the sum of the series
    cout << "Sum of the series 1 + 2 + ... + " << n << " is: " << sum << endl;

    return 0; // Exit the program successfully
}
