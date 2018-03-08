/*
Programmer:Jean Carlos Ng
ID: 40026914
ProgrammerGabriel Arturo Giordan
ID: 40065184
*/

#include"carrentalmanagement.h"


CarRentalManagement::CarRentalManagement()
{

	NumCar = 0; //inizializing values (total number of car in inventory)
	NumCustomer = 0;//inizializing values(total number of custoemr in inventory)
	LimitCar = 100;//inizializing values (max number of car in invetory)
	LimitCustomer = 100;//inizializing values(max number of customer in database)
}

void CarRentalManagement::AddCar(int inum, string stype) // PART A
{
	if(NumCar < LimitCar) // if number of car less than limit
	{
		carPtr[NumCar] = new Car(inum,stype); // create object car with given parameter
		NumCar++; // add 1 to NumCar
	}
	else
	{
		cout<<endl<<"UNABLE TO ADD CAR. LIMITE OF CAR REACH"<<endl;//display text
	}
}

void CarRentalManagement::RemoveCar(int iNumcar) // PART B
{
	
	for(int inum = 0; inum < NumCar; inum++) // loop through all the cars in inventory
	{	
		if(carPtr[inum]->getnum() == iNumcar ) // check num of a given object is equal to iNumcar
		{
			for(int ifig = inum; ifig < NumCar -1; ifig++) // move all the object from the one being remove to the last one available
			{
				carPtr[ifig] = carPtr[ifig + 1]; //move 
			}
			NumCar--; // NumCar - 1
			cout<<"Car with ID: "<<iNumcar<<" have been removed."<<endl;
			return; // return once done
		}
	}
	cout<<endl<<iNumcar<<" CAR NOT FOUND. UNABLE TO REMOVE"<<endl; // display text
}

void CarRentalManagement::AddCustomer(int inum, string sname, string saddress, string stell, string stype, string snameCo, string saddreCo)
{
	if(stype == "VIP") // if stype is VIP enter
	{
		customerPtr[NumCustomer] = new VIP(inum,sname,saddress,stell); // create object VIP
	}
	else
	{
		if(stype == "Regular")// if stype is Regular enter
		{
			customerPtr[NumCustomer] = new Regular(inum,sname,saddress,stell);// create object Regular
		}
		else// if stype is Corporate enter
		{
			customerPtr[NumCustomer] = new Corporate(inum,sname,saddress,stell,snameCo, saddreCo); // create object Corporate
		}
	}
	NumCustomer++;//add 1 to NumCustomer
}

void CarRentalManagement::RemoveCustomer(int numID){ // PART D

	for (int i = 0; i < NumCustomer; i++){ // PART C
		if(customerPtr[i]->getID() == numID){ // check ID of a given obejct is equal to numID
			for (int j = i; j < NumCustomer -1; j++){ // move all the obejct from the index that made the if statement true until the last object available
				customerPtr[j] = customerPtr[j+1]; // move object in the next index down
			}
			NumCustomer--; // NumCustomer - 1
			cout<<"Customer with ID: "<<numID<<" have been removed."<<endl;
			return;
		}
	}
	cout << endl << "Customer # " << numID << " could not be found." << endl; // display text plus numID
}

void CarRentalManagement::RentCar(int id) // PART E
{
	for(int inum = 0 ;inum < NumCustomer; inum++) // loop through all the customer
	{
		if(customerPtr[inum]->getID() == id) // search all the object and see if it is the same as a given id
		{
			for(int ifig = 0; ifig< NumCar;ifig++)	 // loop through all the car in the inventory
			{
				if(customerPtr[inum]->getType() == "VIP" || customerPtr[inum]->getType() == "Corporate") // if it is "VIP" or "Corporate"
				{
					if(carPtr[ifig]->getStatus()) // check if the car is available
					{
						carPtr[ifig]->setStatus(false); // set car status to unavailable
						carPtr[ifig]->setBorrower(customerPtr[inum]->getID());//give the customer id to the car and set is as Idborrower

						customerPtr[inum]->RentedCar(carPtr[ifig]->getnum(),true); // give the car id and set brentedcar as true which renting a car
						return;
					}
				}
				else
				{
					if(carPtr[ifig]->getype() == "Standard" && carPtr[ifig]->getStatus() )  // if the customer is regular he can only rent standar cars therefore only check for standar cars and if they are avilable
						{
							carPtr[ifig]->setStatus(false);// set car status to unavailable
							carPtr[ifig]->setBorrower(customerPtr[inum]->getID());//give the customer id to the car and set is as Idborrower

							customerPtr[inum]->RentedCar(carPtr[ifig]->getnum(),true);// give the car id and set brentedcar as true which renting a car
							return;
						}
				}
			}
		}
	}
}

