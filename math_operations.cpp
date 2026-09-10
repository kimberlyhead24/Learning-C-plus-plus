#include <iostream>

int main() {
    // Declare variables for mathematical operations
    int a = 10;
    int b = 3;

    // Addition (+)
    int sum = a + b;
    std::cout << "Addition: " << a << " + " << b << " = " << sum << std::endl;

    // Subtraction (-)
    int difference = a - b;
    std::cout << "Subtraction: " << a << " - " << b << " = " << difference << std::endl;

    // Multiplication (*)
    int product = a * b;
    std::cout << "Multiplication: " << a << " * " << b << " = " << product << std::endl;

    // Division (/)
    int quotient = a / b;
    std::cout << "Division: " << a << " / " << b << " = " << quotient << std::endl;

    // Modulus (%) - Remainder of division
    int remainder = a % b;
    std::cout << "Modulus: " << a << " % " << b << " = " << remainder << std::endl;

    return 0;
}
