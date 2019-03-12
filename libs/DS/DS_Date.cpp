#include "DS_Date.h"

DS_Date::DS_Date(){
    this->Year = 0;
    this->Month = 0;
    this->Day = 0;
};

DS_Date::DS_Date(int year, int month, int day){
    this->Year = year;
    this->Month = month;
    this->Day = day;
};

DS_Date::DS_Date(std::string iso){
    std::string timeStr = iso.substr(0, iso.find("T"));
    std::vector<std::string> result = DS_StringStatic::split(timeStr, "-");
    
    this->Year = DS_StringStatic::convertToInt(result[0]);
    this->Month = DS_StringStatic::convertToInt(result[1]);
    this->Day = DS_StringStatic::convertToInt(result[2]);
};