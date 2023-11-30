#include <iostream>
#include <climits>

using namespace std;

// Function to find the second smallest element in an array
int findSecondSmallest(int arr[], int size) {
    if (size < 2) {
        cout << "Array should have at least two elements." << endl;
        return -1; // Return -1 to indicate an error
    }

    int smallest = INT_MAX;
    int secondSmallest = INT_MAX;

    for (int i = 0; i < size; ++i) {
        if (arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        } else if (arr[i] < secondSmallest && arr[i] != smallest) {
            secondSmallest = arr[i];
        }
    }

    return secondSmallest;
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

    // Find and display the second smallest element
    int secondSmallest = findSecondSmallest(myArray, size);
    if (secondSmallest != -1) {
        cout << "The second smallest element in the array is: " << secondSmallest << endl;
    }

    return 0; // Exit the program successfully
}
