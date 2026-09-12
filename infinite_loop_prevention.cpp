#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Example 1: Preventing infinite loop with a maximum iteration limit
    std::cout << "Example 1: Iteration Limit Prevention" << std::endl;
    int counter = 0;
    const int MAX_ITERATIONS = 5;

    while (true) {
        std::cout << "Iteration: " << counter + 1 << std::endl;
        counter++;

        if (counter >= MAX_ITERATIONS) {
            std::cout << "Maximum iterations reached. Breaking the loop." << std::endl;
            break;
        }
    }

    // Example 2: User-controlled loop with input validation
    std::cout << "\nExample 2: User-Controlled Loop" << std::endl;
    char continueChoice;
    int attempts = 0;
    const int MAX_ATTEMPTS = 3;

    do {
        std::cout << "Enter a number (1-10): ";
        int userNumber;
        std::cin >> userNumber;

        if (userNumber >= 1 && userNumber <= 10) {
            std::cout << "Valid number entered: " << userNumber << std::endl;
            break;
        }

        attempts++;
        std::cout << "Invalid input. Attempts left: " << MAX_ATTEMPTS - attempts << std::endl;

        if (attempts >= MAX_ATTEMPTS) {
            std::cout << "Maximum attempts reached. Exiting." << std::endl;
            break;
        }

        std::cout << "Do you want to try again? (y/n): ";
        std::cin >> continueChoice;
    } while (continueChoice == 'y' || continueChoice == 'Y');

    // Example 3: Random number game with controlled iterations
    std::cout << "\nExample 3: Random Number Game" << std::endl;
    srand(time(0));  // Seed for random number generation
    int targetNumber = rand() % 10 + 1;
    int guess;
    int gameAttempts = 0;
    const int MAX_GAME_ATTEMPTS = 4;

    std::cout << "Guess the number between 1 and 10" << std::endl;
    while (gameAttempts < MAX_GAME_ATTEMPTS) {
        std::cout << "Attempt " << gameAttempts + 1 << ": Enter your guess: ";
        std::cin >> guess;

        if (guess == targetNumber) {
            std::cout << "Congratulations! You guessed the number." << std::endl;
            break;
        }

        gameAttempts++;

        if (gameAttempts >= MAX_GAME_ATTEMPTS) {
            std::cout << "Sorry, you've run out of attempts. The number was "
                      << targetNumber << std::endl;
            break;
        }
    }

    return 0;
}
