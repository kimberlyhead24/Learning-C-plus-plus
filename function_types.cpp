#include <iostream>
#include <string>

// Function returning an integer
int addNumbers(int a, int b) {
    return a + b;
}

// Function returning a double (floating-point number)
double calculateAverage(double x, double y) {
    return (x + y) / 2.0;
}

// Function returning a character
char getGrade(int score) {
    if (score >= 90) return 'A';
    if (score >= 80) return 'B';
    if (score >= 70) return 'C';
    if (score >= 60) return 'D';
    return 'F';
}

// Function returning a string
std::string getStudentStatus(bool isEnrolled) {
    return isEnrolled ? "Active" : "Inactive";
}

int main() {
    // Demonstrating different return types
    int sum = addNumbers(5, 3);
    std::cout << "Sum: " << sum << std::endl;

    double average = calculateAverage(10.5, 20.5);
    std::cout << "Average: " << average << std::endl;

    char grade = getGrade(85);
    std::cout << "Grade: " << grade << std::endl;

    std::string status = getStudentStatus(true);
    std::cout << "Student Status: " << status << std::endl;

    return 0;
}
