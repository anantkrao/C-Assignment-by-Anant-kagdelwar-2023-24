#include<iostream>
#include<iomanip>

int main() {
    // Step 1: Create an array to store 20 numbers
    int numbers[20];

    // Step 2: Input 20 arbitrary numbers into the array
    std::cout << "Enter 20 arbitrary numbers:" << std::endl;
    for (int i = 0; i < 20; ++i) {
        std::cin >> numbers[i];
    }

    // Step 3: Create an array to store frequency and initialize to 0
    int frequency[20] = {0};

    // Step 4: Calculate the frequency of each number
    for (int i = 0; i < 20; ++i) {
        for (int j = 0; j < 20; ++j) {
            if (numbers[j] == numbers[i]) {
                frequency[i]++;
            }
        }
    }

    // Step 5: Print the header for the table
    std::cout << "\nNumber\tFrequency" << std::endl;

    // Step 6: Print numbers and their frequencies in tabular form
    for (int i = 0; i < 20; ++i) {
        // Avoid printing duplicates
        if (frequency[i] != 0) {
            std::cout << std::setw(3) << numbers[i] << "\t" << std::setw(3) << frequency[i] << std::endl;
        }
    }

    return 0;
}
