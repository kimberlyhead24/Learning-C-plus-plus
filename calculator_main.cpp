#include <iostream>
#include "calculator.h"

int main() {
    Calculator calc;

    std::cout << "Calculator Operations:" << std::endl;
    std::cout << "10 + 5 = " << calc.calculate(10, 5, '+') << std::endl;
    std::cout << "10 - 5 = " << calc.calculate(10, 5, '-') << std::endl;

    return 0;
}
