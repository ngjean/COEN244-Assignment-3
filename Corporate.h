/*
 * Corporate.h
 *
 *  Created on: Feb 23, 2018
 *      Author: usuario
 */

#ifndef CORPORATE_H_
#define CORPORATE_H_

#include "customer.h"

class Corporate : public Customer {
public:
	Corporate();
	Corporate(int, string, string, string, string, string);
	void print() const;
	~Corporate();

private:
	string nameCompany;
	string addressCompany;
	string type;
};

#endif /* CORPORATE_H_ */
