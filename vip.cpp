/*
Programmer:Jean Carlos Ng
ID: 40026914
ProgrammerGabriel Arturo Giordan
ID: 40065184
*/

#include"vip.h"

VIP::VIP() : Customer()
{
	type = "VIP";	//set value
	privilege = 45;//set value
}

VIP::VIP(int inum, string sname, string saddress, string stell) : Customer(inum,sname,saddress,stell) //pass value to customer
{
	type = "VIP";//set value
	privilege = 45;//set value
}

VIP::VIP(const VIP& v1) : Customer(v1)
{
	type = v1.type;//set value by another object
	privilege = v1.privilege;//set value by another object
}

VIP::~VIP()
{
	
}
