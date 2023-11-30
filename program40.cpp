#include <iostream>

using namespace std;

class Complex {
private:
    float real;
    float imaginary;

public:
    // Constructor to initialize complex numbers
    Complex(float r = 0.0, float i = 0.0) : real(r), imaginary(i) {}

    // Function to add two complex numbers
    Complex add(const Complex &c) const {
        Complex result;
        result.real = real + c.real;
        result.imaginary = imaginary + c.imaginary;
        return result;
    }

    // Function to subtract two complex numbers
    Complex subtract(const Complex &c) const {
        Complex result;
        result.real = real - c.real;
        result.imaginary = imaginary - c.imaginary;
        return result;
    }

    // Function to display the complex number
    void display() const {
        cout << real << " + " << imaginary << "i";
    }
};

int main() {
    // Create two complex numbers
    Complex complex1(3.0, 4.0);
    Complex complex2(1.5, 2.5);

    // Add the complex numbers
    Complex sum = complex1.add(complex2);

    // Subtract the complex numbers
    Complex difference = complex1.subtract(complex2);

    // Display the results
    cout << "Complex Number 1: ";
    complex1.display();
    cout << endl;

    cout << "Complex Number 2: ";
    complex2.display();
    cout << endl;

    cout << "\nSum of Complex Numbers: ";
    sum.display();
    cout << endl;

    cout << "Difference of Complex Numbers: ";
    difference.display();
    cout << endl;

    return 0; // Exit the program successfully
}
