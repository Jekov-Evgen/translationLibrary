#include "fromHexadecimal.h"


std::string hexadecimalToBinary(std::string hexadecimalNumber) {
	int demical = std::stoi(hexadecimalNumber, nullptr, 16);

	std::string binary = std::bitset<32>(demical).to_string();

	return binary.substr(binary.find('1'));
}

std::string hexadecimalToOctal(std::string hexadecimalNumber) {
	int demical = std::stoi(hexadecimalNumber, nullptr, 16);

	std::stringstream octal;

	octal << std::oct << demical;

	return octal.str();
}

std::string hexadecimalToDecimal(std::string hexadecimalNumber) {
	int demical = std::stoi(hexadecimalNumber, nullptr, 16);

	return std::to_string(demical);
}