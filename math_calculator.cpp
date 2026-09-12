#include <iostream>

void add(double a, double b) {
    std::cout << "Double Addition (2 params): " << a + b << std::endl;
}

void add(int a, int b, int c = 5) {
    std::cout << "Integer Addition (3 params): " << a + b + c << std::endl; 
}
int main() {
    add(3.5, 4.0);       // Should use double version
    add(5, 5, 5);        // Should use three parameter version
    add(5, 5);           // Should use three parameter version with default

    return 0;
}
