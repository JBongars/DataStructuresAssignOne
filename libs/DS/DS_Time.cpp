#include "DS_Time.h"
#include "DS_StringStatic.h"

DS_Time::DS_Time(std::string iso){
    std::string timeStr = iso.substr(iso.find("T"), iso.size());
    std::vector<std::string> result = DS_StringStatic::split(timeStr, ":");
    
    this->Hour = DS_StringStatic::convertToInt(result[0]);
    this->Minute = DS_StringStatic::convertToInt(result[1]);
    this->Second = DS_StringStatic::convertToInt(result[2]);
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

std::string DS_Time::toString(){
    std::stringstream ss;
    ss << std::to_string(this->getHour()) 
        << ":" << std::to_string(this->getMinute()) 
        << ":" << std::to_string(this->getSecond())
        << std::endl;
    return ss.str();
}
