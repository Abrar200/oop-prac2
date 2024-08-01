#include <iostream>

// Function declaration
void print_scaled(int array[3][3], int scale);

int main() {
    int scale = 3;
    int threebythree[3][3] = {{0,1,2},{3,4,5},{6,7,8}};

    std::cout << "Original matrix:" << std::endl;
    print_scaled(threebythree, 1);  // Print original matrix (scale = 1)

    std::cout << "\nScaled matrix (scale = " << scale << "):" << std::endl;
    print_scaled(threebythree, scale);

    return 0;
}
