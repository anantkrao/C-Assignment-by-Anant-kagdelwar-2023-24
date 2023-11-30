#include <iostream>

using namespace std;

// Function to reverse a string
void reverseString(char str[]) {
    // Find the length of the string
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    // Reverse the string
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

// Function to count the number of characters in a string
int countCharacters(char str[]) {
    // Initialize count
    int count = 0;

    // Loop until null character is encountered
    for (int i = 0; str[i] != '\0'; i++) {
        count++;
    }

    return count;
}

int main() {
    // Part A: Reverse the string
    char originalString[] = "Hello";
    cout << "Original String: " << originalString << endl;

    reverseString(originalString);

    cout << "Reversed String: " << originalString << endl;

    // Part B: Count the number of characters in the string
    char inputString[] = "CountMe";
    int charCount = countCharacters(inputString);

    cout << "Number of characters in the string: " << charCount << endl;

    return 0; // Exit the program successfully
}
