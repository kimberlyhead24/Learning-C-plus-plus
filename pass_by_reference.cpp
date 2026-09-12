#include <iostream>

// Function that demonstrates pass by reference
void swapValues(int& a, int& b) {
    // Directly modify the original variables
    int temp = a;
    a = b;
    b = temp;
}

// Function to modify a value using reference
void incrementValue(int& x) {
    // Directly increases the original variable
    x++;
}

int main() {
    // Swap example
    int first = 5;
    int second = 10;

    std::cout << "Before swap - first: " << first << ", second: " << second << std::endl;

    // Call swap function with references
    swapValues(first, second);

    std::cout << "After swap - first: " << first << ", second: " << second << std::endl;

    // Increment example
    int number = 7;

    std::cout << "Before increment: " << number << std::endl;

    // Call increment function with reference
    incrementValue(number);

    std::cout << "After increment: " << number << std::endl;

    return 0;
}
