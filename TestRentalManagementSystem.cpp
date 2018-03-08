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
	
	
	
	
	
	CarRentalManagement *m1;
	m1 = new CarRentalManagement();
	for (int i = 0 ; i < 10 ; i++){

		m1->AddCar(i+1,"Luxury");

	}

	for (int i = 0 ; i < 10 ; i++){

		m1->AddCar(i+1,"Standard");

	}



	m1->AddCustomer(1,"Jean Carlos","123 De Maiso","4384444444","Corporate","FedEx","555 St Laurent");
	m1->AddCustomer(2,"Gabriel Arturo", "6847 Westb", "5144343434","Regular"," "," ");
	m1->AddCustomer(3,"John","123 Montroyal","5555555","VIP"," "," ");

	m1->RentCar(3);
	m1->RentCar(1);
	m1->RentCar(2);
	m1->getPriviledge(1);

	m1->getCustomerType(2);

	m1->getCarType("FedEx");

	m1->getCustomerType(1);
	
	cout << " and it is allowed to borrow it for: " << m1->getPriviledge(1) << "days." << endl;
	
	cout << "Let us try with a Car that is not in the stock, car #30"<< endl;
	
	m1->RemoveCar(30);
	
	m1->RemoveCar(4);
	m1->RemoveCustomer(2);


	
	
	return 0;
}
