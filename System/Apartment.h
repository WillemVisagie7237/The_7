#include <exception>
#include <string>
using namespace std;

#ifndef __Apartment_h__
#define __Apartment_h__

#include "ResidentialBuilding.h"

// class ResidentialBuilding;
class Apartment;

class Apartment: public ResidentialBuilding
{

	public: void construct();

	public: void maintain();

	public: double getMaintenanceCost();

	public: int getSize();

	public: string getBuildingType();

	public: int getResidentCapacity();

	public: double getHappinessContribution();
};

#endif
