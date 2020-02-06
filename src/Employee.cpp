#include "Employee.h"

Employee::Employee(string fName, string lName, string id, string pos,enum stat, Date hireDate, float pay):
 firstName(fName), lastName(lName), employee_ID(id), position(pos), dateHired(hireDate), payRate(pay)
{
    //ctor
}

void Employee::setName(string fName, string lName){

    firstName = fName;
    lastName = lName;
}
