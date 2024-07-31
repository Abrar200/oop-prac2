// main-1-3.cpp
#include <iostream>
#include "function-1-3.cpp" // Include the source file containing the count_digits function

int main() {
    int matrix[4][4] = {
        {1, 0, 0, 4},
        {5, 1, 0, 8},
        {9, 0, 1, 3},
        {1, 7, 0, 6}
    };

    count_digits(matrix);

    return 0;
}
