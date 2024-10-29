#ifndef BUILDINGFACTORY_H
#define BUILDINGFACTORY_H

class BuildingFactory {

protected:
	std::string& BUILDING_TYPE;
	int LOCATION_X;
	int LOCATION_Y;

public:
	Building* createBuilding();
};

#endif
