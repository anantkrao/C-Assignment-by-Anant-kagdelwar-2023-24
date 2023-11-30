#include <iostream>

using namespace std;

class Swapper {
public:
    // Static function to swap two integers using pointers
    static void swap(int* a, int* b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }

    // Static function to swap two floats using pointers
    static void swap(float* x, float* y) {
        float temp = *x;
        *x = *y;
        *y = temp;
    }
};

int main() {
    // Swap two integers using pointers
    int int1 = 5, int2 = 10;
    cout << "Before swapping integers: " << int1 << " " << int2 << endl;
    Swapper::swap(&int1, &int2);
    cout << "After swapping integers: " << int1 << " " << int2 << endl;

    // Swap two floats using pointers
    float float1 = 3.14, float2 = 2.718;
    cout << "\nBefore swapping floats: " << float1 << " " << float2 << endl;
    Swapper::swap(&float1, &float2);
    cout << "After swapping floats: " << float1 << " " << float2 << endl;

    return 0; // Exit the program successfully
}
