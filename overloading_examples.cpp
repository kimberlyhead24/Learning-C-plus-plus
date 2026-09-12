#include <iostream>
#include <string>

// Overloaded print functions
void print(int value) {
    std::cout << "Printing integer: " << value << std::endl;
}

void print(double value) {
    std::cout << "Printing double: " << value << std::endl;
}

void print(std::string value) {
    std::cout << "Printing string: " << value << std::endl;
}

// Overloaded calculate function
int calculate(int a, int b) {
    return a + b;
}

double calculate(double a, double b) {
    return a * b;
}

int main() {
    // Demonstrating function overloading
    print(42);
    print(3.14);
    print("Hello, Overloading!");

    std::cout << "Integer calculation: " << calculate(5, 3) << std::endl;
    std::cout << "Double calculation: " << calculate(5.5, 3.2) << std::endl;

    return 0;
}
