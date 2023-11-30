#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// Structure to represent a person's information
struct Person {
    string name;
    string address;
    string phoneNumber;
};

// Function to compare persons for sorting
bool comparePersons(const Person &a, const Person &b) {
    if (a.name != b.name) {
        return a.name < b.name;  // Sort by name as primary key
    }
    return a.address < b.address;  // Sort by address as secondary key
}

int main() {
    const int maxSize = 20; // Maximum number of persons

    // Get the number of persons (n)
    int n;
    cout << "Enter the number of persons (n, max 20): ";
    cin >> n;

    if (n <= 0 || n > maxSize) {
        cout << "Invalid input for the number of persons. Exiting program." << endl;
        return 1;
    }

    // Create a vector to store information about each person
    vector<Person> phoneDirectory;

    // Input details for each person
    for (int i = 0; i < n; ++i) {
        Person person;
        cout << "\nEnter details for person " << i + 1 << ":" << endl;
        cout << "Name: ";
        cin.ignore(); // Clear the newline character from the buffer
        getline(cin, person.name);

        cout << "Address: ";
        getline(cin, person.address);

        cout << "Telephone Number: ";
        getline(cin, person.phoneNumber);

        phoneDirectory.push_back(person);
    }

    // Sort the phone directory based on name and address
    sort(phoneDirectory.begin(), phoneDirectory.end(), comparePersons);

    // Display the sorted telephone directory
    cout << "\nSorted Telephone Directory:" << endl;
    for (const auto &person : phoneDirectory) {
        cout << "Name: " << person.name << ", Address: " << person.address << ", Telephone: " << person.phoneNumber << endl;
    }

    return 0; // Exit the program successfully
}
