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

VIP::VIP(int inum, string sname, string saddress, string stell,int iprivilege) : Customer(inum,sname,saddress,stell)
{
	type = "VIP";
	privilege = iprivilege;
}

VIP::VIP(const VIP& v1) : Customer(v1){

	privilege = v1.privilege;
}

void VIP::print()const
{
	Customer::print();
	cout<<"Type: "<<type<<endl;
}

VIP::~VIP()
{
	
}
