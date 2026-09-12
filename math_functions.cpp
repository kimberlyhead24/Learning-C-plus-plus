#include "math_functions.h"

// Function implementations
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

double divide(double a, double b) {
    // Check for division by zero
    if (b == 0) {
        return 0;
    }
    return a / b;
}
