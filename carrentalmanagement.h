#ifndefine _CARRENTALMANAGEMENT_H_
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
    CarRentalManagement();

    ~CarRentalManagement();

    void AddCar();// a)
    void AddCustomer();// c)

    void RemoveCar();// b)
    void RemoveCustomer();// d)

    void RentCar();// e)

    void UpdateCarInfo();// f)

    int getPriviledge()const;// g)
    void setPriviledge(int);// h)

    bool statusCar(); // i)  //or maybe use a void not sure yet
    bool statusCustomer(); // j) //or maybe use a void not sure yet

    void getCustomerType(string); // k)
    void getCarType(string); // l)
  
  
  private:




};
#endif
