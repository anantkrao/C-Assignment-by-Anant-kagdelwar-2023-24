#include <iostream>
#include <iomanip>  // For setting precision in output

using namespace std;

int main() {
    // Declare variables to store subject marks
    double mathMarks, physicsMarks, chemistryMarks;

    // Get input for each subject
    cout << "Enter Mathematics marks (out of 100): ";
    cin >> mathMarks;

    cout << "Enter Physics marks (out of 100): ";
    cin >> physicsMarks;

    cout << "Enter Chemistry marks (out of 100): ";
    cin >> chemistryMarks;

    // Calculate total and average marks
    double totalMarks = mathMarks + physicsMarks + chemistryMarks;
    double averageMarks = totalMarks / 3.0;

    // Display the mark sheet
    cout << "\nMark Sheet\n";
    cout << "--------------------------------\n";
    cout << setw(15) << "Subject" << setw(10) << "Marks\n";
    cout << "--------------------------------\n";
    cout << setw(15) << "Mathematics" << setw(10) << mathMarks << endl;
    cout << setw(15) << "Physics" << setw(10) << physicsMarks << endl;
    cout << setw(15) << "Chemistry" << setw(10) << chemistryMarks << endl;
    cout << "--------------------------------\n";
    cout << setw(15) << "Total" << setw(10) << totalMarks << endl;
    cout << setw(15) << "Average" << setw(10) << fixed << setprecision(2) << averageMarks << endl;

    // Display grades based on average marks
    if (averageMarks >= 90) {
        cout << "Grade: A\n";
    } else if (averageMarks >= 80) {
        cout << "Grade: B\n";
    } else if (averageMarks >= 70) {
        cout << "Grade: C\n";
    } else if (averageMarks >= 60) {
        cout << "Grade: D\n";
    } else {
        cout << "Grade: F\n";
    }

    return 0; // Exit the program successfully
}
