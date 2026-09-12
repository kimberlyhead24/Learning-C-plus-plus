#include <iostream>
#include <iomanip>

int main() {
    // Define a 3x3 matrix
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Print the original matrix
    std::cout << "Original Matrix:" << std::endl;
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            std::cout << std::setw(4) << matrix[row][col];
        }
        std::cout << std::endl;
    }

    // Calculate row sums
    std::cout << "\nRow Sums:" << std::endl;
    for (int row = 0; row < 3; row++) {
        int rowSum = 0;
        for (int col = 0; col < 3; col++) {
            rowSum += matrix[row][col];
        }
        std::cout << "Row " << row + 1 << " Sum: " << rowSum << std::endl;
    }

    // Create and print a multiplication table
    std::cout << "\nMultiplication Table:" << std::endl;
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            std::cout << std::setw(4) << (i * j);
        }
        std::cout << std::endl;
    }

    return 0;
}
