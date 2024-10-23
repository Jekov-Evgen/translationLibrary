#include "fromBinary.h"

std::string binaryToDecimal(std::string binaryNumber) {
    int demical = std::stoi(binaryNumber, nullptr, 2);

    return std::to_string(demical);
}

std::string binaryToOctal(std::string binaryNumber) {
    int demical = std::stoi(binaryNumber, nullptr, 2);
    std::stringstream octal;

    octal << std::oct << demical;

    return octal.str();
}

std::string binaryToHexadecimal(std::string binaryNumber) {
    int demical = std::stoi(binaryNumber, nullptr, 2);
    std::stringstream hexadecimal;

    hexadecimal << std::hex << demical;

    return hexadecimal.str();
}