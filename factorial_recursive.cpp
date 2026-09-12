#include <iostream>

// Recursive function to calculate factorial
unsigned long long calculateFactorial(int n) {
    // Base case: factorial of 0 or 1 is 1
    if (n == 0 || n == 1) {
        return 1;
    }

    // Recursive case: n! = n * (n-1)!
    return n * calculateFactorial(n - 1);
}

int main() {
    // Calculate factorial for different numbers
    int numbers[] = {0, 1, 5, 7, 10};

    for (int num : numbers) {
        unsigned long long result = calculateFactorial(num);
        std::cout << "Factorial of " << num << " is: " << result << std::endl;
    }

    return 0;
}
