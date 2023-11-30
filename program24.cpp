#include <iostream>
#include <string>

using namespace std;

// Define the Student class
class Student {
private:
    string name;
    int rollNumber;
    int rank;
    string address;

public:
    // Constructor to initialize the data members
    Student(string n, int roll, int r, string addr) {
        name = n;
        rollNumber = roll;
        rank = r;
        address = addr;
    }

    // Function to display student details
    void displayDetails() {
        cout << "Student Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Rank: " << rank << endl;
        cout << "Address: " << address << endl;
    }
};

int main() {
    // Create an object of the Student class
    Student student1("John Doe", 101, 1, "123 Main St, City");

    // Display the details of the student
    student1.displayDetails();

    return 0; // Exit the program successfully
}
