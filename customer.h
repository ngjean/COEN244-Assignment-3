/*
Programmer:NGJEAN
Program:
Date:
*/

#ifndef _CUSTOMER_H_
#define _CUSTOMER_H_
#include<iostream>

#include"car.h"
using namespace std;

class Customer
{
	public:
		Customer();
		Customer(int,string,string,string);
		Customer(const Customer&);

		virtual ~Customer();

		virtual void setPrivilege(int);

		virtual int getID();
		virtual string getType();
		virtual int getPrivilege();

		void rentedcar(Car&);

		virtual void print() const;
		
	protected:
		Car *Rented;

		int Idnum,privilege;
		string name,address,tel,type;
		bool brentedcar;

};
#endif
