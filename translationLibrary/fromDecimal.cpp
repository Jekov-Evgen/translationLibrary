#include "fromDecimal.h"


std::string fromDecimalToBinary(std::string decimalNumber) {
	int conversionToNumber = std::stoi(decimalNumber);
	std::string binary = std::bitset<32>(conversionToNumber).to_string();

	return binary.substr(binary.find('1'));
}

std::string fromDecimalToOctal(std::string decimalNumber) {
	int decimal = std::stoi(decimalNumber);
	std::stringstream octal;

	octal << std::oct << decimal;

	return octal.str();
}

std::string decimalToHexadecimal(std::string decimalNumber) {
	int decimal = std::stoi(decimalNumber);
	std::stringstream hexadecimal;

	hexadecimal << std::hex << decimal;

	return hexadecimal.str();
}