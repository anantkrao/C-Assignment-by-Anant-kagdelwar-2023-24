#include <iostream>

using namespace std;

int main() {
    // Integer variable
    int intValue = 42;

    // Float variable
    float floatValue = 3.14;

    // Pointer to void
    void* ptr;

    // Store the address of the integer variable in the pointer to void
    ptr = &intValue;

    // Print the value of the integer variable using the pointer to void
    cout << "Value of integer variable: " << *(static_cast<int*>(ptr)) << endl;

    // Store the address of the float variable in the pointer to void
    ptr = &floatValue;

    // Print the value of the float variable using the pointer to void
    cout << "Value of float variable: " << *(static_cast<float*>(ptr)) << endl;

    return 0; // Exit the program successfully
}
