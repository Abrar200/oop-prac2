#include <iostream>

void count_digits(int array[4][4]) {
    int count[10] = {0};  // Array to store counts of digits 0-9

    // Count occurrences of each digit
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            int num = array[i][j];
            if (num >= 0 && num <= 9) {
                count[num]++;
            }
        }
    }

    // Print results in the specified format
    for (int i = 0; i < 10; i++) {
        std::cout << i << ":" << count[i];
        if (i < 9) {
            std::cout << ";";
        }
    }
    std::cout << ";" << std::endl;
}
