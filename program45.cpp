#include <iostream>
 #include <cmath>

using namespace std;

int main() {
    // Declare variables for coefficients
    double a, b, c;

    // Get coefficients from the user
    cout << "Enter the coefficients of the quadratic equation (a, b, c): ";
    cin >> a >> b >> c;

    // Calculate the discriminant
    double discriminant = b * b - 4 * a * c;

    // Check the nature of roots based on the discriminant
    if (discriminant > 0) {
        // Two real and distinct roots
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);

        cout << "Root 1 = " << root1 << endl;
        cout << "Root 2 = " << root2 << endl;
    } else if (discriminant == 0) {
        // One real and repeated root
        double root = -b / (2 * a);
        cout << "Root = " << root << endl;
    } else {
        // Complex roots
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);

        cout << "Root 1 = " << realPart << " + " << imaginaryPart << "i" << endl;
        cout << "Root 2 = " << realPart << " - " << imaginaryPart << "i" << endl;
    }

    return 0; // Exit the program successfully
}
