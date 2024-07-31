// function-1-3.cpp
#include <iostream>

void count_digits(int array[4][4]) {
    int count[10] = {0}; // Initialize count array for digits 0-9

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            int num = array[i][j];
            if (num >= 0 && num <= 9) {
                count[num]++;
            }
        }
    }

    // Print the results in the specified format
    for (int i = 0; i < 10; ++i) {
        std::cout << i << ":" << count[i] << ";";
    }
    std::cout << std::endl; // End with a newline for good formatting
}
