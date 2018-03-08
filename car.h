/*
Programmer:Jean Carlos Ng
ID: 40026914
ProgrammerGabriel Arturo Giordan
ID: 40065184
*/

#ifndef _CAR_H_
#define _CAR_H_

#include<iostream>
using namespace std;

class Car
{

	public:
		Car(); // default constructor
		Car(int,string); // constructor with argument
		Car(const Car&); // copy constructor
		
		int getnum(); // return num(a varriable)
		int getBorrower(); // return Idborrower (a varriable)
		string getype();//return type (a varriable)
		
		void setStatus(bool); // change status (a varriable)
		bool getStatus() const;// return status (a varriable)
		
		void setBorrower(int); // set Idborrower with given int
		
		virtual void print() const; // print car info
		
		virtual ~Car(); // destructor
		
	private:
		int num, Idborrower; // Idborrower = 0 when it isnt rented; num > 0 always.
		string type; //Standard or Luxury cars
		bool status; // true = "available" & false = "unavailable"
};
#endif
