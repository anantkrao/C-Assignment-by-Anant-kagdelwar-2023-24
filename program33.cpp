#include <iostream>

using namespace std;

// Function to find the second largest element in an array
int findSecondLargest(int arr[], int size) {
    if (size < 2) {
        cout << "Array should have at least two elements." << endl;
        return -1; // Return -1 to indicate an error
    }

    int largest = arr[0];
    int secondLargest = arr[0];

    for (int i = 1; i < size; ++i) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    return secondLargest;
}

int main() {
    const int maxSize = 10; // Maximum size of the array

    // Get the size of the array from the user
    int size;
    cout << "Enter the size of the array (max " << maxSize << "): ";
    cin >> size;

    if (size <= 0 || size > maxSize) {
        cout << "Invalid input for the size of the array. Exiting program." << endl;
        return 1;
    }

    // Declare an array of integers
    int myArray[maxSize];

    // Get array elements from the user
    cout << "Enter " << size << " integers for the array:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> myArray[i];
    }

    // Find and display the second largest element
    int secondLargest = findSecondLargest(myArray, size);
    if (secondLargest != -1) {
        cout << "The second largest element in the array is: " << secondLargest << endl;
    }

    return 0; // Exit the program successfully
}
