#include <iostream>

using namespace std;

// Base class with a virtual function
class Shape {
public:
    // Virtual function to calculate the area
    virtual double calculateArea() const {
        return 0.0;
    }

    // Virtual function to display the type of shape
    virtual void displayType() const {
        cout << "This is a generic shape." << endl;
    }
};

// Derived class 1: Circle
class Circle : public Shape {
private:
    double radius;

public:
    // Constructor
    Circle(double r) : radius(r) {}

    // Override the virtual function to calculate the area for a circle
    double calculateArea() const override {
        return 3.14159 * radius * radius;
    }

    // Override the virtual function to display the type of shape
    void displayType() const override {
        cout << "This is a circle." << endl;
    }
};

// Derived class 2: Rectangle
class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    // Constructor
    Rectangle(double l, double w) : length(l), width(w) {}

    // Override the virtual function to calculate the area for a rectangle
    double calculateArea() const override {
        return length * width;
    }

    // Override the virtual function to display the type of shape
    void displayType() const override {
        cout << "This is a rectangle." << endl;
    }
};

int main() {
    // Create objects of Shape, Circle, and Rectangle
    Shape* shape = new Shape();
    Shape* circle = new Circle(5.0);
    Shape* rectangle = new Rectangle(4.0, 6.0);

    // Call virtual functions and display the type of shapes
    cout << "Area of the shape: " << shape->calculateArea() << endl;
    shape->displayType();

    cout << "\nArea of the circle: " << circle->calculateArea() << endl;
    circle->displayType();

    cout << "\nArea of the rectangle: " << rectangle->calculateArea() << endl;
    rectangle->displayType();

    // Remember to delete dynamically allocated objects
    delete shape;
    delete circle;
    delete rectangle;

    return 0; // Exit the program successfully
}
