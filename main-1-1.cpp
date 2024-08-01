#include <iostream>

// Function declaration
int sum_diagonal(int array[4][4]);

int main() {
    // Example 4x4 matrix
    int matrix[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    // Calculate and print the sum of the main diagonal
    int result = sum_diagonal(matrix);
    std::cout << "Sum of the main diagonal: " << result << std::endl;

    return 0;
}
