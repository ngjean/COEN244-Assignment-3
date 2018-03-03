/*
Programmer:NGJEAN
Program:
Date:
*/

#include"customer.h"

Customer::Customer()
{
	num = 1;
	name = "John Smith";
	address = "101 unkonw street";
	tel = "(123)654-1234";
}

Customer::Customer(int inum, string sname, string saddress, string stel)
{
	num = inum;
	name = sname;
	address = saddress;
	tel = stel;
}

Customer::Customer(const Customer &c1){
	
	num=c1.num;
	name=c1.name;
	address=c1.address;
	cel=c1.cel;
	
}

void Customer::print()const
{
	cout<<"Customer#: "<<num<<endl
		<<"Name: "<<name<<endl
		<<"Address: "<<address<<endl
		<<"Telephone: "<<tel<<endl;
}

Customer::~Customer()
{
	
}

