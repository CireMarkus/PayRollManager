#include "Date.h"

Date::Date(int d, int m,int y):
 day(d), month(m) ,year (y)
{
    //ctor

}

const int Date::Date(){
    return day;
}

const int Date::getMonth(){
    return month;
}

const int Date::getYear(){
    return year;
}

string Date::displayDate(){
    return ("%i/%i/%i",day, month,year);
}
