/*
Programmer:NGJEAN
Program:
Date:
*/

#ifndef _CUSTOMER_H_
#define _CUSTOMER_H_
#include<iostream>

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
		virtual int getRentedID();
		virtual string getType();
		virtual int getPrivilege();
		virtual bool getRentStatus();
		virtual string getName();

		virtual void RentedCar(int,bool);

		virtual void print() const;
		
	protected:
		int Idnum,privilege,IdCar; //IdCar = 0 when a car is not being rented; Idnum > 0 always
		string name,address,tel,type;
		bool brentedcar; // true = renting a car & false = not renting a car

};
#endif
