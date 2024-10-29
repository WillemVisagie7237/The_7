#include <exception>
using namespace std;

#include "IndustrialBuildingFactory.h"
#include "IndustrialBuilding.h"
#include "CommercialBuilding.h"
#include "LandmarkBuilding.h"
#include "BuildingFactory.h"

IndustrialBuilding* IndustrialBuildingFactory::createFactory(int aX, int aY) {
	throw "Not yet implemented";
}

IndustrialBuilding* IndustrialBuildingFactory::createWarehouse(int aX, int aY) {
	throw "Not yet implemented";
}

void IndustrialBuildingFactory::createResidential(const std::string& aType) {
	throw "Not yet implemented";
}

CommercialBuilding* IndustrialBuildingFactory::createCommercial(const std::string& aType) {
	throw "Not yet implemented";
}

IndustrialBuilding* IndustrialBuildingFactory::createIndustrial(const std::string& aType) {
	throw "Not yet implemented";
}

LandmarkBuilding* IndustrialBuildingFactory::createLandmark(const std::string& aType) {
	throw "Not yet implemented";
}

