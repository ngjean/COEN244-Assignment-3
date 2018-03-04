/*
Programmer:NGJEAN
Program:
Date:
*/

#ifndef _CUSTOMER_H_
#define _CUSTOMER_H_

#include<iostream>
#include <string>
using namespace std;

class Customer
{
	
	public:
		Customer();
		Customer(int,string,string,string);
		Customer(const Customer&);
		
		virtual ~Customer();	
	
		virtual void setPrivilege(int) = 0; // pure virtual
		virtual void print() const;
		
		virtual string getType() = 0; // pure virtual
		virtual int getPrivilege()const = 0;
	
		int getNum();
		
	private:	
		int num;
		string name,address,tel; 
		
	
};
#endif
