/*
Programmer:NGJEAN
Program:
Date:
*/

#include"customer.h"
Customer::Customer()
{
	Idnum = 1; //random value
	name = "John Smith"; //random value
	address = "101 unkonw street"; //random value
	tel = "(123)654-1234"; //random value
	type = "NONE"; //random value
	privilege = 0; //random value
	brentedcar = false; //false meaning not renting a car
}

Customer::Customer(int inum, string sname, string saddress, string stel)
{
	Idnum = inum; //set value with given value
	name = sname; //set value with given value
	address = saddress; //set value with given value
	tel = stel; //set value with given value
	brentedcar = false; //false meaning not renting a car
}

Customer::Customer(const Customer &c1)
{	
	Idnum=c1.Idnum; //set value with given value of another another object
	name=c1.name;//set value with given value of another another object
	address=c1.address;//set value with given value of another another object
	tel=c1.tel;//set value with given value of another another object
	brentedcar = c1.brentedcar; //false meaning not renting a car
}

void Customer::setPrivilege(int iprivilege)
{
	privilege = iprivilege; //set privilege with iprivilege
}

int Customer::getID()
{
	return Idnum; //retunr value store in variable
}
string Customer::getType()
{
	return type;//retunr value store in variable
}

int Customer::getPrivilege()
{
	return privilege;//retunr value store in variable
}

void Customer::print()const
{
	cout<<"Customer#: "<<Idnum<<endl // print text
		<<"Type: "<<type<<endl // print text
		<<"Name: "<<name<<endl // print text
		<<"Address: "<<address<<endl;  // print text
		<<"Telephone: "<<tel<<endl; // print text
}

bool Customer::getRentStatus()
{
	return brentedcar; //retunr value store in variable
}


void Customer::RentedCar(int id, bool brent)
{
	IdCar = id; //set IdCar with value in id
	brentedcar = brent; // set berentedcar with value in brent
}

int Customer::getRentedID()
{
	return IdCar;//retunr value store in variable
}

string Customer::getName()
{
	return name;//retunr value store in variable
}

Customer::~Customer()
{
	
}

