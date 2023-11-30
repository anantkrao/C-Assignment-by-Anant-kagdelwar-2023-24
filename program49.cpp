#include <iostream>
#include <cstring>

using namespace std;

class String {
private:
    char* str;

public:
    // Constructor to initialize the string
    String(const char* s = nullptr) {
        if (s) {
            str = new char[strlen(s) + 1];
            strcpy(str, s);
        } else {
            str = nullptr;
        }
    }

    // Destructor to free the dynamically allocated memory
    ~String() {
        delete[] str;
    }

    // Overloaded '+' operator to add two string objects
    String operator+(const String& other) const {
        char* result = new char[strlen(str) + strlen(other.str) + 1];
        strcpy(result, str);
        strcat(result, other.str);
        return String(result);
    }

    // Overloaded '=' operator to assign one string object to another
    String& operator=(const String& other) {
        if (this != &other) {
            delete[] str;
            str = new char[strlen(other.str) + 1];
            strcpy(str, other.str);
        }
        return *this;
    }

    // Function to display the string
    void display() const {
        cout << "String: " << (str ? str : "Empty") << endl;
    }
};

int main() {
    // Create two String objects
    String str1("Hello"), str2("World");

    // Display the original strings
    cout << "Original Strings:" << endl;
    str1.display();
    str2.display();

    // Use the '+' operator to add two strings
    String result = str1 + str2;
    cout << "\nAfter Adding Strings:" << endl;
    result.display();

    // Use the '=' operator to assign one string to another
    String assignedString;
    assignedString = result;
    cout << "\nAfter Assigning String:" << endl;
    assignedString.display();

    return 0; // Exit the program successfully
}
