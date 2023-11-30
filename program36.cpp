#include <iostream>
#include <string>

using namespace std;

// Class with a constructor having default arguments
class Person {
private:
    string name;
    int age;

public:
    // Constructor with default arguments
    Person(string n = "Unknown", int a = 0) : name(n), age(a) {
        // The body of the constructor can be empty or contain additional logic
    }

    // Function to display person details
    void displayDetails() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    // Create objects of Person with different constructors
    Person person1("John", 25);
    Person person2("Alice");
    Person person3; // Uses default values for name and age

    // Display details of each person
    cout << "Person 1:" << endl;
    person1.displayDetails();

    cout << "\nPerson 2:" << endl;
    person2.displayDetails();

    cout << "\nPerson 3:" << endl;
    person3.displayDetails();

    return 0; // Exit the program successfully
}
