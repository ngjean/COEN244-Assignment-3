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
		Regular(int,string,string,string);
		Regular(const Regular&);
		~Regular();

	private:
	int privilege = 25;
	string type ="Regular";
	
	
};
#endif
