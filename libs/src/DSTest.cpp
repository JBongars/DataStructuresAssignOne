#include "DSTest.h"
#include <iostream>

DSTest::DSTest(int year, int month, int day)
{
    DSTest::m_year = year;
    DSTest::m_month = month;
    DSTest::m_day = day;
}

void DSTest::print(){
    std::cout << m_year << "/" << m_month << "/" << m_day;
}
