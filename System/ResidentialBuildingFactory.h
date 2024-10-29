#include <exception>
using namespace std;

#ifndef __ResidentialBuildingFactory_h__
#define __ResidentialBuildingFactory_h__

#include "ResidentialBuilding.h"
// #include "CommercialBuilding.h"
// #include "IndustrialBuilding.h"
// #include "LandmarkBuilding.h"
#include "BuildingFactory.h"

class ResidentialBuilding;
class CommercialBuilding;
class IndustrialBuilding;
class LandmarkBuilding;
// class BuildingFactory;
class ResidentialBuildingFactory;

class ResidentialBuildingFactory: public BuildingFactory
{

	public: ResidentialBuilding createHouse(int aX, int aY);

	public: ResidentialBuilding* createTownhouse(int aX, int aY);

	public: ResidentialBuilding* createApartment(int aX, int aY);

	public: void createResidential(const std::string& aType);

	public: CommercialBuilding* createCommercial(const std::string& aType);

	public: IndustrialBuilding* createIndustrial(const std::string& aType);

	public: LandmarkBuilding* createLandmark(const std::string& aType);
};

#endif
