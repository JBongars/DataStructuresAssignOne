#include "DS_Menu.h"

void DS_Menu::printHeader(std::string header){
    std::cout 
        << "\n\n======================================\n" 
        << header 
        << "\n======================================\n\n";
}

std::string DS_Menu::printMenu(std::vector<std::string> options, std::string header){
    int choice = -1;
    std::string result;

    DS_Menu::printHeader(header);

    for(int i = 0; i < options.size(); i++){
        std::cout << i + 1 << ". " << options[i] << std::endl;
    }

    while(true){
        std::cout << "\n======================================\n";
        std::cout << "Please insert a value between 1 and " << options.size() + 1 << ": ";

        std::cin >> choice;
        std::cout << "choice is: " << choice << std::endl;

        if(choice > 0 && choice < options.size() ){
            break;
        } else {
            std::cout << "Invalid Entry!" << std::endl;
            std::cin.clear();
        }
    }

    result = options.at(choice - 1);
    return result;
}