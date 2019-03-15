#ifndef DS_TIME_H
#define DS_TIME_H

#include <string>
#include <sstream>
#include "DS_StringStatic.h"

class DS_Time
{
    int Hour;
    int Minute;
    int Second;

    public:
        DS_Time(int hour = 0, int minute = 0, int second = 0);
        DS_Time(std::string iso);

        const int getHour();
        const int getMinute();
        const int getSecond();
        const int getTimeString();

        void setHour(int hour);
        void setMinute(int minute);
        void setSecond(int second);

        std::string toString();

    private:

};

#endif // DS_TIME_H
