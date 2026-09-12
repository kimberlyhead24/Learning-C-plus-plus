#include <iostream>

// Recursive function with step-by-step output
unsigned long long calculateFactorialWithSteps(int n, int depth = 0) {
    // Add indentation for visualization
    std::string indent(depth * 2, ' ');

    // Base case: factorial of 0 or 1 is 1
    if (n == 0 || n == 1) {
        std::cout << indent << "Base case: factorial(" << n << ") = 1" << std::endl;
        return 1;
    }

    // Recursive case with visualization
    std::cout << indent << "Calculating factorial(" << n << ")" << std::endl;

    // Recursive call
    unsigned long long subResult = calculateFactorialWithSteps(n - 1, depth + 1);

    // Combine results
    unsigned long long result = n * subResult;

    std::cout << indent << "factorial(" << n << ") = "
              << n << " * factorial(" << n-1 << ") = "
              << result << std::endl;

    return result;
}

int main() {
    int number = 5;

    std::cout << "Factorial calculation steps for " << number << ":" << std::endl;
    unsigned long long result = calculateFactorialWithSteps(number);

    std::cout << "\nFinal result: " << number << "! = " << result << std::endl;

    return 0;
}
