#include <iostream>

using namespace std;

// Function to exchange the content of two variables using call by value
void exchangeValues(int a, int b, int &resultA, int &resultB) {
    resultA = b;
    resultB = a;
}

int main() {
    // Declare two variables
    int x = 5, y = 10;

    // Display the initial values
    cout << "Before exchanging: x = " << x << ", y = " << y << endl;

    // Call the function to exchange values
    int exchangedX, exchangedY;
    exchangeValues(x, y, exchangedX, exchangedY);

    // Display the values after exchanging
    cout << "After exchanging: x = " << exchangedX << ", y = " << exchangedY << endl;

    return 0; // Exit the program successfully
}
