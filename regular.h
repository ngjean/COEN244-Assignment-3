/*
Programmer:NGJEAN
Program:
Date:
*/

#ifndef _REGULAR_H_
#define _REGULAR_H_

#include"customer.h"
#include<iostream>
using namespace std;

class Regular : public Customer
{
	public:
		
		Regular();
		Regular(int inum, string sname, string saddress, string stel);
		
		~Regular();
		
		virtual void print()const;
		
	private:
	string type;
	
	
	
};
#endif
