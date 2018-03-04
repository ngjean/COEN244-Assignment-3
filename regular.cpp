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

Regular::Regular(int inum, string sname, string saddress, string stell) : Customer(inum,privilege,sname,saddress,stell,type)
{
	//does nothing
}

Regular::Regular(const Regular& r1):Customer(r1)
{
	//does nothing
}

Regular::~Regular()
{
	//does nothing
}
