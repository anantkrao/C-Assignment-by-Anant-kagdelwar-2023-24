#include <iostream>

using namespace std;

int main() {
    // Declare a 3x3 matrix
    int matrix[3][3];

    // Get user input for the elements of the matrix
    cout << "Enter the elements of the 3x3 matrix:" << endl;

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << "Enter element at position (" << i + 1 << ", " << j + 1 << "): ";
            cin >> matrix[i][j];
        }
    }

    // Display the generated matrix
    cout << "\nThe generated 3x3 matrix is:" << endl;

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0; // Exit the program successfully
}
