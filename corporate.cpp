/*
 *Programmer:NGJEAN
Program:
Date:
*/

#include "corporate.h"

Corporate::Corporate() : Customer()
{
	// TODO Auto-generated constructor stub
	type = "Corporate";
	nameCompany = "No_Name";
	addressCompany = "000 Main Street";
	privilege = 35;

}

Corporate::Corporate(int inum, string sname, string saddress, string stell, string nameCo, string addreCo) : Customer(inum,sname,saddress,stell)
{
	privilege = 35;
	type = "Corporate";
	nameCompany= nameCo;
	addressCompany = addreCo;
}

Corporate::Corporate(const Corporate &co1) : Customer(co1)
{	
	privilege = co1.privilege;
	type = co1.type;
	nameCompany = co1.nameCompany;
	addressCompany = co1.addressCompany;
}

void Corporate::print()const
{
	Customer :: print();
	cout << "Name of the Company: " << nameCompany << endl;
	cout << "Address of the Company: " << addressCompany << endl;
}

string Corporate::getName()
{
	return nameCompany;
}

Corporate::~Corporate()
{
	// TODO Auto-generated destructor stub
}

