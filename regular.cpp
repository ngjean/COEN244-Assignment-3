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
	privilege = 20;// set value
	type = "Regular";// set value
}

Regular::Regular(const Regular& r1):Customer(r1)
{
	privilege = r1.privilege; // set value given by another object
	type = r1.type;// set value given by another object
}

Regular::~Regular()
{
	//does nothing
}
