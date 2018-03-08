/*
Programmer:Jean Carlos Ng
ID: 40026914
ProgrammerGabriel Arturo Giordan
ID: 40065184
*/

#ifndef _CARRENTALMANAGEMENT_H_
#define _CARRENTALMANAGEMENT_H_

#include"car.h"
#include"corporate.h"
#include"vip.h"
#include"regular.h"

#include<iostream>

using namespace std;

class CarRentalManagement
{

  public:
  
    CarRentalManagement();//default constructor

    ~CarRentalManagement(); // destructor

    void AddCar(int,string);// part a)
    void AddCustomer(int,string,string,string,string,string,string); // part c)

    void RemoveCar(int);// part b)
    void RemoveCustomer(int);// part d)

    void RentCar(int);//part  e)

    void UpdateCarInfo(int);// part f)

    int getPriviledge(int)const;// part g)
    void setPriviledge(int,string);// part h)

    bool statusCar(int); // part i)  //or maybe use a void not sure yet
    bool statusCustomer(int); //part  j) //or maybe use a void not sure yet

    void getCustomerType(int); // part k)
    void getCarType(string); //part  l)
  
  
  private:
	Customer *customerPtr[100]; // set max limit of a arry of cutomer pointer
	Car *carPtr[100];// set max limit of a arry of car pointer
	int regularpriv, coporatedpriv, vippriv; // variable declaration
	int NumCar, NumCustomer,LimitCar, LimitCustomer;// variable declaration



};
#endif
