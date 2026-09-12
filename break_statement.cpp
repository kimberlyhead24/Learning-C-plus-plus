#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Breaking out of a for loop when a condition is met
    std::cout << "Finding the first even number:" << std::endl;
    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            std::cout << "First even number found: " << i << std::endl;
            break;
        }
    }

    // Simulating a number guessing game
    srand(time(0));  // Seed for random number generation
    int targetNumber = rand() % 10 + 1;  // Random number between 1 and 10
    int guess;
    int attempts = 0;

    std::cout << "\nNumber Guessing Game:" << std::endl;
    while (true) {
        std::cout << "Enter your guess (1-10): ";
        std::cin >> guess;
        attempts++;

        if (guess == targetNumber) {
            std::cout << "Congratulations! You guessed the number in "
                      << attempts << " attempts." << std::endl;
            break;
        } else if (guess < targetNumber) {
            std::cout << "Too low. Try again." << std::endl;
        } else {
            std::cout << "Too high. Try again." << std::endl;
        }
    }

    return 0;
}
