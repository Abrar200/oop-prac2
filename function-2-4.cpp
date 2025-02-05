#include <climits>

int array_min(int integers[], int length) {
    if (length <= 0) return -1;
    
    int min = INT_MAX;
    for (int i = 0; i < length; i++) {
        if (integers[i] < min) {
            min = integers[i];
        }
    }
    return min;
}

int array_max(int integers[], int length) {
    if (length <= 0) return -1;
    
    int max = INT_MIN;
    for (int i = 0; i < length; i++) {
        if (integers[i] > max) {
            max = integers[i];
        }
    }
    return max;
}

int sum_min_max(int integers[], int length) {
    if (length <= 0) return -1;
    
    int min = array_min(integers, length);
    int max = array_max(integers, length);
    
    if (min == -1 || max == -1) return -1;
    
    return min + max;
}
