/*
Programmer:NGJEAN
Program:
Date:
*/

#include"regular.h"

Regular::Regular() : Customer()
{
	type = "Regular";	
	privilege = 20;
}

Regular::Regular(int inum, string sname, string saddress, string stell, int iprivilege) : Customer(inum,sname,saddress,stell)
{
	type = "Regular";
	privilege = iprivilege;
}

Regular::Regular(const Regular& r1):Customer(r1){
	
	//here I added a copy constructor to add new Customers to the list depending on what they are
}

void Regular::print()const
{
	Customer::print();
	cout<<"Type: "<<type<<endl;
}

void Regular::setPrivilege(int iprivilege)
{
	privilege = iprivilege;
}

Regular::~Regular()
{
	
}
