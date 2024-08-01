#include <iostream>
#include <string>
#include <bitset>

void print_binary_str(std::string decimal_number) {
    // Convert string to integer
    int num = std::stoi(decimal_number);
    
    // Convert to binary and print
    std::string binary = std::bitset<32>(num).to_string();
    
    // Find the first '1' in the binary string
    size_t pos = binary.find('1');
    
    // If all zeros, print "0", otherwise print from the first '1'
    if (pos == std::string::npos) {
        std::cout << "0" << std::endl;
    } else {
        std::cout << binary.substr(pos) << std::endl;
    }
}
