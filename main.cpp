
#include <iostream>
#include <string>

#include "DS_Menu.h"
#include "DS_Date.h"
#include "DS_Time.h"
#include "DS_Menu.h"
#include "DS_Vector.h"

int main()
{
    DS_Date dates[] = {
        DS_Date(2000, 1, 1),
        DS_Date(),
        DS_Date("1999-01-01T12:00:00")
    };

    int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::vector<std::string> arr2{ "Dogs", "Cats", "Rabbits", "Canaries", "Fish" };

    // while(1){

        DS_Menu::printHeader("Program Start");
        for(char i = 0; i < 3; i++){
            std::cout << "Date " << i << ": " << dates[i].toString();
        }

        std::string result = DS_Menu::printMenu(arr2, "What is your favorite animal?");
        std::cout << std::endl << std::endl << "Your favorite animal are " << result << std::endl;


        // DS_Vector<int> vector1 = DS_Vector<int>{arr1};
        // DS_Vector<int> vector1 { };

        // DS_Vector<int> vector1;

        // for(char i = 0; i < vector1.size(); i++){
        //     std::cout << "Member " << i << ": " << vector1.getIndex(i);
        // }
    // }

    return 0; //exit code 0
}
