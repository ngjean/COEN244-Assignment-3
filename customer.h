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
	
		void setPrivilege(int); 
		
		int getID();
		string getType(); 
		int getPrivilege();
		
		virtual void print() const;
		
	protected:	
		int Idnum,privilege;
		string name,address,tel,type; 
		
	
};
#endif
