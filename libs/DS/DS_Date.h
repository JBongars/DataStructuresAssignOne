#ifndef DS_DATE_H
#define DS_DATE_H

#include "DS_String.h"

class DS_Date
{
    public:
        DS_Date();
        DS_Date(int year, int month, int day);
        DS_Date(DS_String date);

        const int getDay();
        const int getMonth();
        const int getYear();
        const int getDateString();

        void setDay(int day);
        void setMonth(int month);
        void setYear(int year);

    private:
        int Day;
        int Month;
        int Year;

};

const int DS_Date::getDay() {
    return this->Day;
};
const int DS_Date::getMonth() {
    return this->Month;
};
const int DS_Date::getYear() {
    return this->Year;
};

void DS_Date::setDay(int day){
    this->Day = day;
};
void DS_Date::setMonth(int month){
    this->Month = month;
};
void DS_Date::setYear(int year){
    this->Year = year;
};

#endif // DS_DATE_H
