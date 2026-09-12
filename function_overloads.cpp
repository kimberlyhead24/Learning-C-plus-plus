#include <iostream>
#include <string>

// Function overloads for adding different types of numbers
int add(int a, int b) {
    std::cout << "Adding two integers" << std::endl;
    return a + b;
}

double add(double a, double b) {
    std::cout << "Adding two doubles" << std::endl;
    return a + b;
}

// Function overloads with different number of parameters
int add(int a, int b, int c) {
    std::cout << "Adding three integers" << std::endl;
    return a + b + c;
}

// Function overload with different parameter types
std::string add(std::string a, std::string b) {
    std::cout << "Concatenating strings" << std::endl;
    return a + b;
}

int main() {
    // Calling different overloaded functions
    std::cout << "Integer addition: " << add(5, 3) << std::endl;
    std::cout << "Double addition: " << add(5.5, 3.7) << std::endl;
    std::cout << "Three integer addition: " << add(1, 2, 3) << std::endl;
    std::cout << "String concatenation: " << add("Hello, ", "World!") << std::endl;

    return 0;
}
