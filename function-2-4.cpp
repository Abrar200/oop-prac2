// function-2-4.cpp
#include <iostream>

// Function to find the minimum element in an array
int array_min(int integers[], int length) {
    if (length <= 0) return -1;  // Return -1 if the length is 0 or negative

    int min_value = integers[0];
    for (int i = 1; i < length; ++i) {
        if (integers[i] < min_value) {
            min_value = integers[i];
        }
    }
    return min_value;
}

// Function to find the maximum element in an array
int array_max(int integers[], int length) {
    if (length <= 0) return -1;  // Return -1 if the length is 0 or negative

    int max_value = integers[0];
    for (int i = 1; i < length; ++i) {
        if (integers[i] > max_value) {
            max_value = integers[i];
        }
    }
    return max_value;
}

// Function to return the sum of the minimum and maximum elements in an array
int sum_min_max(int integers[], int length) {
    if (length <= 0) return -1;  // Return -1 if the length is 0 or negative

    int min_value = array_min(integers, length);
    int max_value = array_max(integers, length);

    if (min_value == -1 || max_value == -1) {
        return -1;  // Return -1 if either min or max value calculation fails
    }
    return min_value + max_value;
}
