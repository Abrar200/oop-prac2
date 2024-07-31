// main-1-1.cpp
#include <iostream>
#include "function-1-1.cpp" // Include the header or source file containing the sum_diagonal function

int main() {
    int matrix[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    int result = sum_diagonal(matrix);
    std::cout << "The sum of the main diagonal elements is: " << result << std::endl;

    return 0;
}
