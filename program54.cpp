#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Function to remove extra spaces between words
string removeExtraSpaces(const string& input) {
    string result;
    bool spaceFound = false;

    for (char ch : input) {
        if (ch == ' ') {
            if (!spaceFound) {
                result += ch;
                spaceFound = true;
            }
        } else {
            result += ch;
            spaceFound = false;
        }
    }

    return result;
}

// Function to copy content from one file to another after removing extra spaces
void copyFileWithSpacesRemoval(const string& inputFileName, const string& outputFileName) {
    ifstream inputFile(inputFileName);

    if (!inputFile.is_open()) {
        cerr << "Error opening input file." << endl;
        return;
    }

    ofstream outputFile(outputFileName);

    if (!outputFile.is_open()) {
        cerr << "Error opening output file." << endl;
        inputFile.close();
        return;
    }

    string line;

    while (getline(inputFile, line)) {
        string processedLine = removeExtraSpaces(line);
        outputFile << processedLine << '\n';
    }

    cout << "File content copied with extra spaces removed successfully." << endl;

    inputFile.close();
    outputFile.close();
}

int main(int argc, char* argv[]) {
    // Check if command-line arguments are provided
    if (argc != 3) {
        cerr << "Usage: " << argv[0] << " <inputFileName> <outputFileName>" << endl;
        return 1; // Exit with an error code
    }

    // Get input and output file names from command-line arguments
    string inputFileName(argv[1]);
    string outputFileName(argv[2]);

    // Call the function to copy content and remove extra spaces
    copyFileWithSpacesRemoval(inputFileName, outputFileName);

    return 0; // Exit the program successfully
}
