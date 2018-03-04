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

class VIP : public Customer
{
	public:
		
		VIP();
		VIP(int, string, string, string);
		VIP(const VIP&);
		~VIP();
		
	private:
	
	
};
#endif
