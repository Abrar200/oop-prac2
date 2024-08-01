#ifndef BINARY_CONVERTER_H
#define BINARY_CONVERTER_H

#include <iostream>
#include <string>
#include <bitset>

void print_binary_str(std::string decimal_number) {
    // Convert string to integer
    int num = std::stoi(decimal_number);
    
    // Convert to binary and print
    std::cout << std::bitset<32>(num).to_string().substr(std::bitset<32>(num).to_string().find('1')) << std::endl;
}

#endif // BINARY_CONVERTER_H
