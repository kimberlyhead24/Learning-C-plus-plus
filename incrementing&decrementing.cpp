#include <iostream>

int main() {
    // Pre-increment (++i)
    int a = 5;
    std::cout << "Original value of a: " << a << std::endl;

    // Pre-increment: increment happens before the value is used
    std::cout << "Pre-increment (++a): " << ++a << std::endl;
    std::cout << "Value after pre-increment: " << a << std::endl;

    // Post-increment (i++)
    int b = 5;
    std::cout << "\nOriginal value of b: " << b << std::endl;

    // Post-increment: increment happens after the value is used
    std::cout << "Post-increment (b++): " << b++ << std::endl;
    std::cout << "Value after post-increment: " << b << std::endl;

    // Decrement operators work similarly
    int c = 5;
    std::cout << "\nPre-decrement (--c): " << --c << std::endl;

    int d = 5;
    std::cout << "Post-decrement (d--): " << d-- << std::endl;
    std::cout << "Value after post-decrement: " << d << std::endl;

    return 0;
}
