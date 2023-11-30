#include <iostream>

using namespace std;

// Function to find the biggest of three numbers using pointers
int findBiggest(int* num1, int* num2, int* num3) {
    if (*num1 >= *num2 && *num1 >= *num3) {
        return *num1;
    } else if (*num2 >= *num1 && *num2 >= *num3) {
        return *num2;
    } else {
        return *num3;
    }
}

int main() {
    // Declare variables to store three numbers
    int num1, num2, num3;

    // Get input from the user
    cout << "Enter three numbers:" << endl;
    cin >> num1 >> num2 >> num3;

    // Call the function to find the biggest number using pointers
    int biggest = findBiggest(&num1, &num2, &num3);

    // Display the result
    cout << "The biggest number among " << num1 << ", " << num2 << ", and " << num3 << " is: " << biggest << endl;

    return 0; // Exit the program successfully
}
