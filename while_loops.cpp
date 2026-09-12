#include <iostream>

int main() {
    // Basic while loop counting
    std::cout << "Counting from 1 to 5:" << std::endl;
    int count = 1;
    while (count <= 5) {
        std::cout << count << " ";
        count++;
    }
    std::cout << std::endl;

    // While loop with user input validation
    int userNumber;
    std::cout << "Enter a number between 1 and 10: ";
    std::cin >> userNumber;

    while (userNumber < 1 || userNumber > 10) {
        std::cout << "Invalid input. Enter a number between 1 and 10: ";
        std::cin >> userNumber;
    }
    std::cout << "You entered a valid number: " << userNumber << std::endl;

    // While loop calculating factorial
    int number = 5;
    int factorial = 1;
    int i = 1;

    std::cout << "Calculating factorial of " << number << ":" << std::endl;
    while (i <= number) {
        factorial *= i;
        i++;
    }
    std::cout << number << "! = " << factorial << std::endl;

    return 0;
}
