#include <iostream>

int main() {
    // Single if statement
    int number = 10;
    if (number > 5) {
        std::cout << "Number is greater than 5" << std::endl;
    }

    // if-else statement
    int age = 20;
    if (age >= 18) {
        std::cout << "You are an adult" << std::endl;
    } else {
        std::cout << "You are a minor" << std::endl;
    }

    // Multi-brancg if-else statement
    int score = 75;
    if (score >= 90) {
        std::cout << "Grade A" << std::endl;
    } else if (score >= 80) {
        std::cout << "Grade B" << std::endl;
    } else if (score >= 70) {
        std::cout << "Grade C" << std::endl;
    } else if (score >= 60) {
        std::cout << "Grade D" << std::endl;
    } else {
        std::cout << "Grade F" << std::endl;
    }
    return 0;
}
