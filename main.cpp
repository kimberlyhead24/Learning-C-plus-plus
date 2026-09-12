#include <iostream>
#include "math_functions.h"

int main() {
    // Demonstrate function calls from header file
    int x = 10, y = 5;

    std::cout << "Addition: " << x << " + " << y << " = " << add(x, y) << std::endl;
    std::cout << "Subtraction: " << x << " - " << y << " = " << subtract(x, y) << std::endl;
    std::cout << "Multiplication: " << x << " * " << y << " = " << multiply(x, y) << std::endl;
    std::cout << "Division: " << x << " / " << y << " = " << divide(x, y) << std::endl;

    return 0;
}
