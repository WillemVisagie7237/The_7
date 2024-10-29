#ifndef RESIDENTIALBUILDINGFACTORY_H
#define RESIDENTIALBUILDINGFACTORY_H

class ResidentialBuildingFactory : public BuildingFactory {


public:
	ResidentialBuildingFactory(std::string buildingName, int x, int y) : BuildingFactory(buildingName, x, y) {}
	
	virtual Building* createBuilding();
};

#endif
