#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include <boost>
#include <vector>


#include "Date.h"
using namespace std;

class Employee
{
    public:
        Employee(string, string, string,string, enum,Date,float);
        /*setters*/
        void setName(string,string);
        void setEmpID(string);
        void setPosition(string);
        void setStatus(enum);
        void setDateHired(Date);
        void setPayRate(float);
        void setHoursWorked(float);

        /*getters*/
        string getName();
        string getFName();
        string getLName();
        string getEmpID();
        string getPosition();
        Date getDateHired();
        float getPayRate();
        float getHoursWorked();

    protected:


    private:
        string firstName;
        string lastName;
        string position;
        string employee_ID;
        string status;
        Date dateHired;
        float payRate;
        float hoursWorked;
};

#endif // EMPLOYEE_H
