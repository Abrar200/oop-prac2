// function-1-4.cpp
#include <iostream>

void print_scaled(int array[3][3], int scale) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout << array[i][j] * scale;
            if (j < 3 - 1) {
                std::cout << " "; // Print space between elements in a row
            }
        }
        std::cout << std::endl; // Print newline after each row
    }
}
