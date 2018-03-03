/*
Programmer:NGJEAN
Program:
Date:
*/

#ifndef _VIP_H_
#define _VIP_H_

#include"customer.cpp"

using namespace std;

class VIP : public Customer
{
	public:
		
		VIP();
		VIP(int, string, string, string, int);
		
		~VIP();
		
		virtual void print()const;
		
	private:
	string type;
	int privilege;
	
	
	
};
#endif
