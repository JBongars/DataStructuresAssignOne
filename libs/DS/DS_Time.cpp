#include "DS_Time.h"
#include "DS_StringStatic.h"

DS_Time::DS_Time(std::string iso){
    std::string timeStr = iso.substr(iso.find("T"), iso.size());
    std::vector<std::string> result = DS_StringStatic::split(timeStr, ":");
    
    this->Hour = DS_StringStatic::convertToInt(result[0]);
    this->Minute = DS_StringStatic::convertToInt(result[1]);
    this->Second = DS_StringStatic::convertToInt(result[2]);
};