#include <iostream>
#include <string>

int main() {
    // Basic ternary operator syntax
    // condition ? value_if_true : value_if_false

    // Simple comparison
    int x = 10;
    int y = 5;

    // Determine the larger number
    int max_value = (x > y) ? x : y;
    std::cout << "Larger value: " << max_value << std::endl;

    // Check if a number is even or odd
    int number = 7;
    std::string result = (number % 2 == 0) ? "Even" : "Odd";
    std::cout << number << " is " << result << std::endl;

    // Nested ternary operator
    int a = 15;
    std::string category = (a < 10) ? "Small"
                         : (a < 20) ? "Medium"
                         : "Large";
    std::cout << "Category: " << category << std::endl;

    // Ternary operator with function calls
    int abs_value = (x < 0) ? -x : x;
    std::cout << "Absolute value of x: " << abs_value << std::endl;

    // Ternary operator in output
    std::cout << "Is x greater than y? "
              << ((x > y) ? "Yes" : "No") << std::endl;

    return 0;
}
