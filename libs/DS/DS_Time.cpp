#include "DS_Time.h"
#include "DS_StringStatic.h"

DS_Time::DS_Time(){
    this->Hour = 0;
    this->Minute = 0;
    this->Second = 0;
};

DS_Time::DS_Time(int hour, int minute){
    this->Hour = hour;
    this->Minute = minute;
    this->Second = 0;
};

DS_Time::DS_Time(int hour, int minute, int second){
    this->Hour = hour;
    this->Minute = minute;
    this->Second = second;
};

DS_Time::DS_Time(std::string iso){
    std::string timeStr = iso.substr(iso.find("T"), iso.size());
    std::vector<std::string> result = DS_StringStatic::split(timeStr, ":");
    
    this->Hour = DS_StringStatic::convertToInt(result[0]);
    this->Minute = DS_StringStatic::convertToInt(result[1]);
    this->Second = DS_StringStatic::convertToInt(result[2]);
};