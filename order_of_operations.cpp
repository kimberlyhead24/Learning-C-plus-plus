#include <iostream>

int main() {
    // Basic order of operations demonstration
    int a = 10;
    int b = 5;
    int c = 3;

    // Multiplication before addition
    std::cout << "Multiplication before Addition:" << std::endl;
    int result1 = a + b * c;
    std::cout << "a + b * c = " << result1 << std::endl;

    // Parentheses change the order of operations
    std::cout << "\nParentheses change order:" << std::endl;
    int result2 = (a + b) * c;
    std::cout << "(a + b) * c = " << result2 << std::endl;

    // Complex expression with multiple operators
    std::cout << "\nComplex Expression:" << std::endl;
    int x = 4;
    int y = 2;
    int z = 3;

    int complex_result = x + y * z - (x / y);
    std::cout << "x + y * z - (x / y) = " << complex_result << std::endl;

    // Demonstrating precedence with increment and multiplication
    std::cout << "\nIncrement and Multiplication:" << std::endl;
    int m = 3;
    int n = 2;
    int precedence_result = m++ * n;
    std::cout << "m++ * n = " << precedence_result << std::endl;
    std::cout << "m after operation = " << m << std::endl;

    return 0;
}
