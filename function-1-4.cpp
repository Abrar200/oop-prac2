#include <iostream>

void print_scaled(int array[3][3], int scale) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << array[i][j] * scale;
            
            // Add a space after each element, except for the last one in a row
            if (j < 2) {
                std::cout << " ";
            }
        }
        // Add a newline after each row
        std::cout << std::endl;
    }
}
