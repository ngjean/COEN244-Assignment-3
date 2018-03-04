/*
Programmer:NGJEAN
Program:
Date:
*/

#include"customer.h"

Customer::Customer()
{
	Idnum = 1;
	name = "John Smith";
	address = "101 unkonw street";
	tel = "(123)654-1234";
	type = "NONE";
	privilege = 0;
}

Customer::Customer(int inum, string sname, string saddress, string stel)
{
	Idnum = inum;
	name = sname;
	address = saddress;
	tel = stel;
}

Customer::Customer(const Customer &c1)
{	
	Idnum=c1.Idnum;
	name=c1.name;
	address=c1.address;
	tel=c1.tel;
}

void Customer::setPrivilege(int iprivilege)
{
	privilege = iprivilege;
}

int Customer::getID()
{
	return Idnum;
}
string Customer::getType()
{
	return type;
}

int Customer::getPrivilege()
{
	return privilege;
}

void Customer::print()const
{
	cout<<"Customer#: "<<Idnum<<endl
		<<"Type: "<<type<<endl
		<<"Name: "<<name<<endl
		<<"Address: "<<address<<endl
		<<"Telephone: "<<tel<<endl;
}

void Customer::rentedcar(const Car &borrow)
{
	/*if(borrow.getStatus())
	{
		Rented = borrow;
		borrow.setStatus(false);
	}
	else
	{
		cout<<endl<<"CAR NOT AVAILABLE"<<endl;
	}*/
	Rented = borrow;
	borrow.setStatus(false);
}

Customer::~Customer()
{
	
}

