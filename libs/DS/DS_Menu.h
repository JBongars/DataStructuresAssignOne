#ifndef DS_MENU_H
#define DS_MENU_H

#include <string>
#include <vector>
#include <iostream>

namespace DS_Menu{
    void printHeader(std::string header);
    std::string printMenu(std::vector<std::string> options, std::string header = "Menu");
};

#endif // DS_MENU_H
