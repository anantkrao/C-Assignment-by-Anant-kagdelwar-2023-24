#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
    string name;
    double basicSalary;

public:
    // Function to read data for an employee
    void readData() {
        cout << "Enter employee name: ";
        getline(cin, name);

        cout << "Enter basic salary: ";
        cin >> basicSalary;
    }

    // Function to compute net salary
    double computeNetSalary() const {
        double da = 0.42 * basicSalary;  // DA is 42% of basic salary
        double grossSalary = basicSalary + da;
        double incomeTax = 0.30 * grossSalary;  // Income Tax is 30% of gross salary

        double netSalary = grossSalary - incomeTax;
        return netSalary;
    }

    // Function to display employee details and net salary
    void displayDetails() const {
        cout << "\nEmployee Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Basic Salary: " << basicSalary << endl;

        double netSalary = computeNetSalary();
        cout << "Net Salary: " << netSalary << endl;
    }
};

int main() {
    // Create an object of the Employee class
    Employee employee;

    // Read data for the employee
    cout << "Enter details for the employee:" << endl;
    employee.readData();

    // Display employee details and net salary
    employee.displayDetails();

    return 0; // Exit the program successfully
}
