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
		Customer(int,string,string,string,string);
		
		virtual ~Customer();	
	
		virtual void setPrivilege(int) = 0; // pure virtual
		virtual void print();
		
		virtual string getType(); // pure virtual
		
		
	private:	
		int num;
		string name,address,tel,type; 
		
	
};
#endif
