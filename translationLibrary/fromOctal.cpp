#include "fromOctal.h"


std::string octalToBinary(std::string octalNumber) {
	int demical = std::stoi(octalNumber, nullptr, 8);

	std::string binary = std::bitset<32>(demical).to_string();

	return binary.substr(binary.find('1'));
}

std::string octalToDemical(std::string octalNumber) {
	int demical = std::stoi(octalNumber, nullptr, 8);

	return std::to_string(demical);
}

std::string decimalToHexadecimal(std::string octalNumber) {
	int demical = std::stoi(octalNumber, nullptr, 8);

	std::stringstream hexadecimal;

	hexadecimal << std::hex << demical;

	return hexadecimal.str();
}