void CarRentalManagement::UpdateCarInfo(int icarid) // PART F
{
	int itemp(0);
	for(int ifig = 0; ifig< NumCar;ifig++) // check for all the car in inventory
	{
		if( (carPtr[ifig]->getnum()) == icarid) // search by id
		{
			itemp = carPtr[ifig]->getBorrower();//save borrower id
			carPtr[ifig]->setStatus(true); // set status to true which mean no rented
			carPtr[ifig]->setBorrower(0); // set Idborrower to 0 which mean no one is renting it
			cout<<"Car with ID: "<<icarid<<" have been return."<<endl;
		}
	}
	
	for(int inum = 0 ;inum < NumCustomer; inum++) // check for all the customer in database
	{
		if(customerPtr[inum]->getID() == itemp) // search by id
		{
			customerPtr[inum]->RentedCar(0,false); // set customer info to 0 and false which mean customer not renting a car therefore id car is zero which doesnt exist
			cout<<"Customer with ID: "<<customerPtr[inum]->getID()<<" is no longer renting a car."<<endl;
		}
	}
}


int CarRentalManagement::getPriviledge(int id) const // PART G
{

	for(int inum = 0 ;inum < NumCustomer; inum++)//  check for all the customer in database
	{
		if(customerPtr[inum]->getID() == id) // check object id 
		{
			return( customerPtr[inum]->getPrivilege() ); // return the object privilege 
		}
	}
	cout<<endl<<"CUSTOMER WIHT ID: "<<id<<" NOT FOUND"<<endl; // if there was no obeject with that id print txt
	return 0;//return 0 meaning  id not found
}

void CarRentalManagement::setPriviledge(int ipriv, string stype) // PART H
{
	for(int inum = 0 ; inum < NumCustomer; inum++) // search through all the customer in database
	{
		if(customerPtr[inum]->getType() == stype) // hcek by type
		{
			customerPtr[inum]->setPrivilege(ipriv); // set all the custoemr of stype with ipriv as a privilege
		}
	}
	cout<<"Privilege of Customer type "<<stype<<" have been change to "<<ipriv<<endl;
}

bool CarRentalManagement::statusCar(int icarid) // PART I
{
	for(int ifig = 0; ifig< NumCar;ifig++) //searhc through all the car database
	{
		if( (carPtr[ifig]->getnum()) == icarid) // check object id
		{
			return ( carPtr[ifig]->getStatus() ); // return the status of the car if rented or not
		}
	}
	cout<<endl<<"CAR WIHT ID: "<<icarid<<" NOT FOUND"<<endl; // print if car not fount
	return false; 
}

bool CarRentalManagement::statusCustomer(int icustid) // PART J
{
	for(int inum = 0 ;inum < NumCustomer; inum++) // check trough all the customer 
	{
		if(customerPtr[inum]->getID() == icustid) // hceck object id
		{
			return( customerPtr[inum]->getRentStatus() ); // status of customer if it is renting a car or not
		}
	}
	cout<<endl<<"CUSTOMER WIHT ID: "<<icustid<<" NOT FOUND"<<endl;  // print if customer can not be found
	return false;
}

void CarRentalManagement::getCustomerType(int icarid) // PART K
{
	int icustid; // temp variable

	for(int ifig = 0; ifig< NumCar;ifig++) //check through all the car in database
	{
		if( (carPtr[ifig]->getnum()) == icarid) // chekc object car id
		{
			icustid = carPtr[ifig]->getBorrower(); // set temp variable with the id of the customer store in car

			for(int inum = 0 ;inum < NumCustomer; inum++) // search through all the customer
			{
				if( (customerPtr[inum]->getID()) == icustid) // search by id
				{
					cout<<"The Car with ID: "<<icarid<<" is rented to a "<<customerPtr[inum]->getType()<<" customer."<<endl; //print text plus retunr of the funtions.
					return;
				}
			}
		}
	}
	cout<<"Couldnt found a car with ID: "<<icarid<<" or car is not being rented."<<endl;//print text
}

void CarRentalManagement::getCarType(string snameCo)
{
	int icarid(0); // inizialize a temp variable
	for(int inum = 0 ;inum < NumCustomer; inum++) //check for all the customer in database
	{
		if(customerPtr[inum]->getName() == snameCo && customerPtr[inum]->getType() == "Corporate") //check for the name of the corporating and if it is corporated
		{
			icarid = customerPtr[inum]->getRentedID(); // return the car id store in the customer renting the car

			for(int ifig = 0; ifig< NumCar;ifig++) // search for all the customer in database
			{
				if( (carPtr[ifig]->getnum()) == icarid) // check by id
				{
					cout<<"The Customer with ID: "<<customerPtr[inum]->getID()<<" of company "<<snameCo<<" is renting "<<carPtr[ifig]->getype()<<" of car."<<endl; //print text
				}
			}
		}
	}
	if(icarid == 0) // name of the company was not found 
	{
		cout<<"Company is either not found or not renting any car."<<endl; //print text
	}
}

void CarRentalManagement::print()const
{
	//print all the car info store in database
	cout<<endl<<"List of Car in database"<<endl;
	for(int ifig = 0; ifig < NumCar; ifig++)
	{
		carPtr[ifig]->print();
	}
	
	//print all the customer info in database
	cout<<endl<<"List of the customer in database"<<endl;
	for(int inum = 0;  inum < NumCustomer; inum++)
	{
		customerPtr[inum]->print();
	}
}

CarRentalManagement::~CarRentalManagement()
{
	
}

