/*
Programmer:Jean Carlos Ng
ID: 40026914
Programmer:Gabriel Arturo Giordano
ID: 40065184
*/

#ifndef _CUSTOMER_H_
#define _CUSTOMER_H_
#include<iostream>

using namespace std;

class Customer
{
	public:
		Customer();  // default constructor
		Customer(int,string,string,string);// constructor with argument
		Customer(const Customer&); // copy constructor

		virtual ~Customer(); // destructor

		virtual void setPrivilege(int); //set privilege a variable

		virtual int getID(); //return Idnum
		virtual int getRentedID(); // return Idcar
		virtual string getType(); // return type
		virtual int getPrivilege(); //retun privilege
		virtual bool getRentStatus(); //return brentedcar
		virtual string getName(); //return name

		virtual void RentedCar(int,bool); // chekc brentedcar and Id car

		virtual void print() const; // print customer info
		
	protected:
		int Idnum,privilege,IdCar; //IdCar = 0 when a car is not being rented; Idnum > 0 always
		string name,address,tel,type;
		bool brentedcar; // true = renting a car & false = not renting a car

};
#endif
