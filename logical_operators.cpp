#include <iostream>

int main() {
    int x = 10;
    int y = 5;
    int z = 15;

    // Logical AND (&&) operator
    std::cout << "Logical AND (&&) operator:" << std::endl;

    // Both conditions must be true
    if (x > y && x < z) {
        std::cout << "x is greater than y AND less than z" << std::endl;
    }

    if (x > 20 && y < 10) {
        std::cout << "This will not be printed" << std::endl;
    }

    // Logical OR (||) operator
    std::cout << "\nLogical OR (||) operator:" << std::endl;

    // At least one condition must be true
    if (x > 20 || y < 10) {
        std::cout << "At least one condition is true" << std::endl;
    }

    if (x > 20 || z < 20) {
        std::cout << "Another true condition" << std::endl;
    }

    // Combining AND and OR
    std::cout << "\nCombining AND and OR:" << std::endl;

    if ((x > y && y < z) || x == 10) {
        std::cout << "Complex condition is true" << std::endl;
    }

    return 0;
}
