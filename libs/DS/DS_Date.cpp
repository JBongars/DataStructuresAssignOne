#include "DS_Date.h"

DS_Date::DS_Date(std::string iso){
    std::string timeStr = iso.substr(0, iso.find("T"));
    std::vector<std::string> result = DS_StringStatic::split(timeStr, "-");
    
    this->Year = DS_StringStatic::convertToInt(result[0]);
    this->Month = DS_StringStatic::convertToInt(result[1]);
    this->Day = DS_StringStatic::convertToInt(result[2]);
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

std::string DS_Date::toString(){
    std::stringstream ss;
    ss << std::to_string(this->getYear()) 
        << "-" << std::to_string(this->getMonth()) 
        << "-" << std::to_string(this->getDay())
        << std::endl;
    return ss.str();
}
