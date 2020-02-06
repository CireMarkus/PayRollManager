#ifndef DATE_H
#define DATE_H

#include <string>

using namespace std;

class Date
{
    public:
        Date(int,int,int);
        /*getters*/
        const int getMonth();
        const int getDay();
        const int getYear();

        string displayDate();

    private:
        const int day;
        const int month;
        const int year;
};

#endif // DATE_H
