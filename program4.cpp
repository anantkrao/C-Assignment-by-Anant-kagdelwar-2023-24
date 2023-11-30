#include<iostream>

int main() {
    
    int* dynamicVariable;
    
    std::cout << "Enter the value for the variable: ";
    
    dynamicVariable = new int;
    
    std::cin >> *dynamicVariable;
    
    std::cout << "Dynamically initialized variable: " << *dynamicVariable << std::endl;
    
    delete dynamicVariable;
    
    return 0;
}
