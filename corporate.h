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
	Corporate(int, string, string, string, string, string, int);
	Corporate(const Corporate&);
	void print() const;
	~Corporate();

private:
	string nameCompany;
	string addressCompany;
};

#endif /* CORPORATE_H_ */
