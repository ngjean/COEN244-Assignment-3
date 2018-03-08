/*
Name: Gabriel Giordano
ID: 40065184
Name: Jean carlos Ng
ID:40026914
Course COEN 244
Assignment #3
*/
#include <iostream>

#include"carrentalmanagement.h"

using namespace std;

int main()
{

	
	CarRentalManagement *m1;
	m1 = new CarRentalManagement();
	for (int i = 0 ; i < 10 ; i++){

		m1->AddCar(i+1,"Luxury");

	}

	for (int i = 10 ; i < 20 ; i++){

		m1->AddCar(i+1,"Standard");

	}



	m1->AddCustomer(1,"Jean Carlos","123 De Maiso","4384444444","Corporate","FedEx","555 St Laurent");
	m1->AddCustomer(2,"Gabriel Arturo", "6847 Westb", "5144343434","Regular"," "," ");
	m1->AddCustomer(3,"John","123 Montroyal","5555555","VIP"," "," ");

	m1->RentCar(3);
	m1->RentCar(1);
	m1->RentCar(2);
	m1->getPriviledge(5);//which do not exist as of right now
	
	m1->getCustomerType(2);

	m1->getCarType("FedEx");// there is a corporated customer of that company
	m1->getCarType("canada post");//there isnt any corporated customer of that company
	
	m1->getCustomerType(1);
	
	cout << " and it is allowed to borrow it for: " << m1->getPriviledge(1) << "days." << endl;
	
	cout << "Let us try with a Car that is not in the stock, car #30"<< endl;
	m1->RemoveCar(30);
	
	m1->RemoveCar(4);
	m1->RemoveCustomer(2);

	for (int i = 20 ; i < 101 ; i++){ // causing error since max number of car is set to 100

		m1->AddCar(i+1,"Standard");

	}
	
	
	return 0;
}
