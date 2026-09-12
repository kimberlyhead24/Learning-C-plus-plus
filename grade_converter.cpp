#include <iostream>

char getLetterGrade(int score) {
    if (score < 0 || score > 100) {
        return '\0';  // Sentinel: invalid score
    }

    if (score >= 90) return 'A';
    if (score >= 80) return 'B';
    if (score >= 70) return 'C';
    if (score >= 60) return 'D';

    return 'F';
}

int main() {
    int score;

    std::cout << "Enter a score from 0 to 100: ";

    if (!(std::cin >> score)) {
        std::cout << "Invalid input: enter a whole number.\n";
        return 1;
    }

    char grade = getLetterGrade(score);

    if (grade == '\0') {
        std::cout << "Invalid score: must be between 0 and 100.\n";
        return 1;
    }

    std::cout << "Grade: " << grade << '\n';
    return 0;
}
