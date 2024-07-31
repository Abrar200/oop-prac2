// main-2-3.cpp
#include <iostream>
#include "function-2-3.cpp" // Include the source file containing the functions

int main() {
    int array1[] = {1, 2, 3, 2, 1};
    int array2[] = {1, 2, 3, 4, 5};
    int array3[] = {}; // Empty array example

    int result1 = sum_if_palindrome(array1, 5);
    int result2 = sum_if_palindrome(array2, 5);
    int result3 = sum_if_palindrome(array3, 0);

    std::cout << "Result for array1: " << result1 << std::endl;
    std::cout << "Result for array2: " << result2 << std::endl;
    std::cout << "Result for array3: " << result3 << std::endl;

    return 0;
}
