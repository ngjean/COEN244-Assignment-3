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

Regular::Regular(int inum, int ipriv, string sname, string saddress, string stell, string stype) : Customer(inum,ipriv,sname,saddress,stell,stype)
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
