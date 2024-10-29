#include <exception>
using namespace std;

#ifndef __LandmarkBuildingFactory_h__
#define __LandmarkBuildingFactory_h__

// #include "LandmarkBuilding.h"
// #include "CommercialBuilding.h"
// #include "IndustrialBuilding.h"
#include "BuildingFactory.h"

class LandmarkBuilding;
class CommercialBuilding;
class IndustrialBuilding;
// class BuildingFactory;
class LandmarkBuildingFactory;

class LandmarkBuildingFactory: public BuildingFactory
{

	public: LandMarkBuilding* createPark(int aX, int aY);

	public: LandmarkBuilding* createMonument(int aX, int aY);

	public: void createResidential(const std::string& aType);

	public: CommercialBuilding* createCommercial(const std::string& aType);

	public: IndustrialBuilding* createIndustrial(const std::string& aType);

	public: LandmarkBuilding* createLandmark(const std::string& aType);
};

#endif
