#include <iostream>

using namespace std;

int main() {
    // Declare two 3x3 matrices
    int matrix1[3][3], matrix2[3][3], resultMatrix[3][3];

    // Get user input for the elements of the first matrix
    cout << "Enter the elements of the first 3x3 matrix:" << endl;

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << "Enter element at position (" << i + 1 << ", " << j + 1 << "): ";
            cin >> matrix1[i][j];
        }
    }

    // Get user input for the elements of the second matrix
    cout << "\nEnter the elements of the second 3x3 matrix:" << endl;

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << "Enter element at position (" << i + 1 << ", " << j + 1 << "): ";
            cin >> matrix2[i][j];
        }
    }

    // Add the matrices
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            resultMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Display the result matrix
    cout << "\nThe result of the addition of the two matrices is:" << endl;

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << resultMatrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0; // Exit the program successfully
}
