#include <iostream>
#include <string>

using namespace std;

// Base class with a destructor
class Base {
public:
    Base() {
        cout << "Base class constructor called." << endl;
    }

    virtual ~Base() {
        cout << "Base class destructor called." << endl;
    }
};

// Derived class inheriting from Base
class Derived : public Base {
public:
    Derived() {
        cout << "Derived class constructor called." << endl;
    }

    ~Derived() override {
        cout << "Derived class destructor called." << endl;
    }
};

int main() {
    {
        // Create an object of the Derived class
        Derived derivedObj;
    }

    return 0; // Exit the program successfully
}
