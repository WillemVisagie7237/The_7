#include <exception>
using namespace std;

#ifndef __IndustrialBuildingFactory_h__
#define __IndustrialBuildingFactory_h__

// #include "IndustrialBuilding.h"
// #include "CommercialBuilding.h"
// #include "LandmarkBuilding.h"
#include "BuildingFactory.h"

class IndustrialBuilding;
class CommercialBuilding;
class LandmarkBuilding;
// class BuildingFactory;
class IndustrialBuildingFactory;

class IndustrialBuildingFactory: public BuildingFactory
{

	public: IndustrialBuilding* createFactory(int aX, int aY);

	public: IndustrialBuilding* createWarehouse(int aX, int aY);

	public: void createResidential(const std::string& aType);

	public: CommercialBuilding* createCommercial(const std::string& aType);

	public: IndustrialBuilding* createIndustrial(const std::string& aType);

	public: LandmarkBuilding* createLandmark(const std::string& aType);
};

#endif
