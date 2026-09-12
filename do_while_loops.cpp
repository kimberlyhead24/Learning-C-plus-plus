#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Basic do-while loop for user input validation
    int userNumber;
    do {
        std::cout << "Enter a number between 1 and 10: ";
        std::cin >> userNumber;
    } while (userNumber < 1 || userNumber > 10);
    std::cout << "You entered a valid number: " << userNumber << std::endl;

    // Simulating a dice rolling game
    srand(time(0));  // Seed for random number generation
    int attempts = 0;
    int targetNumber = 6;
    int diceRoll;

    std::cout << "Dice Rolling Game:" << std::endl;
    do {
        diceRoll = rand() % 6 + 1;  // Generate random number between 1 and 6
        attempts++;
        std::cout << "Roll " << attempts << ": You rolled " << diceRoll << std::endl;
    } while (diceRoll != targetNumber);

    std::cout << "Congratulations! You rolled the target number "
              << targetNumber << " in " << attempts << " attempts." << std::endl;

    return 0;
}
