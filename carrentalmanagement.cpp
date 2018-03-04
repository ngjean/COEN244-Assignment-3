/*
Programmer:NGJEAN
Program:
Date:
*/

#include"carrentalmanagement.h"


CarRentalManagement::CarRentalManagement()
{
	/* DONT THING WE NEED THIS THO
	regularpriv = 20;
	coporatedpriv = 35;
	vippriv = 45;
	*/
	NumCar = 0;
	NumCustomer= 0;
	LimitCar = 100;
	LimitCustomer = 100;
}

void CarRentalManagement::AddCar(int inum, string stype) // PART A
{
	if(NumCar < limitCar)
	{
		carPtr[NumCar] = new Car(inum,stype);
		NumCar++;
	}
	else
	{
		cout<<endl<<"UNABLE TO ADD CAR. LIMITE OF CAR REACH"<<endl;
	}
}

void CarRentalManagement::RemoveCar(int iNumcar) // PART B
{
	
	for(int inum = 0; inum < NumCar; inum++)
	{	
		if(carPtr[inum]->getnum() == iNumcar )
		{
			for(int ifig = inum; ifig < NumCar; ifig++)
			{
			carPtr[ifig] = carPtr[ifig + 1];
			}
			NumCar--;
			return;
		}
	}
	cout<<endl<<iNumcar<<" CAR NOT FOUND. UNABLE TO REMOVE"<<endl;
}

//The AddCustomer Function overloaded for Regular Customers
void CarRentalManagement::AddCustomer(const Regular &r1){ // PART C

	if (NumCustomer < LimitCustomer){
	
		customerPtr[NumCustomer] = r1;
		NumCustomer++;
	}
	else{
		cout << endl << "Limit of Customers exceeded"<<ednl;
	}
}

//The AddCustomer Function overloaded for Corporate Customers
void CarRentalManagement::AddCustomer(const Corporate &co1){ // PART C

	if (NumCustomer < LimitCustomer){
	
		customerPtr[NumCustomer] = co1;
		NumCustomer++;
	}
	else{
		cout << endl << "Limit of Customers exceeded";
	}
}

//The AddCustomer Function overloaded for VIP Customers
void CarRentalManagement::AddCustomer(const VIP &v1){ // PART C

	if (NumCustomer < LimitCustomer){
	
		customerPtr[NumCustomer] = v1;
		NumCustomer++;
	}
	else{
		cout << endl << "Limit of Customers exceeded";
	}
}

void CarRentalManagement::RemoveCustomer(int numID){ // PART D

	for (int i = 0; i < NumCustomer; i++){ // PART C
		if(customerPtr[i]->getNum() == numID){
			for (int j = i; j < NumCustomer -1; j++){
				customerPtr[j] = customerPtr[j+1];
			}
			NumCustomer--;
			return;
		}
	}
	cout << endl << "Customer # " << numID << " could not be found." << endl;
}

int CarRentalManagement::getPriviledge(int id) // PART G
{
	for(int inum = 0 ;inum < NumCustomer; inum++)
	{
		if(customerPtr[inum]->getID() == id)
		{
			return customerPtr[inum]->getPrivilege();
		}
	}
	cout<<endl<<"CUSTOMER WIHT ID: "<<id<<" NOT FOUND"<<endl;
}

void CarRentalManagement::setPriviledge(int ipriv, stype) // PART H
{
	for(int inum = 0 ; inum < NumCustomer; inum++)
	{
		if(customerPtr[inum]->getType() == stype)
		{
			customerPtr[inum]->setPrivilege(ipriv);
		}
	}
}

void CarRentalManagement::RentCar(int id) // PART E
{
	for(int inum = 0 ;inum < NumCustomer; inum++)
	{
		if(customerPtr[inum]->getID() == id) // search by id
		{
			for(int ifig = 0; ifig< NumCar;ifig++)	
			{
				if(customerPtr[inum]->getType() == "VIP" || "Corporate") // if it is "VIP" or "Corporate"
				{
					if(carPtr[ifig]->getStatus()) // check if the car is available
					{
						customerPtr[inum]->rentedcar(carPtr[ifg]); // rent the car to the customer
						return;
					}
					else
					{
						if(carPtr[ifg]->getype() == "Standard" && carPtr[ifg]->getStatus() )  // if the customer is regular he can only rent standar therfore only check for standar cars and if they are avilable
						{
							customerPtr[inum]->rentedcar(carPtr[ifg]);// rent the car to the 
							return;
						}
					}
				)
			}
		}
	}
}




