#include <iostream>
#include <bitset>

int main() {
    // Binary representation of numbers
    unsigned int a = 5;   // 0101 in binary
    unsigned int b = 3;   // 0011 in binary

    // Bitwise AND (&)
    std::cout << "Bitwise AND (&):" << std::endl;
    std::cout << "a = " << std::bitset<4>(a) << " (5 in decimal)" << std::endl;
    std::cout << "b = " << std::bitset<4>(b) << " (3 in decimal)" << std::endl;
    unsigned int and_result = a & b;
    std::cout << "a & b = " << std::bitset<4>(and_result)
              << " (" << and_result << " in decimal)" << std::endl;

    // Bitwise OR (|)
    std::cout << "\nBitwise OR (|):" << std::endl;
    unsigned int or_result = a | b;
    std::cout << "a | b = " << std::bitset<4>(or_result)
              << " (" << or_result << " in decimal)" << std::endl;

    // Bitwise XOR (^)
    std::cout << "\nBitwise XOR (^):" << std::endl;
    unsigned int xor_result = a ^ b;
    std::cout << "a ^ b = " << std::bitset<4>(xor_result)
              << " (" << xor_result << " in decimal)" << std::endl;

    // Bitwise NOT (~)
    std::cout << "\nBitwise NOT (~):" << std::endl;
    unsigned int not_result = ~a;
    std::cout << "~a = " << std::bitset<32>(not_result)
              << " (" << not_result << " in decimal)" << std::endl;

    // Left shift (<<)
    std::cout << "\nLeft Shift (<<):" << std::endl;
    unsigned int left_shift = a << 2;
    std::cout << "a << 2 = " << std::bitset<8>(left_shift)
              << " (" << left_shift << " in decimal)" << std::endl;

    // Right shift (>>)
    std::cout << "\nRight Shift (>>):" << std::endl;
    unsigned int right_shift = a >> 1;
    std::cout << "a >> 1 = " << std::bitset<4>(right_shift)
              << " (" << right_shift << " in decimal)" << std::endl;

    return 0;
}
