/*
Programmer:NGJEAN
Program:
Date:
*/

#include "car.h"

Car::Car() // default constroctor
{
	num = 100;
	type = "UNKNOWN";
	status = true;
}

Car::Car(int inum, string stype)
{
	num = inum;
	type = stype;
	status = true;
}

Car::Car(const Car& anotherCar)
{
	num = anotherCar.num;
	type = anotherCar.type;
	status = anotherCar.status;
}

int Car::getnum()
{
	return num;
}

string Car::getype()
{
	return type;
}

void Car::setStatus(bool bstatus)
{
	status = bstatus;
}

bool Car::getStatus() const
{
	return status;
}

void Car::carBorrow(const Customer& borrow)
{
	borrower = borrow;
}

void Car::print() const
{
	cout<<"Identificaion #: "<<num<<endl
		<<"Type: "<<type<<endl;
	
}

Car::~Car()
{
	
}
