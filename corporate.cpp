/*
 *Programmer:NGJEAN
Program:
Date:
*/

#include "corporate.h"

Corporate::Corporate() : Customer()
{
	// TODO Auto-generated constructor stub
	type = "Corporate";// random value
	nameCompany = "No_Name";// random value
	addressCompany = "000 Main Street";// random value
	privilege = 35;// set value

}

Corporate::Corporate(int inum, string sname, string saddress, string stell, string nameCo, string addreCo) : Customer(inum,sname,saddress,stell)
{
	privilege = 35;// set value
	type = "Corporate";// set value
	nameCompany= nameCo;// set value given by user
	addressCompany = addreCo; // set value given by user
}

Corporate::Corporate(const Corporate &co1) : Customer(co1)
{	
	privilege = co1.privilege; // set value given by another object
	type = co1.type; // set value given by another object
	nameCompany = co1.nameCompany; // set value given by another object
	addressCompany = co1.addressCompany; // set value given by another object
}

void Corporate::print()const
{
	Customer :: print();//call customer print
	cout << "Name of the Company: " << nameCompany << endl;//print text
	cout << "Address of the Company: " << addressCompany << endl;//print text
}

string Corporate::getName()
{
	return nameCompany; // return company name
}

Corporate::~Corporate()
{
	// TODO Auto-generated destructor stub
}

