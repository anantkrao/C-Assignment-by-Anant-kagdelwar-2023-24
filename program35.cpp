#include <iostream>

using namespace std;

// Class with a static data member
class MyClass {
public:
    static int count; // Static data member

    MyClass() {
        count++; // Increment count each time an object is created
    }

    // Function to get the count
    static int getCount() {
        return count;
    }
};

// Initialize the static data member outside the class definition
int MyClass::count = 0;

int main() {
    // Create objects of MyClass
    MyClass obj1;
    MyClass obj2;
    MyClass obj3;

    // Display the count using the static member function
    cout << "Number of objects created: " << MyClass::getCount() << endl;

    return 0; // Exit the program successfully
}
                        