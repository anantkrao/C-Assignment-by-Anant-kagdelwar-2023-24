#include <iostream>

using namespace std;

// Forward declaration of the Father class
class Father;

// Mother class with a friend function
class Mother {
private:
    int salaryMother;

public:
    // Constructor to initialize salary of mother
    Mother(int salary) : salaryMother(salary) {}

    // Friend function declaration to access Father's salary
    friend void displaySalaries(const Mother& mother, const Father& father);
};

// Father class
class Father {
private:
    int salaryFather;

public:
    // Constructor to initialize salary of father
    Father(int salary) : salaryFather(salary) {}

    // Friend function declaration to access Mother's salary
    friend void displaySalaries(const Mother& mother, const Father& father);
};

// Friend function definition to display salaries of Mother and Father
void displaySalaries(const Mother& mother, const Father& father) {
    cout << "Mother's Salary: " << mother.salaryMother << endl;
    cout << "Father's Salary: " << father.salaryFather << endl;
}

int main() {
    // Create objects of Mother and Father classes
    Mother mother(50000);
    Father father(60000);

    // Call the friend function to display salaries
    displaySalaries(mother, father);

    return 0; // Exit the program successfully
}
