#include <iostream>

using namespace std;

// Function to generate the transpose of a 3x3 matrix
void transposeMatrix(int matrix[3][3], int transpose[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            transpose[j][i] = matrix[i][j];
        }
    }
}

// Function to display a 3x3 matrix
void displayMatrix(int matrix[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    // Declare a 3x3 matrix
    int matrix[3][3];

    // Get user input for the matrix elements
    cout << "Enter the elements of the 3x3 matrix:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> matrix[i][j];
        }
    }

    // Display the original matrix
    cout << "\nOriginal Matrix:" << endl;
    displayMatrix(matrix);

    // Declare a matrix to store the transpose
    int transpose[3][3];

    // Generate the transpose of the matrix
    transposeMatrix(matrix, transpose);

    // Display the transposed matrix
    cout << "\nTranspose Matrix:" << endl;
    displayMatrix(transpose);

    return 0; // Exit the program successfully
}
