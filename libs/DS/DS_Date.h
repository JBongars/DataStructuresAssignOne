#ifndef DS_DATE_H
#define DS_DATE_H

#include <iostream>
#include <string>
#include <sstream>
#include "DS_StringStatic.h"

class DS_Date
{
    int Day;
    int Month;
    int Year;

    public:
        DS_Date(
            int year = 1970, 
            int month = 1, 
            int day = 1
        ) : Day(day), Month(month), Year(year){ };

        DS_Date(std::string iso);

        // virtual ~DS_Date();

        const int getDay();
        const int getMonth();
        const int getYear();
        const std::string getDateString();

        void setDay(int day);
        void setMonth(int month);
        void setYear(int year);

        std::string toString();
};

#endif // DS_DATE_H
