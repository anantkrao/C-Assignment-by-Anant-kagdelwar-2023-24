#include <iostream>
#include <cmath>

using namespace std;

// Define the Sphere class
class Sphere {
private:
    double radius;

public:
    // Constructor to initialize the radius
    Sphere(double r) {
        radius = r;
    }

    // Function to calculate the surface area of the sphere
    double calculateSurfaceArea() const {
        return 4 * M_PI * radius * radius;
    }

    // Function to calculate the volume of the sphere
    double calculateVolume() const {
        return (4.0 / 3.0) * M_PI * pow(radius, 3);
    }

    // Function to display sphere details
    void displayDetails() const {
        cout << "Sphere Details:" << endl;
        cout << "Radius: " << radius << endl;
        cout << "Surface Area: " << calculateSurfaceArea() << endl;
        cout << "Volume: " << calculateVolume() << endl;
    }
};

int main() {
    // Create an object of the Sphere class
    Sphere sphere1(5.0);

    // Display the details of the sphere
    sphere1.displayDetails();

    return 0; // Exit the program successfully
}
