/*
 *Programmer:NGJEAN
Program:
Date:
*/

#include "corporate.h"

Corporate::Corporate() {
	// TODO Auto-generated constructor stub
	type = "Corporate";
	nameCompany = "No_Name";
	addressCompany = "000 Main Street";
	privilege = 35;

}

Corporate::Corporate(int inum, string sname, string saddress, string stell, string nameCo, string addreCo, int iprivilege) : Customer(inum,sname,saddress,stell)
{

	type = "Corporate";
	nameCompany= nameCo;
	addressCompany = addreCo;
	privilege = iprivilege;
}

Corporate::Corporate(const Corporate &co1) : Customer(co1){
	
	nameCompany = co1.nameCompany;
	addressCompany = co1.addressCompany;
}

void Corporate::print()const{

	Customer :: print();
	cout << "Type: " << type << endl;
	cout << "Name of the Company: " << nameCompany << endl;
	cout << "Address of the Company: " << addressCompany << endl;
}


Corporate::~Corporate() {
	// TODO Auto-generated destructor stub
}

