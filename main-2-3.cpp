#include <iostream>

// Function declarations
bool is_palindrome(int integers[], int length);
int sum_array_elements(int integers[], int length);
int sum_if_palindrome(int integers[], int length);

int main() {
    // Test cases
    int test1[] = {1, 2, 3, 2, 1};
    int test2[] = {1, 2, 3, 4, 5};
    int test3[] = {1};
    int test4[] = {};

    std::cout << "Test 1: " << sum_if_palindrome(test1, 5) << std::endl;
    std::cout << "Test 2: " << sum_if_palindrome(test2, 5) << std::endl;
    std::cout << "Test 3: " << sum_if_palindrome(test3, 1) << std::endl;
    std::cout << "Test 4: " << sum_if_palindrome(test4, 0) << std::endl;

    return 0;
}
