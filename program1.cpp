#include<iostream>


class Adder {
private:
    int num1;
    int num2;

public:
    
    void setNumbers(int a, int b) {
        num1 = a;
        num2 = b;
    }

    
    int add() {
        return num1 + num2;
    }
};

int main() {
    
    Adder myAdder;

    
    myAdder.setNumbers(5, 7);

    
    std::cout << "Sum: " << myAdder.add() << std::endl;

    return 0;
}
