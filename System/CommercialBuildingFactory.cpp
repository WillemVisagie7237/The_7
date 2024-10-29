#include <exception>
using namespace std;

#include "CommercialBuildingFactory.h"
#include "CommercialBuilding.h"
#include "IndustrialBuilding.h"
#include "LandmarkBuilding.h"
#include "BuildingFactory.h"

CommercialBuilding* CommercialBuildingFactory::createShop(int aX, int aY) {
	throw "Not yet implemented";
}

CommercialBuilding* CommercialBuildingFactory::createOffice(int aX, int aY) {
	throw "Not yet implemented";
}

void CommercialBuildingFactory::createResidential(const std::string& aType) {
	throw "Not yet implemented";
}

CommercialBuilding* CommercialBuildingFactory::createCommercial(const std::string& aType) {
	throw "Not yet implemented";
}

IndustrialBuilding* CommercialBuildingFactory::createIndustrial(const std::string& aType) {
	throw "Not yet implemented";
}

LandmarkBuilding* CommercialBuildingFactory::createLandmark(const std::string& aType) {
	throw "Not yet implemented";
}

