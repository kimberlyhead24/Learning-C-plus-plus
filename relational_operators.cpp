#include <iostream>

int main() {
    int a = 10;
    int b = 5;
    int c = 10;

    // Less than (<)
    std::cout << "Less than (<):" << std::endl;
    std::cout << a << " < " << b << " is " << (a < b) << std::endl;
    std::cout << b << " < " << a << " is " << (b < a) << std::endl;

    // Greater than (>)
    std::cout << "\nGreater than (>):" << std::endl;
    std::cout << a << " > " << b << " is " << (a > b) << std::endl;
    std::cout << b << " > " << a << " is " << (b > a) << std::endl;

    // Equal to (==)
    std::cout << "\nEqual to (==):" << std::endl;
    std::cout << a << " == " << b << " is " << (a == b) << std::endl;
    std::cout << a << " == " << c << " is " << (a == c) << std::endl;

    // Not equal to (!=)
    std::cout << "\nNot equal to (!=):" << std::endl;
    std::cout << a << " != " << b << " is " << (a != b) << std::endl;
    std::cout << a << " != " << c << " is " << (a != c) << std::endl;

    return 0;
}
