#ifndef _CARRENTALMANAGEMENT_H_
#define _CARRENTALMANAGEMENT_H_

#include"car.h"
#include"customer.h"
#include"corporate.h"
#include"vip.h"
#include"regular.h"

//concern about mutiple include of the same class like customer since it is already include in vip,regular,coporate

#include<iostream>

using namespace std;

class CarRentalManagement
{

  public:
  
    CarRentalManagement();//default
    //CarRentalManagement();

    ~CarRentalManagement();

    void AddCar(int,string);// a)
    void AddCustomer(int,string,string,string,string,string,string); // c)
   // void AddCustomer( Regular&); // c.1)
    //void AddCustomer(const Corporate&);  //c.2)
    //void AddCustomer(const VIP&);  //c.3)
	
    void RemoveCar(int);// b)
    void RemoveCustomer(int);// d)

    void RentCar(int);// e)

    void UpdateCarInfo(int,int);// f)

    int getPriviledge(int)const;// g)
    void setPriviledge(int,string);// h)

    bool statusCar(int); // i)  //or maybe use a void not sure yet
    bool statusCustomer(int); // j) //or maybe use a void not sure yet

    void getCustomerType(int); // k)
    void getCarType(string); // l)
  
  
  private:
	Customer *customerPtr[100];
	Car *carPtr[100];
	int regularpriv, coporatedpriv, vippriv;
	int NumCar, NumCustomer,LimitCar, LimitCustomer;



};
#endif
