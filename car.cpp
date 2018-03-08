/*
Programmer:Jean Carlos Ng
ID: 40026914
ProgrammerGabriel Arturo Giordan
ID: 40065184
*/
#include "car.h"

Car::Car() // default constroctor
{
	num = 100; // random number
	type = "UNKNOWN"; // random string
	status = true; // set status to true which mean not rented
}

Car::Car(int inum, string stype) // constructor with argument
{
	num = inum; // set num with inum a given value by the user
	type = stype; //  set type to a given string by the user
	status = true;// set status to true which mean not rented

}

Car::Car(const Car& anotherCar) // copy constructor
{
	num = anotherCar.num; // set num with inum a given value by another object
	type = anotherCar.type; //  set type to a given string by another object
	status = anotherCar.status;// set status to true which mean not rented which is given by another object
}

int Car::getnum()
{
	return num; //return num
}

string Car::getype()
{
	return type; //return type
}

void Car::setStatus(bool bstatus)
{
	status = bstatus; // set status with bstatus given by user
}

bool Car::getStatus() const
{
	return status; // return status
}

void Car::setBorrower(int idCustomer)
{
	Idborrower = idCustomer; // set Idborrower with idcustomer given by user
}

int Car::getBorrower()
{
	return Idborrower; // return idborrower value
}

void Car::print() const
{
	cout<<"Identificaion #: "<<num<<endl // print text + variable
		<<"Type: "<<type<<endl;// print text + variable
	
}

Car::~Car()// destructor
{
	
}
