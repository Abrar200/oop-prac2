#include <iostream>

// Function declaration
int is_identity(int array[10][10]);

int main() {
    // Example 10x10 matrix (identity matrix)
    int identity_matrix[10][10] = {0};  // Initialize all elements to 0
    for (int i = 0; i < 10; i++) {
        identity_matrix[i][i] = 1;  // Set diagonal elements to 1
    }

    // Example 10x10 matrix (non-identity matrix)
    int non_identity_matrix[10][10] = {0};  // Initialize all elements to 0
    for (int i = 0; i < 10; i++) {
        non_identity_matrix[i][i] = 1;  // Set diagonal elements to 1
    }
    non_identity_matrix[5][5] = 2;  // Change one diagonal element

    // Test the function with both matrices
    std::cout << "Is the first matrix an identity matrix? " 
              << (is_identity(identity_matrix) ? "Yes" : "No") << std::endl;
    
    std::cout << "Is the second matrix an identity matrix? " 
              << (is_identity(non_identity_matrix) ? "Yes" : "No") << std::endl;

    return 0;
}
