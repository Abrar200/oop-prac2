#include <iostream>

// Function declaration
void count_digits(int array[4][4]);

int main() {
    // Example 4x4 matrix (identity matrix)
    int identity_matrix[4][4] = {
        {1, 0, 0, 0},
        {0, 1, 0, 0},
        {0, 0, 1, 0},
        {0, 0, 0, 1}
    };

    // Test the function with the identity matrix
    std::cout << "Digit counts for identity matrix:" << std::endl;
    count_digits(identity_matrix);

    // Another example 4x4 matrix with various digits
    int mixed_matrix[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 0, 1, 2},
        {3, 4, 5, 6}
    };

    // Test the function with the mixed matrix
    std::cout << "Digit counts for mixed matrix:" << std::endl;
    count_digits(mixed_matrix);

    return 0;
}
