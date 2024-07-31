// main-2-2.cpp
#include <iostream>
#include "function-2-2.cpp" // Include the source file containing the binary_to_int function

int main() {
    int binary_array[] = {1, 0, 1, 1}; // Binary for 11
    int number_of_digits = 4;

    int result = binary_to_int(binary_array, number_of_digits);
    std::cout << "The integer value is: " << result << std::endl;

    return 0;
}
