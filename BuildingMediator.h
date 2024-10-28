#ifndef BUILDINGMEDIATOR_H
#define BUILDINGMEDIATOR_H

class BuildingMediator : CityMediator {

private:
	BuildingFactory buildingFactory;
	BuildingIterator buildings;

public:
	string build(string buildingName);

	void assignCitizenBuildings(Citizen citizen);

	bool demolish(int locationX, int locationY);
};

#endif
