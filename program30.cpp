#include <iostream>

using namespace std;

// Function to perform Bubble Sort on an integer array
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            // Swap if the element found is greater than the next element
            if (arr[j] > arr[j + 1]) {
                // Perform the swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to display elements of an array
void displayArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    const int size = 5; // Size of the array
    int myArray[size];

    // Get user input for array elements
    cout << "Enter " << size << " integers for the array:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> myArray[i];
    }

    // Display the original array
    cout << "\nOriginal Array: ";
    displayArray(myArray, size);

    // Perform Bubble Sort
    bubbleSort(myArray, size);

    // Display the sorted array
    cout << "\nSorted Array: ";
    displayArray(myArray, size);

    return 0; // Exit the program successfully
}
