#include <iostream>

// Function declaration
void print_summed(int array1[3][3], int array2[3][3]);

int main() {
    int matrix1[3][3] = {{0,1,2},{3,4,5},{6,7,8}};
    int matrix2[3][3] = {{0,0,0},{2,2,2},{-5,-4,8}};

    std::cout << "Matrix 1:" << std::endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << matrix1[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "\nMatrix 2:" << std::endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << matrix2[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "\nSum of matrices:" << std::endl;
    print_summed(matrix1, matrix2);

    return 0;
}
