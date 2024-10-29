#include <exception>
using namespace std;

#ifndef __ResidentialBuilding_h__
#define __ResidentialBuilding_h__

#include "Building.h"

// class Building;
class ResidentialBuilding;

__abstract class ResidentialBuilding: public Building
{
	private: int _sewageProduction;

	public: virtual int getResidentCapacity() = 0;

	public: virtual double getHappinessContribution() = 0;
};

#endif
