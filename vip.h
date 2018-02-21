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
		VIP(int inum, string sname, string saddress, string stel);
		
		~VIP();
		
		virtual void print()const;
		
	private:
	string type;
	
	
	
};
#endif
