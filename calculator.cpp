#include "calculator.h"

int Calculator::add(int a, int b) {
    return a + b;
}

int Calculator::subtract(int a, int b) {
    return a - b;
}

int Calculator::calculate(int a, int b, char operation) {
    switch (operation) {
        case '+': return add(a, b);
        case '-': return subtract(a, b);
        default: return 0;
    }
}
