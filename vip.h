/*
Programmer:NGJEAN
Program:
Date:
*/

#ifndef _VIP_H_
#define _VIP_H_

#include"customer.h"
#include<iostream>
using namespace std;

class VIP : public Customer// inherit funtion/data member from customer
{
	public:
		
		VIP();//default constructor
		VIP(int, string, string, string);//constructor with argument
		VIP(const VIP&);//copy constructor
		~VIP();//destructor
		
	private:
	
	
};
#endif
