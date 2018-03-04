/*
 * Corporate.h
 *
 *  Created on: Feb 23, 2018
 *      Author: usuario
 */

#ifndef CORPORATE_H_
#define CORPORATE_H_

#include "customer.h"
#include<iostream>
class Corporate : public Customer {
	public:
		
		Corporate();
		Corporate(int, string, string, string, string, string);
		Corporate(const Corporate&);
		
		virtual void print() const;
		
		~Corporate();
	
	protected:
		
		string nameCompany;
		string addressCompany;
};

#endif /* CORPORATE_H_ */
