/*
Programmer:NGJEAN
Program:
Date:
*/

#include"regular.h"

Regular::Regular() : Customer()
{
	//does nothing
}

Regular::Regular(int inum, string sname, string saddress, string stell) : Customer(inum,sname,saddress,stell)
{
	privilege = 20;
	type = "Regular";
}

Regular::Regular(const Regular& r1):Customer(r1)
{
	privilege = r1.privilege;
	type = r1.type;
}

Regular::~Regular()
{
	//does nothing
}
