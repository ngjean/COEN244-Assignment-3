#ifndef _CARRENTALMANAGEMENT_H_
#define _CARRENTALMANAGEMENT_H_

#include"car.cpp"
#include"customer.cpp"
#include"corporate.cpp"
#include"vip.cpp"
#include"regular.cpp"

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
    void AddCustomer(const Regular&); // c.1)
    void AddCustomer(const Corporate&);  //c.2)
    void AddCustomer(const VIP&);  //c.3)
	
    void RemoveCar(int);// b)
    void RemoveCustomer(int);// d)

    void RentCar(int);// e)

    void UpdateCarInfo();// f)

    int getPriviledge(int)const;// g)
    void setPriviledge(int,string);// h)

    bool statusCar(); // i)  //or maybe use a void not sure yet
    bool statusCustomer(); // j) //or maybe use a void not sure yet

    void getCustomerType(string); // k)
    void getCarType(string); // l)
  
  
  private:
	Customer *customerPtr[100];
	Car *carPtr[100];
	int regularpriv, coporatedpriv, vippriv;
	int Numcar, NumCustomer,LimitCar, LimitCustomer;



};
#endif
