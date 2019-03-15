#ifndef DS_STRINGSTATIC_H
#define DS_STRINGSTATIC_H

#include <string>
#include <vector>
#include <iostream>

class DS_StringStatic
{
    public:
        DS_StringStatic();
        static std::vector<std::string> split(std::string input, std::string delimeter);
        static int convertToInt(std::string input);
};

#endif // DS_STRINGSTATIC_H
