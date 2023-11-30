#include<iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    // Input three numbers
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    // Find the greatest number using conditional statements
    if (num1 >= num2 && num1 >= num3)
        cout << num1 << " is the greatest number." << endl;
    else if (num2 >= num1 && num2 >= num3)
        cout << num2 << " is the greatest number." << endl;
    else
        cout << num3 << " is the greatest number." << endl;

    return 0;
}
