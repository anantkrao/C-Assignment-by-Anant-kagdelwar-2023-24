#include <iostream>

using namespace std;

// Inline function to calculate the area of a circle
inline double calculateCircleArea(double radius) {
    return 3.14159 * radius * radius;
}

int main() {
    // Declare variable to store the radius of the circle
    double radius;

    // Get input from the user
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    // Call the inline function to calculate the area of the circle
    double area = calculateCircleArea(radius);

    // Display the result
    cout << "The area of the circle with radius " << radius << " is: " << area << endl;

    return 0; // Exit the program successfully
}
