/*
Programmer:NGJEAN
Program:
Date:
*/

#include "car.h"

Car::Car() // default constroctor
{
	num = 100;
	//type = "UNKNOWN";
	status = true;
}

Car::Car(int inum)//, string stype)
{
	num = inum;
	//type = stype;
	status = true;
}

/*
void Car::setStatus(bool bstatus)
{
	status = bstatus;
}
*/

void Car::print() const
{
	cout<<"Identificaion #: "<<num<<endl
		<<"Type: "<<type<<endl;
	
}

/*
bool Car::getStatus()
{
	return status;
}
*/

Car::~Car()
{
	
}
