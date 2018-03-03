/*
Programmer:NGJEAN
Program:
Date:
*/

#include"carrentalmanagement.h"


CarRentalManagement::CarRentalManagement()
{
	regularpriv = 20;
	coporatedpriv = 35;
	vippriv = 45;
	Numcar = 0;
	NumCustomer= 0;
	LimitCar = 100;
	LimitCustomer = 100;
	CustomerPtr = new Customer[LimitCustomer];
}

void CarRentalManagement::AddCar(int inum, string stype)
{
	carPtr[Numcar] = new Car(inum,stype);
	Numcar++;
}

void CarRentalManagement::RemoveCar(int iNumcar)
{
	for(int inum = iNumcar; inum < Numcar; inum++)
	{
		carPtr[iNumcar] = carPtr[iNumcar + 1];
	}
	Numcar--;
}

//The AddCustomer Function overloaded for Regular Customers
void CarRentalManagement::AddCustomer(const Regular &r1){

	if (NumCustomer < LimitCustomer){
	
		CustomerPtr[NumCustomer] = r1;
		NumCustomer++;
	}
	else{
		cout << endl << "Limit of Customers exceeded";
	}
}

//The AddCustomer Function overloaded for Corporate Customers
void CarRentalManagement::AddCustomer(const Corporate &co1){

	if (NumCustomer < LimitCustomer){
	
		CustomerPtr[NumCustomer] = co1;
		NumCustomer++;
	}
	else{
		cout << endl << "Limit of Customers exceeded";
	}
}

//The AddCustomer Function overloaded for VIP Customers
void CarRentalManagement::AddCustomer(const VIP &v1){

	if (NumCustomer < LimitCustomer){
	
		CustomerPtr[NumCustomer] = v1;
		NumCustomer++;
	}
	else{
		cout << endl << "Limit of Customers exceeded";
	}
}

void CarRentalManagement::RemoveCustomer(int numID){

	for (i = 0; i < NumCustomer; i++){
		if(CustomerPtr[i].getNum == numID){
			for (j = i; j < NumCustomer -1; j++){
				CustomerPtr[j] = CustomerPtr[j+1];
			}
			NumCustomer--;
			return;
		}
	}
	cout << endl << "Customer # " << numID << " could not be found." << endl;
}

