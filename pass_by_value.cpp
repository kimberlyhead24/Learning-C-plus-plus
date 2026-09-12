#include <iostream>

// Function that demonstrates pass by value
void modifyValue(int x) {
    // This modification only affects the local copy, not the original variable
    x = x * 2;
    std::cout << "Inside function - Value of x: " << x << std::endl;
}

int main() {
    // Original variable
    int number = 10;

    // Print original value
    std::cout << "Before function call - Original value: " << number << std::endl;

    // Call the function with the original variable
    modifyValue(number);

    // Original variable remains unchanged
    std::cout << "After function call - Original value: " << number << std::endl;

    return 0;
}
