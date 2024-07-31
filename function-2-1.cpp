// function-2-1.cpp
#include <iostream>
#include <string>
#include <algorithm> // For std::reverse

void print_binary_str(std::string decimal_number) {
    int number = std::stoi(decimal_number);
    if (number == 0) {
        std::cout << "0\n";
        return;
    }

    std::string binary_str;
    while (number > 0) {
        binary_str += (number % 2 == 0) ? '0' : '1';
        number /= 2;
    }
    
    std::reverse(binary_str.begin(), binary_str.end());
    std::cout << binary_str << "\n";
}
