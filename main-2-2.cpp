#include <iostream>

// Function declaration
int binary_to_int(int binary_digits[], int number_of_digits);

int main() {
    // Test cases
    int test1[] = {1, 0, 1};
    int test2[] = {1, 1, 1, 1, 1, 1, 1};
    int test3[] = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    std::cout << "Test 1: " << binary_to_int(test1, 3) << std::endl;
    std::cout << "Test 2: " << binary_to_int(test2, 7) << std::endl;
    std::cout << "Test 3: " << binary_to_int(test3, 30) << std::endl;

    return 0;
}
