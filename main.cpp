
#include <iostream>
#include <string>

#include "DS_Date.h"
#include "DS_Time.h"
#include "DS_Menu.h"

using namespace std;

int main()
{
    DS_Menu::printHeader("Program Start");

    DS_Date dates[] = {
        DS_Date(2000, 1, 1),
        DS_Date(),
        DS_Date("1999-01-01T12:00:00")
    };

    for(char i = 0; i < 3; i++){
        cout << "Date " << i << ": " << dates[i].toString();
    }

    return 0; //exit code 0
}
