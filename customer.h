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
		Customer(int,string,string,string,string,int);
		Customer(const Customer&);
		
		virtual ~Customer();	
	
		virtual void setPrivilege(int); 
		
		virtual int getID();
		virtual string getType(); 
		virtual int getPrivilege();
		
			virtual void print() const;
		
	private:	
		int Idnum,privilege;
		string name,address,tel,type; 
		
	
};
#endif
