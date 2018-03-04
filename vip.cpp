/*
Programmer:NGJEAN
Program:
Date:
*/

#include"vip.h"

VIP::VIP() : Customer()
{
	type = "VIP";	
	privilege = 45;
}

VIP::VIP(int inum, string sname, string saddress, string stell) : Customer(inum,sname,saddress,stell)
{
	type = "VIP";
	privilege = 45;
}

VIP::VIP(const VIP& v1) : Customer(v1)
{
	type = v1.type;
	privilege = v1.privilege;
}

VIP::~VIP()
{
	
}
