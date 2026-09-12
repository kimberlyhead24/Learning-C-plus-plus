#include <iostream>

int main() {
    // Skipping even numbers in a loop
    std::cout << "Printing odd numbers between 1 and 10:" << std::endl;
    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            continue;  // Skip even numbers
        }
        std::cout << i << " ";
    }
    std::cout << std::endl;

    // Filtering out negative numbers in a sum calculation
    int sum = 0;
    int numbers[] = {5, -3, 10, -7, 8, -2, 15};
    int arraySize = sizeof(numbers) / sizeof(numbers[0]);

    std::cout << "\nCalculating sum of positive numbers:" << std::endl;
    for (int j = 0; j < arraySize; j++) {
        if (numbers[j] < 0) {
            continue;  // Skip negative numbers
        }
        sum += numbers[j];
        std::cout << "Added: " << numbers[j] << ", Current Sum: " << sum << std::endl;
    }
    std::cout << "Final Sum of Positive Numbers: " << sum << std::endl;

    return 0;
}
