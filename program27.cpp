#include <iostream>

using namespace std;

// Function to copy one string into another
void copyString(char source[], char destination[]) {
    int i = 0;
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0'; // Null-terminate the destination string
}

// Function to count consonants and vowels in each word of a sentence
void countConsonantsVowels(char sentence[]) {
    int i = 0;

    while (sentence[i] != '\0') {
        // Skip leading whitespaces
        while (sentence[i] == ' ') {
            i++;
        }

        // Count consonants and vowels in the current word
        int consonants = 0, vowels = 0;
        while (sentence[i] != ' ' && sentence[i] != '\0') {
            char currentChar = tolower(sentence[i]); // Convert to lowercase for case-insensitivity
            if (currentChar >= 'a' && currentChar <= 'z') {
                if (currentChar == 'a' || currentChar == 'e' || currentChar == 'i' || currentChar == 'o' || currentChar == 'u') {
                    vowels++;
                } else {
                    consonants++;
                }
            }
            i++;
        }

        // Display the counts for the current word
        cout << "Word with consonants and vowels count: " << consonants << ", " << vowels << endl;
    }
}

int main() {
    // Part A: Copy one string into another
    char sourceString[] = "Hello";
    char destinationString[10]; // Assuming the destination has enough space
    copyString(sourceString, destinationString);

    cout << "Source String: " << sourceString << endl;
    cout << "Destination String: " << destinationString << endl;

    // Part B: Count consonants and vowels in each word of a sentence
    char inputSentence[] = "This is a sample sentence.";
    cout << "\nInput Sentence: " << inputSentence << endl;

    countConsonantsVowels(inputSentence);

    return 0; // Exit the program successfully
}
