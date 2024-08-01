#include <iostream>

// Function declarations
int array_min(int integers[], int length);
int array_max(int integers[], int length);
int sum_min_max(int integers[], int length);

int main() {
    // Test cases
    int test1[] = {1, 2, 3, 4, 5};
    int test2[] = {-5, 0, 5, 10, 15};
    int test3[] = {7};
    int test4[] = {};

    std::cout << "Test 1: " << sum_min_max(test1, 5) << std::endl;
    std::cout << "Test 2: " << sum_min_max(test2, 5) << std::endl;
    std::cout << "Test 3: " << sum_min_max(test3, 1) << std::endl;
    std::cout << "Test 4: " << sum_min_max(test4, 0) << std::endl;

    return 0;
}
