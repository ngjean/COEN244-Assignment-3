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

class Regular : public Customer // inherit funtion/data member from customer
{
	public:
		
		Regular();//default constructor
		Regular(int,string,string,string);//constructor with argument
		Regular(const Regular&);//copy constructor
		~Regular();//destructor
	
	
};
#endif
