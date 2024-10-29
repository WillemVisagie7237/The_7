#include <exception>
using namespace std;

#include "LandmarkBuildingFactory.h"
#include "LandmarkBuilding.h"
#include "CommercialBuilding.h"
#include "IndustrialBuilding.h"
#include "BuildingFactory.h"

LandMarkBuilding* LandmarkBuildingFactory::createPark(int aX, int aY) {
	throw "Not yet implemented";
}

LandmarkBuilding* LandmarkBuildingFactory::createMonument(int aX, int aY) {
	throw "Not yet implemented";
}

void LandmarkBuildingFactory::createResidential(const std::string& aType) {
	throw "Not yet implemented";
}

CommercialBuilding* LandmarkBuildingFactory::createCommercial(const std::string& aType) {
	throw "Not yet implemented";
}

IndustrialBuilding* LandmarkBuildingFactory::createIndustrial(const std::string& aType) {
	throw "Not yet implemented";
}

LandmarkBuilding* LandmarkBuildingFactory::createLandmark(const std::string& aType) {
	throw "Not yet implemented";
}

