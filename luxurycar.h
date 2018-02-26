#ifndefine _LUXYRYCAR_H_
#define _LUXYRYCAR_H_

#include "car.h"

class Luxurycar : public Car
{

  Luxury();
  Luxury(int,string);
  
  void setStatus(bool);
		
	bool getStatus() const;


};
#endif
