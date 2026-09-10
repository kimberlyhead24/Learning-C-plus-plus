#include <iostream>

int main() {
    // Initialize variables
    int x = 10;
    int y = 5;

    // Addition assignment (+=)
    std::cout << "Addition Assignment (+=):" << std::endl;
    std::cout << "Initial x: " << x << std::endl;
    x += 3;  // Equivalent to x = x + 3
    std::cout << "x += 3: " << x << std::endl;

    // Subtraction assignment (-=)
    std::cout << "\nSubtraction Assignment (-=):" << std::endl;
    std::cout << "Initial y: " << y << std::endl;
    y -= 2;  // Equivalent to y = y - 2
    std::cout << "y -= 2: " << y << std::endl;

    // Multiplication assignment (*=)
    std::cout << "\nMultiplication Assignment (*=):" << std::endl;
    int z = 4;
    std::cout << "Initial z: " << z << std::endl;
    z *= 3;  // Equivalent to z = z * 3
    std::cout << "z *= 3: " << z << std::endl;

    // Division assignment (/=)
    std::cout << "\nDivision Assignment (/=):" << std::endl;
    int a = 15;
    std::cout << "Initial a: " << a << std::endl;
    a /= 3;  // Equivalent to a = a / 3
    std::cout << "a /= 3: " << a << std::endl;

    // Modulus assignment (%=)
    std::cout << "\nModulus Assignment (%=):" << std::endl;
    int b = 17;
    std::cout << "Initial b: " << b << std::endl;
    b %= 5;  // Equivalent to b = b % 5
    std::cout << "b %= 5: " << b << std::endl;

    return 0;
}
