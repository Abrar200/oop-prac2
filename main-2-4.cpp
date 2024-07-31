// main-2-4.cpp
#include <iostream>
#include "function-2-4.cpp" // Include the source file containing the functions

int main() {
    int array1[] = {5, 3, 7, 1, 9, 2};
    int array2[] = {-1, -3, -7, -10, -5};
    int array3[] = {}; // Empty array example

    int result1 = sum_min_max(array1, 6);
    int result2 = sum_min_max(array2, 5);
    int result3 = sum_min_max(array3, 0);

    std::cout << "Result for array1: " << result1 << std::endl;
    std::cout << "Result for array2: " << result2 << std::endl;
    std::cout << "Result for array3: " << result3 << std::endl;

    return 0;
}
