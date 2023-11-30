#include <iostream>

using namespace std;

// Function to exchange the content of two variables using call by reference
void exchangeValues(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    // Declare two variables
    int x = 5, y = 10;

    // Display the initial values
    cout << "Before exchanging: x = " << x << ", y = " << y << endl;

    // Call the function to exchange values
    exchangeValues(x, y);

    // Display the values after exchanging
    cout << "After exchanging: x = " << x << ", y = " << y << endl;

    return 0; // Exit the program successfully
}
