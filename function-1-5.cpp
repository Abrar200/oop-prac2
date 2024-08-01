#include <iostream>

void print_summed(int array1[3][3], int array2[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int sum = array1[i][j] + array2[i][j];
            std::cout << sum;
            
            // Add a space after each element, except for the last one in a row
            if (j < 2) {
                std::cout << " ";
            }
        }
        // Add a newline after each row
        std::cout << std::endl;
    }
}
