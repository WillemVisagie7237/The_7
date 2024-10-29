#include <exception>
using namespace std;

#include "ResidentialBuildingFactory.h"
#include "ResidentialBuilding.h"
#include "CommercialBuilding.h"
#include "IndustrialBuilding.h"
#include "LandmarkBuilding.h"
#include "BuildingFactory.h"

ResidentialBuilding ResidentialBuildingFactory::createHouse(int aX, int aY) {
	throw "Not yet implemented";
}

ResidentialBuilding* ResidentialBuildingFactory::createTownhouse(int aX, int aY) {
	throw "Not yet implemented";
}

ResidentialBuilding* ResidentialBuildingFactory::createApartment(int aX, int aY) {
	throw "Not yet implemented";
}

void ResidentialBuildingFactory::createResidential(const std::string& aType) {
	throw "Not yet implemented";
}

CommercialBuilding* ResidentialBuildingFactory::createCommercial(const std::string& aType) {
	throw "Not yet implemented";
}

IndustrialBuilding* ResidentialBuildingFactory::createIndustrial(const std::string& aType) {
	throw "Not yet implemented";
}

LandmarkBuilding* ResidentialBuildingFactory::createLandmark(const std::string& aType) {
	throw "Not yet implemented";
}

