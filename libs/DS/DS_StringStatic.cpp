#include "DS_StringStatic.h"

DS_StringStatic::DS_StringStatic(){}

std::vector<std::string> DS_StringStatic::split(std::string input, std::string sbstring){
    std::vector<std::string> result = { "hello world", "something else" };
    return result;
}

int convertToInt(std::string input){
    int result;
    try {
        result = std::stoi(input);
        return result;
    }
	catch (std::invalid_argument const &e)
	{
		std::cout << "Bad input: std::invalid_argument thrown" << '\n';
	}
	catch (std::out_of_range const &e)
	{
		std::cout << "Integer overflow: std::out_of_range thrown" << '\n';
	}
}
