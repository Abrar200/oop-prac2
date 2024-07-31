// function-2-3.cpp
#include <iostream>

// Function to check if an array is a palindrome
bool is_palindrome(int integers[], int length) {
    if (length <= 0) return false;  // Return false if the length is 0 or negative

    for (int i = 0; i < length / 2; ++i) {
        if (integers[i] != integers[length - 1 - i]) {
            return false;  // If elements don't match, it's not a palindrome
        }
    }
    return true;  // All matched, it is a palindrome
}

// Function to sum elements of an array
int sum_array_elements(int integers[], int length) {
    if (length <= 0) return -1;  // Return -1 if the length is 0 or negative

    int sum = 0;
    for (int i = 0; i < length; ++i) {
        sum += integers[i];
    }
    return sum;
}

// Function to sum elements if the array is a palindrome
int sum_if_palindrome(int integers[], int length) {
    if (length <= 0) return -1;  // Return -1 if the length is 0 or negative

    if (is_palindrome(integers, length)) {
        return sum_array_elements(integers, length);
    } else {
        return -2;  // Return -2 if the array is not a palindrome
    }
}
