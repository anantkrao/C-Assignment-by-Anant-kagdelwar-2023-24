#include<iostream>

int addNumbers(int num1, int num2) {
    int sum;

    sum = num1 + num2;

    return sum;

}

int main() {
    int num1, num2, result;

    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    result = addNumbers(num1, num2);

    std::cout << "Sum: " << result << std::endl;

    return 0;
}
