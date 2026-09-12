#include <iostream>

int main() {
    // Basic switch statement with multiple case labels
    int dayNumber = 3;

    switch (dayNumber) {
        case 1:
            std::cout << "Monday" << std::endl;
            break;
        case 2:
            std::cout << "Tuesday" << std::endl;
            break;
        case 3:
            std::cout << "Wednesday" << std::endl;
            break;
        case 4:
            std::cout << "Thursday" << std::endl;
            break;
        case 5:
            std::cout << "Friday" << std::endl;
            break;
        case 6:
            std::cout << "Saturday" << std::endl;
            break;
        case 7:
            std::cout << "Sunday" << std::endl;
            break;
        default:
            std::cout << "Invalid day number" << std::endl;
    }

    // Switch statement with multiple cases sharing the same code block
    char grade = 'B';

    switch (grade) {
        case 'A':
        case 'B':
            std::cout << "Excellent performance!" << std::endl;
            break;
        case 'C':
        case 'D':
            std::cout << "Good performance" << std::endl;
            break;
        case 'F':
            std::cout << "Need improvement" << std::endl;
            break;
        default:
            std::cout << "Invalid grade" << std::endl;
    }

    return 0;
}
