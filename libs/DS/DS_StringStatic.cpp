
#include "DS_StringStatic.h"

DS_StringStatic::DS_StringStatic(){}

std::vector<std::string> DS_StringStatic::split(std::string input, std::string delimeter){
    std::vector<std::string> result;
    size_t pos = 0;

    while ((pos = input.find(delimeter)) != std::string::npos) {
        result.push_back(input.substr(0, pos));
        input.erase(0, pos + delimeter.length());
    }
    result.push_back(input);
    return result;
}

int DS_StringStatic::convertToInt(std::string input){
    try {
        int result = std::stoi(input);
        return result;
    } catch (std::invalid_argument const &e) {
		std::cout << "Bad input: std::invalid_argument thrown" << '\n';
	} catch (std::out_of_range const &e) {
		std::cout << "Integer overflow: std::out_of_range thrown" << '\n';
	}
    return 0;
}
