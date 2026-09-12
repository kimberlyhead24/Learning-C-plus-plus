#include <iostream>
#include <string>

// Function to modify a string using reference
void appendText(std::string& text) {
    text += " - Modified";
}

int main() {
    std::string message = "Hello, World!";

    std::cout << "Original message: " << message << std::endl;

    // Modify string directly using reference
    appendText(message);

    std::cout << "Modified message: " << message << std::endl;

    return 0;
}
