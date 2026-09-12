#include <iostream>
#include <string>

// Define a structure to hold student information
struct StudentResult {
    std::string name;
    int score;
    bool passed;
};

// Function that returns multiple values using a structure
StudentResult evaluateStudent(std::string name, int testScore) {
    StudentResult result;
    result.name = name;
    result.score = testScore;
    result.passed = (testScore >= 60);

    return result;
}

// Function to calculate multiple statistical values
struct MathStats {
    int sum;
    double average;
    int minimum;
    int maximum;
};

MathStats calculateArrayStats(int numbers[], int size) {
    MathStats stats;
    stats.sum = 0;
    stats.minimum = numbers[0];
    stats.maximum = numbers[0];

    for (int i = 0; i < size; i++) {
        stats.sum += numbers[i];

        if (numbers[i] < stats.minimum) {
            stats.minimum = numbers[i];
        }

        if (numbers[i] > stats.maximum) {
            stats.maximum = numbers[i];
        }
    }

    stats.average = static_cast<double>(stats.sum) / size;

    return stats;
}

int main() {
    // Demonstrate student evaluation
    StudentResult student1 = evaluateStudent("Alice", 75);
    StudentResult student2 = evaluateStudent("Bob", 45);

    std::cout << "Student Results:" << std::endl;
    std::cout << student1.name << " - Score: " << student1.score
              << ", Passed: " << (student1.passed ? "Yes" : "No") << std::endl;
    std::cout << student2.name << " - Score: " << student2.score
              << ", Passed: " << (student2.passed ? "Yes" : "No") << std::endl;

    // Demonstrate array statistics
    int numbers[] = {5, 2, 9, 1, 7};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    MathStats stats = calculateArrayStats(numbers, size);

    std::cout << "\nArray Statistics:" << std::endl;
    std::cout << "Sum: " << stats.sum << std::endl;
    std::cout << "Average: " << stats.average << std::endl;
    std::cout << "Minimum: " << stats.minimum << std::endl;
    std::cout << "Maximum: " << stats.maximum << std::endl;

    return 0;
}
