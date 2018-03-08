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
	NumCustomer = 0;
	LimitCar = 100;
	LimitCustomer = 100;
}

void CarRentalManagement::AddCar(int inum, string stype) // PART A
{
	if(NumCar < LimitCar)
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
			for(int ifig = inum; ifig < NumCar -1; ifig++)
			{
				carPtr[ifig] = carPtr[ifig + 1];
			}
			NumCar--;
			return;
		}
	}
	cout<<endl<<iNumcar<<" CAR NOT FOUND. UNABLE TO REMOVE"<<endl;
}

void CarRentalManagement::AddCustomer(int inum, string sname, string saddress, string stell, string stype, string snameCo, string saddreCo)
{
	if(stype == "VIP")
	{
		customerPtr[NumCustomer] = new VIP(inum,sname,saddress,stell);
	}
	else
	{
		if(stype == "Regular")
		{
			customerPtr[NumCustomer] = new Regular(inum,sname,saddress,stell);
		}
		else
		{
			customerPtr[NumCustomer] = new Corporate(inum,sname,saddress,stell,snameCo, saddreCo);
		}
	}
	NumCustomer++;
}
/*
//The AddCustomer Function overloaded for Regular Customers
void CarRentalManagement::AddCustomer(Regular &r1){ // PART C

	if (NumCustomer < LimitCustomer){
	
		customerPtr[NumCustomer] = r1;
		NumCustomer++;
	}
	else{
		cout << endl << "Limit of Customers exceeded"<<endl;
	}
}

//The AddCustomer Function overloaded for Corporate Customers
void CarRentalManagement::AddCustomer(const Corporate &co1){ // PART C

	if (NumCustomer < LimitCustomer){
	
		customerPtr[NumCustomer] = co1;
		NumCustomer++;
	}
	else{
		cout << endl << "Limit of Customers exceeded"<<endl;
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
*/

void CarRentalManagement::RemoveCustomer(int numID){ // PART D

	for (int i = 0; i < NumCustomer; i++){ // PART C
		if(customerPtr[i]->getID() == numID){
			for (int j = i; j < NumCustomer -1; j++){
				customerPtr[j] = customerPtr[j+1];
			}
			NumCustomer--;
			return;
		}
	}
	cout << endl << "Customer # " << numID << " could not be found." << endl;
}

void CarRentalManagement::RentCar(int id) // PART E
{
	for(int inum = 0 ;inum < NumCustomer; inum++)
	{
		if(customerPtr[inum]->getID() == id) // search by id
		{
			for(int ifig = 0; ifig< NumCar;ifig++)	
			{
				if(customerPtr[inum]->getType() == "VIP" || customerPtr[inum]->getType() == "Corporate") // if it is "VIP" or "Corporate"
				{
					if(carPtr[ifig]->getStatus()) // check if the car is available
					{
						carPtr[ifig]->setStatus(false);
						carPtr[ifig]->setBorrower(customerPtr[inum]->getID());

						customerPtr[inum]->RentedCar(carPtr[ifig]->getnum(),true);
						return;
					}
					else
					{
						if(carPtr[ifig]->getype() == "Standard" && carPtr[ifig]->getStatus() )  // if the customer is regular he can only rent standar therfore only check for standar cars and if they are avilable
						{
							carPtr[ifig]->setStatus(false);
							carPtr[ifig]->setBorrower(customerPtr[inum]->getID());

							customerPtr[inum]->RentedCar(carPtr[ifig]->getnum(),true);
							return;
						}
					}
				}
			}
		}
	}
}

void CarRentalManagement::UpdateCarInfo(int icarid, int icustid) // PART F
{
	for(int inum = 0 ;inum < NumCustomer; inum++)
	{
		if(customerPtr[inum]->getID() == icustid) // search by id
		{
			customerPtr[inum]->RentedCar(0,false);
		}
	}

	for(int ifig = 0; ifig< NumCar;ifig++)
	{
		if( (carPtr[ifig]->getnum()) == icarid)
		{
			carPtr[ifig]->setStatus(true);
			carPtr[ifig]->setBorrower(0);
		}
	}
}


int CarRentalManagement::getPriviledge(int id) const // PART G
{

	for(int inum = 0 ;inum < NumCustomer; inum++)
	{
		if(customerPtr[inum]->getID() == id)
		{
			return( customerPtr[inum]->getPrivilege() );
		}
	}
	cout<<endl<<"CUSTOMER WIHT ID: "<<id<<" NOT FOUND"<<endl;
	return 0;
}

void CarRentalManagement::setPriviledge(int ipriv, string stype) // PART H
{
	for(int inum = 0 ; inum < NumCustomer; inum++)
	{
		if(customerPtr[inum]->getType() == stype)
		{
			customerPtr[inum]->setPrivilege(ipriv);
		}
	}
}

bool CarRentalManagement::statusCar(int icarid) // PART I
{
	for(int ifig = 0; ifig< NumCar;ifig++)
	{
		if( (carPtr[ifig]->getnum()) == icarid)
		{
			return ( carPtr[ifig]->getStatus() );
		}
	}
	cout<<endl<<"CAR WIHT ID: "<<icarid<<" NOT FOUND"<<endl;
	return false;
}

bool CarRentalManagement::statusCustomer(int icustid) // PART J
{
	for(int inum = 0 ;inum < NumCustomer; inum++)
	{
		if(customerPtr[inum]->getID() == icustid)
		{
			return( customerPtr[inum]->getRentStatus() );
		}
	}
	cout<<endl<<"CUSTOMER WIHT ID: "<<icustid<<" NOT FOUND"<<endl;
	return false;
}

void CarRentalManagement::getCustomerType(int icarid) // PART K
{
	int icustid;

	for(int ifig = 0; ifig< NumCar;ifig++)
	{
		if( (carPtr[ifig]->getnum()) == icarid)
		{
			icustid = carPtr[ifig]->getBorrower();

			for(int inum = 0 ;inum < NumCustomer; inum++)
			{
				if( (customerPtr[inum]->getID()) == icustid) // search by id
				{
					cout<<"The Car with ID: "<<icarid<<" is rented to a "<<customerPtr[inum]->getType()<<" customer."<<endl;
					return;
				}
			}
		}
	}
	cout<<"Couldnt found a car with ID: "<<icarid<<" or car is not being rented."<<endl;
}

void CarRentalManagement::getCarType(string snameCo)
{
	int icarid(0);
	for(int inum = 0 ;inum < NumCustomer; inum++)
	{
		if(customerPtr[inum]->getName() == snameCo && customerPtr[inum]->getType() == "Corporate")
		{
			icarid = customerPtr[inum]->getRentedID();

			for(int ifig = 0; ifig< NumCar;ifig++)
			{
				if( (carPtr[ifig]->getnum()) == icarid)
				{
					cout<<"The Customer with ID: "<<customerPtr[inum]->getID()<<" of company "<<snameCo<<" is renting "<<carPtr[ifig]->getype()<<" of car."<<endl;
				}
			}
		}
	}
	if(icarid == 0)
	{
		cout<<"Company is either not found or not renting any car."<<endl;
	}
}

CarRentalManagement::~CarRentalManagement()
{
	
}

