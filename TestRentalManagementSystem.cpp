/*
Name: Gabriel Giordano
ID: 
Name: Jean carlos Ng
ID:40026914
Course COEN 244
Assignment #3
*/
#include <iostream>
#include"customer.cpp"
//#incluegular.h"
#include"regular.h"

using namespace std;

int main()
{
	
	Customer *test1;
	Regular *test2;
	test1 = new Customer();
	test2 = new Regular(123,"john","123rue","1235462135");

	test1->print();
	test2->print();

	test1 = test2;

	test1->print();
	
	
	
	
	return 0;
}
