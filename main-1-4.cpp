// main-1-4.cpp
#include <iostream>
#include "function-1-4.cpp" // Include the source file containing the print_scaled function

int main() {
    int scale = 3;
    int threebythree[3][3] = {
        {0, 1, 2},
        {3, 4, 5},
        {6, 7, 8}
    };

    print_scaled(threebythree, scale);

    return 0;
}
