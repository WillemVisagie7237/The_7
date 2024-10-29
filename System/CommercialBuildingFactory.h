#include <exception>
using namespace std;

#ifndef __CommercialBuildingFactory_h__
#define __CommercialBuildingFactory_h__

// #include "CommercialBuilding.h"
// #include "IndustrialBuilding.h"
// #include "LandmarkBuilding.h"
#include "BuildingFactory.h"

class CommercialBuilding;
class IndustrialBuilding;
class LandmarkBuilding;
// class BuildingFactory;
class CommercialBuildingFactory;

class CommercialBuildingFactory: public BuildingFactory
{

	public: CommercialBuilding* createShop(int aX, int aY);

	public: CommercialBuilding* createOffice(int aX, int aY);

	public: void createResidential(const std::string& aType);

	public: CommercialBuilding* createCommercial(const std::string& aType);

	public: IndustrialBuilding* createIndustrial(const std::string& aType);

	public: LandmarkBuilding* createLandmark(const std::string& aType);
};

#endif
