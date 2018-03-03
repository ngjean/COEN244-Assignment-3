/*
Programmer:NGJEAN
Program:
Date:
*/

#include"vip.h"

VIP::VIP() : Customer()
{
	type = "VIP";	
}

VIP::VIP(int inum, string sname, string saddress, string stell) : Customer(inum,sname,saddress,stell)
{
	type = "VIP";
}

void VIP::print()const
{
	Customer::print();
	cout<<"Type: "<<type<<endl;
}

VIP::~VIP()
{
	
}
