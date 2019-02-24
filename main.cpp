#include <iostream>
#include "DSTest.h"

using namespace std;

int main()
{
    DSTest today { 2020, 10, 14 };

    today.m_day = 16; // use member selection operator to select a member variable of the class
    today.print(); // use member selection operator to call a member function of the class

    return 0;
}
