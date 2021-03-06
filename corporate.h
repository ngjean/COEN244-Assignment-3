/*
Programmer:Jean Carlos Ng
ID: 40026914
Programmer: Gabriel Arturo Giordano
ID: 40065184
*/

#ifndef CORPORATE_H_
#define CORPORATE_H_

#include "customer.h"
#include<iostream>

class Corporate : public Customer {// inherit funtion/data member from customer
	public:
		
		Corporate(); //default constructor
		Corporate(int, string, string, string, string, string); // constructor with argument
		Corporate(const Corporate&); // copy constructor

		virtual string getName(); //overide getName
		
		virtual void print() const; //override print
		
		~Corporate(); //destructor
	
	protected:
		
		string nameCompany; //declaration variable 
		string addressCompany; //declaration variable 
};

#endif /* CORPORATE_H_ */
