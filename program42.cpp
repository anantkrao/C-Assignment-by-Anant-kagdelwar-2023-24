#include <iostream>
#include <cmath>

using namespace std;

class Polar {
private:
    double radius;
    double angle;

public:
    // Function to take input for radius and angle
    void getInput() {
        cout << "Enter radius: ";
        cin >> radius;

        cout << "Enter angle in degrees: ";
        cin >> angle;
    }

    // Function to display values of data members
    void display() const {
        cout << "Radius: " << radius << ", Angle: " << angle << " degrees";
    }

    // Friend function declaration to add two Polar objects
    friend Polar addPolar(const Polar &p1, const Polar &p2);
};

// Friend function definition to add two Polar objects
Polar addPolar(const Polar &p1, const Polar &p2) {
    Polar result;
    result.radius = sqrt(pow(p1.radius, 2) + pow(p2.radius, 2) + 2 * p1.radius * p2.radius * cos(p1.angle - p2.angle));
    result.angle = p1.angle + p2.angle;

    return result;
}

int main() {
    // Create two Polar objects
    Polar polar1, polar2;

    // Take input for the first Polar object
    cout << "Enter details for Polar Object 1:" << endl;
    polar1.getInput();

    // Take input for the second Polar object
    cout << "\nEnter details for Polar Object 2:" << endl;
    polar2.getInput();

    // Display values of the two Polar objects
    cout << "\nPolar Object 1: ";
    polar1.display();
    cout << endl;

    cout << "Polar Object 2: ";
    polar2.display();
    cout << endl;

    // Add the two Polar objects using the friend function
    Polar sum = addPolar(polar1, polar2);

    // Display the result of addition
    cout << "\nResult after addition:" << endl;
    sum.display();
    cout << endl;

    return 0; // Exit the program successfully
}
