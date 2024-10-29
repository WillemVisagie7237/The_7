#ifndef BUILDINGFACTORY_H
#define BUILDINGFACTORY_H

#include "Building.h"

class BuildingFactory {

protected:
	const std::string& BUILDING_TYPE;
	const int LOCATION_X;
	const int LOCATION_Y;

public:
	BuildingFactory(std::string& buildingType, int x, int y) : BUILDING_TYPE(buildingType), LOCATION_X(x), LOCATION_Y(y) {}
	virtual Building* createBuilding() = 0;
	virtual ~BuildingFactory() = default;
};

#endif
