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
}
/*
CarRentalManagement::CarRentalManagement()
{
	
}
*/

CarRentalManagement::AddCar(int inum, string stype)
{
	carPtr[Numcar] = new car(inum,stype);
	Numcar++;
}

CarRentalManagement::RemoveCar(int iNumcar)
{
	for(int inum = iNumcar; inum < Numcar; inum++)
	{
		carPtr[iNumcar] = carPtr[iNumcar + 1];
	}
	Numcar--;
}






    void RemoveCustomer();// d)

