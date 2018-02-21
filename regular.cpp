/*
Programmer:NGJEAN
Program:
Date:
*/

#include"regular.h"
#include"customer.cpp"

Regular::Regular() : Customer()
{
	type = "Regular";	
}

Regular::Regular(int inum, string sname, string saddress, string stell) : Customer(inum,sname,saddress,stell)
{
	type = "Regular";
}

void Regular::print()const
{
	Customer::print();
	cout<<"Type: "<<type<<endl;
}

Regular::~Regular()
{
	
}
