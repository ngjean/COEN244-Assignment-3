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
		Regular(int, string, string, string, int);
		Regular(const Regular&);
		~Regular();
		
		virtual void print()const;
		virtual void setPrivilege(int);
		
	private:
	string type;
	int privilege;
	
	
	
};
#endif
