#ifndef DS_TIME_H
#define DS_TIME_H

#include <string>
#include "DS_StringStatic.h"

class DS_Time
{
    public:
        DS_Time();
        DS_Time(int hour, int minute);
        DS_Time(int hour, int minute, int second);
        DS_Time(std::string iso);

        const int getHour();
        const int getMinute();
        const int getSecond();
        const int getTimeString();

        void setHour(int hour);
        void setMinute(int minute);
        void setSecond(int second);

    private:
        int Hour;
        int Minute;
        int Second;

};

const int DS_Time::getHour() {
    return this->Hour;
};
const int DS_Time::getMinute() {
    return this->Minute;
};
const int DS_Time::getSecond() {
    return this->Second;
};

void DS_Time::setHour(int hour){
    this->Hour = hour;
};
void DS_Time::setMinute(int minute){
    this->Minute = minute;
};
void DS_Time::setSecond(int second){
    this->Second = second;
};

#endif // DS_TIME_H
